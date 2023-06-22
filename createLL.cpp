#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertend(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n=head;
    }
    node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=n;
}
void display(node* head){
    if(head!=NULL){
        cout<<head->data<<"->";
        display(head->next);
    }
}
int main(){
    node* head=new node(1);
    insertend(head,3);
    insertend(head,8); 
    display(head);   
}
