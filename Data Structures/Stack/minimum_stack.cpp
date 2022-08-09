//Design a stack to keep track of the minimum value
#include <iostream>

using namespace std;

struct Node{
  Node* next;
  int data;
  int min;
};
Node* head;
int min(){
    if(head==NULL){
        cout<<"Empty\n";
        return 0;
    }
    return head->min;
    
}
void pop(){
    if(head==NULL){
        cout<<"Empty\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    
}
void push(int data){
    Node* insert = new Node;
    insert->data = data;
    if(head==NULL){
        head = insert;
        insert->min = data;
        insert->next = NULL;
        return;
    }
    insert->next = head;
    if(data<head->min)
        insert->min = data;
    else
        insert->min = head->min;
    head = insert;
}
int main()
{
    head=NULL;
    push(7);
    push(10);
    push(100);
    push(1);
    push(5);
    cout<<min()<<"\n";
    pop();
    cout<<min()<<"\n";
    pop();
    pop();
    cout<<min()<<"\n";
    return 0;
}