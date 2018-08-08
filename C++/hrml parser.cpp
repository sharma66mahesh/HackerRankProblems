/*Input Format

The first line consists of two space separated integers, N and Q. N specifies the number of lines in the HRML source program. Q specifies the number of queries.

The following N lines consist of either an opening tag with zero or more attributes or a closing tag.

Q queries follow. Each query consists of string that references an attribute in the source program.

Constraints
1 < N < 20
1 < Q < 20

Each line in the source program contains, at max, 200 characters.
Every reference to the attributes in the Q queries contains at max 200 characters.
All tag names are unique.

Output Format

Print the value of the attribute for each query. Print "Not Found!" without quotes if there is no such attribute in the source program.
*/
#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<map>
#include<regex>
using namespace std;

class HRMLTag {
    public:
    string name;
    map<string, string> attrs;
    HRMLTag* parent;
    vector<HRMLTag*> children;

    HRMLTag(string tName) {
        name = tName;
        parent = nullptr;
    }

    HRMLTag(string tName, string tAttrs) {
    	parent = nullptr;
        name = tName;
        stringstream ssAttrs(tAttrs);
        string aName, temp, aValue;

        while(ssAttrs >> aName >> temp >> aValue) {
            aValue.erase(0, 1);
            aValue.erase(aValue.size() - 1);

            attrs.insert(make_pair(aName, aValue));
        }
    }
};

void parseLines(int lines, HRMLTag *root) {
    int i;
    string line;
    HRMLTag *temp, *currentOpen = root;

    regex match("<(?!/)([^ ]+)(?: ([^>]+))?>");
    smatch result;

    string tName, tAttrs;

    for (i = 0; i < lines; i++) {
        getline(cin, line);

        if (regex_match(line, result, match)) {
            // open tag
            tName = result[1].str();

            if (result[2].matched) {
                // there's attributes
                tAttrs = result[2].str();
                temp = new HRMLTag(tName, tAttrs);
            } else {
                // there's no attributes
                temp = new HRMLTag(tName);
            }

            if (currentOpen) {
                currentOpen->children.push_back(temp);
                temp->parent = currentOpen;
            }

            currentOpen = temp;
        } else if (currentOpen->parent) {
            // close tag
            currentOpen = currentOpen->parent;
        }
    }
}

string search(vector<string> *queryPtr, HRMLTag *root) {
    int i;
    HRMLTag *temp = nullptr;
    vector<string> &query = *queryPtr;
    string queryName = query[0];

    if (query.size() == 1) {

        map<string,string>::iterator itr = root->attrs.find(queryName);

        if (itr != root->attrs.end()) {
            return root->attrs[queryName];
        } else {
            return "Not Found!";
        }
    } else {
        query.erase(query.begin());

        for (i = 0; i < root->children.size(); i++) {
            if (root->children[i]->name == queryName) {
                temp = root->children[i];
                break;
            }
        }

        if (temp) {
            return search(queryPtr, temp);
        } else {
            return "Not Found!";
        }
    }
}

vector<string> *parseQuery(string query) {
    stringstream s(query);
	string tmp;
    vector<string> *result = new vector<string>();

	while(!s.eof()) {
		getline(s, tmp, '.');

        if (!s.eof()) {
            result->push_back(tmp);
        }
	}

	s.clear();
	s.str(tmp);

    getline(s, tmp, '~');
    result->push_back(tmp);

    getline(s, tmp, '~');
    result->push_back(tmp);

    return result;
}

int main()
{
    int lines, queries, i;
    string queryS, rootName, tempName;
    HRMLTag root("root");
    cin >> lines >> queries >> ws;

    parseLines(lines, &root);

    for (i = 0; i < queries; i++) {
        getline(cin, queryS);
        vector<string> *query = parseQuery(queryS);
		tempName = search(query, &root);
        cout << tempName << endl;
    }

    return 0;
}
