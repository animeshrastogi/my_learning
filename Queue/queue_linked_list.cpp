
#include <stdio.h>
#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
};
Node* head;
Node* tail;

//O(1)
void enqueue(int data){
    Node* insert = new Node;
    insert->data = data;
    if(head==NULL){
        head = insert;
        tail = insert;
        insert->next = NULL;
        return;
    }
    insert->next = NULL;
    tail->next = insert;
    tail = insert;
}

//O(1)
void dequeue(){
    if(head==NULL){
        cout<<"Empty Queue\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    if(head==NULL)
        tail = NULL;
    
}

//O(1)
void peek(){
    if(head!=NULL){
        cout<<head->data<<"\n";
    }
}

//O(n)
void remove_all(){
    
    Node* temp=head;
    
    while(temp!=NULL){
        head = head->next;
        cout<<"Deleting "<<temp->data<<"\n";
        delete temp;
        temp = head;
    }
    tail = NULL;
}
int main()
{
    head = NULL;
    tail = NULL;
    enqueue(2);
    enqueue(5);
    enqueue(8);
    enqueue(8);
    dequeue();
    dequeue();
    enqueue(100);
    enqueue(200);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}
