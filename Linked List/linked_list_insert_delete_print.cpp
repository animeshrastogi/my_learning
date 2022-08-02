/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
//Structure to create a linked list node
struct Node{
  int data;
  Node* next;
};
//Global variables
int size = 0;
Node* head;

//Insert node at any location in the linked list
void insert_node(int data, int loc){
    if(loc>size){
        cout<<"Invalid location to insert the node";
        exit(0);
    }
    Node* insert = new Node;
    insert->data = data;
    ++size;
    if(head == NULL){
        head=insert;
        head->next = NULL;
    }
    else if(loc==0){
        insert->next = head;
        head = insert;
    }
    else{
        Node* temp = head;
        for(int i=0; i<loc;i++){
            if(temp->next!=NULL){
                temp=temp->next;
            }
        }
        insert->next = temp->next;
        temp->next = insert;
    }
}

//Delete node at any location of liked list
void delete_node(int loc){
    if(loc>size-1){
        cout<<"Invalid location to delete the node";
        exit(0);
    }
    if(head==NULL){
        cout<<"Linked list does not exist";
        exit(0);
    }
   Node*temp = head;
    if(size==1){
        delete temp;
        head=NULL;
        --size;
    }
    else{
            if(loc==0){
                head=head->next;
                delete temp;
                --size;
            }
            else{
                for(int i=0;i<loc-1;i++){
                    temp=temp->next;
                }
                Node* temp2 = temp->next;
                temp->next = temp->next->next;
                delete temp2;
                --size;
            }
            }
}

//delete the entire linked list
void delete_all(){
    if(head==NULL){
        cout<<"Error:Linked List does not exist";
        exit(0);
    }
    while(head!=NULL){
        Node* temp = head;
        head=head->next;
        delete temp;
    }
}

//print the entire linked list
void print_linked_list(){
    if(head==NULL){
        cout<<"Error:Linked List does not exist";
        exit(0);
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<"Size of the linked list is "<<size<<"\n";
}
int main()
{
    insert_node(2,0);
    print_linked_list();
     insert_node(3,1);
     print_linked_list();
     insert_node(8,2);
     print_linked_list();
    delete_all();
     print_linked_list();
    
    return 0;
}

