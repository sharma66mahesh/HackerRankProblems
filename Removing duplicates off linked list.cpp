#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
              Node* removeDuplicates(Node *head)
          {
            //Write your code here]
              Node *t1 = head;
              Node *t2 = head;
              while(t1 != NULL && t1->next != NULL)
              {
                  t2 = t1;
                  while(t2->next != NULL)
                  {
                      if(t1->data == t2->next->data)
                      {
                          t2->next = t2->next->next;
                      }
                      else
                        t2 = t2->next;
                  }
                  t1 = t1->next;
              }
              return head;
        }

            Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;

               }
                    return head;


          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    head=mylist.removeDuplicates(head);

	mylist.display(head);

}
