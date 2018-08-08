/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method.
    
    Node* n = new Node;
    n->data = data;
    
    if(!head){
        n->next = NULL;
        n->prev = NULL;
        return n;
    }
    Node* temp = head;
    while(temp->next != NULL && data > temp->data){
        temp = temp->next;
    }
        
    if(temp->data < data){      //loop stopped because we are at the end of the list
        //insert after temp
        n->next = NULL;
        n->prev = temp;
        temp->next = n;
        return head;
    }
    else{                       //insert before temp
        n->next = temp;
        n->prev = temp->prev;
        if(temp->prev != NULL){
            temp->prev->next = n;
            temp->prev = n;
            return head;
        }
        else{       //n is inserted at the beginning of the list
            temp->prev = n;
            return n;
        }
    }
}
