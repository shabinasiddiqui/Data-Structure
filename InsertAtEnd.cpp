#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

Node* InsertEnd(Node* ptr,int data){
    Node* end =new Node();
    
    while(ptr!=NULL){
       if(ptr->next==NULL){
         ptr->next=end;
         end->next = NULL;
    }
   
    }
    Node* beg = new Node();
    beg->next = ptr;
    beg->data = data;
    return beg;
}


void Print(Node * ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    int data;
    cout<<"Insert data at beginning:"<<endl;
    cin>>data;
 
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
    
    Node* newhead=InsertEnd(head,data);
    Print(newhead);
    

    return 0;
}
