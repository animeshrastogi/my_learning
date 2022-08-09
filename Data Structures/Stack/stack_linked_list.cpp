//Implement Stack using linked list
#include <stdio.h>
#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
};
Node* head;

void push(int data){
    Node* insert = new Node;
    insert->data = data;
    insert->next = head;
    head = insert;
}

void pop(){
    Node* temp = head;
    head = head->next;
    delete temp;
}

void print_stack(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    cout<<"Done\n";
}
int main()
{
    head = NULL;
    push(2);
    push(3);
    push(4);
    print_stack();
    pop();
    print_stack();
    
    return 0;
}
