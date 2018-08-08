/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    Node* t = head;
    Node* x = head;
    if(!head || !head->next)
        return head;
    while(x->next){
        x = x->next;
    }
    Node* retval = x;
    while(x){
        t = x->next;
        x->next = x->prev;
        x->prev = t;
        x = x->next;
    }
    return retval;
}
