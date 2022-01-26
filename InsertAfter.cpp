#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void InsertAfter(Node* ptr,int data,int after){
    Node* temp =new Node();      //allocate memory for new node 
    temp->data=data;            //added data in new created node
    temp->next=NULL;              
    
    while(ptr->data!=after){  
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;

}



void Print(Node * ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main()
{
    int data,after;
    cout<<"Insert data  : ";
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

    cout<<"Given list: "<<endl;
    Print(head);
    cout<<"Insert data after which node ?";
    cin>>after;

    InsertAfter(head,data,after);
    cout<<"After inserting data  after "<<after<<":"<<endl;
    Print(head);
    

    return 0;
}
