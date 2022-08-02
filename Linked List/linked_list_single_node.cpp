#include<stdio.h>
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

int main(){
    
    Node* head;
    head = NULL;
    Node* temp = new Node;
    temp->data = 100;
    temp->next = NULL;
    head = temp;
    
    cout<<temp->data;
    return 0;
}