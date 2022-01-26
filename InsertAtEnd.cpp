#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void InsertEnd(Node* ptr,int data){
    Node* end =new Node();      //allocate memory for new node 
    end->data=data;            //added data in new created node
    end->next=NULL;              
    
    while(ptr->next!=NULL){  
        ptr=ptr->next;
        
    }
    ptr->next=end;
}



void Print(Node * ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    int data;
    cout<<"Insert data at the end of the node : ";
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
    
    InsertEnd(head,data);
    cout<<"After inserting data at the end of the node :"<<endl;
    Print(head);
    

    return 0;
}
