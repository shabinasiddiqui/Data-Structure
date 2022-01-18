#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void Print(Node * ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    Node *head=NULL;
    Node *first = NULL;
    Node *second=NULL;
    Node *third = NULL;
    
    head = new Node();
    first = new Node();
    second= new Node();
    third = new Node();
    
    head->data = 4;
    head->next=first;
    
    first->data = 6;
    first->next=second;
    
    second->data = 11;
    second->next=third;
    
    third->data = 1;
    third->next=NULL;
    
    Print(head);

    return 0;
}
