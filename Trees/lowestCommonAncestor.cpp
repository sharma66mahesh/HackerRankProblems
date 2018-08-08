//return lowest common ancestor of two nodes v1 and v2

/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    if((root->data - v1) * (root->data - v2) <= 0)
        return root;
    node* x = lca(root->data < v1 ? root->right : root->left, v1, v2);
    return x;
}
