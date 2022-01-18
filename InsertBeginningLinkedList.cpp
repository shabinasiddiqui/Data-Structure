#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

Node* InsertBeg(Node* ptr,int data){
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
    cout<<"Insert data at beginning: ";
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
    
    Node* newhead=InsertBeg(head,data);
    cout<<"After Inserting data at beginning of Node: "<<endl;
   Print(newhead);
    

    return 0;
}
