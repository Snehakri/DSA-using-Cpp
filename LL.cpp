#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insert(node * head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
        
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
    
// }
void insertm(node* head,int val,int pos){
    node* n=new node(val);
    node* p=head;
    for(int i=0;i<pos-1 && p;i++){
        p=p->next;
    }
    n->next=p->next;
    p->next=n;
}
void insertt(node * &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
int counts=0;
int maxx=0;
int key=5;
void display(node *head){
    if(head!=NULL){
        
        counts+=head->data;
        if(head->data>maxx){
            maxx=head->data;
        }
        cout<<head->data<<"->";
        // if(key==head->data){
        //     cout<<"Key found";
        // }
        display(head->next);
    }
}
// node* search(node* head,int key){
//     if(head==NULL){
//         return NULL;
//     }
//     if(key==head->data){
//         return head;
//     }
//     search(head->next,key);
// }
int main(){
   node* head=new node(1);
   insert(head,3);
   insert(head,4);
   insert(head,5);
   insertt(head,8);
   insertm(head,2,3);
  insertm(head,6,6);
//   search(head,5);
  display(head);
  cout<<"NULL"<<endl;
  cout<<counts<<"is count";
  cout<<maxx<<"this is max";
   

}
