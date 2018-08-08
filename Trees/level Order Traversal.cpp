
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

 void LevelOrder(Node * root, queue<Node*> &x)  //pass empty queue to the function
{
    Node* y;
    cout << root->data <<  ' ';
    if(root->left)
        x.push(root->left);
    if(root->right)
        x.push(root->right);
    if(!x.empty()){
            y = x.front();
            x.pop();
        LevelOrder(y, x);
    }
}
