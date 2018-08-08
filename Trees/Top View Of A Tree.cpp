/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void printLeft(node* root)
{
    if(!root)
        return;
    if(root->left)
        printLeft(root->left);
    cout << root->data;
}


void printRight(node* root)
{
    if(!root)
        return;
    if(root->right)
        printRight(root->right);
    cout << root->data;
}


void top_view(node * root)
{
    if(!root)
        return;
    printLeft(root);
    printRight(root->right);
}
