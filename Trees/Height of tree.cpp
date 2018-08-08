#include <iostream>
#include <cstddef>
#include<queue>

using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int max(int a, int b){
        int r = a>b?a:b;
        return r;
    }

    int getHeight(Node* root) {
        // Write your code here.
        if(!root)
            return -1;
        if(!root->left && !root->right)
            return 0;
        return 1+max(getHeight(root->left), getHeight(root->right));
    }

    void printLeft(Node* root)
    {
        if(!root)
            return;
        if(root->left)
            printLeft(root->left);
        cout << root->data << ' ';
    }


    void printRight(Node* root)
    {
        if(!root)
            return;
        cout << root->data << ' ';
        if(root->right)
            printRight(root->right);
    }


    void top_view(Node * root)
    {
        if(!root)
            return;
        printLeft(root);
        printRight(root->right);
    }

  }; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;
    return 0;
}



