/*
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;

}node;

*/

//given root of the tree and the string s in form like '1000110' 1->A, 00->B, 01->C VISUALIZE THIS AS A TREE
void decode_huff(node * root,string s)
{
    node* tmp = root;
    for(auto i : s)
    {
        if(i == '1'){
            tmp = tmp->right;
        }
        else if(i == '0')
            tmp = tmp->left;

        if(!tmp->left && !tmp->right)
        {
            cout << tmp->data;
            tmp = root;
        }
     }
}
