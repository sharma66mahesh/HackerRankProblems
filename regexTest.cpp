#include<iostream>
#include<regex>
using namespace std;

int main()
{
    regex r { R"(a.*b)" };
    string a;
    getline(cin, a);
    smatch x{};
    if(regex_match(a,x, r)){
        cout << "matched";
    }
    for(auto xx: x){
        cout << endl << xx.str();
    }
}
