#include<iostream>
using namespace std;

struct node{
int data;
node* link;
};

// Recommended lecture Neso Academy ...
node* Node_at_Begin(node* Head , int data){
   //node* temp;
   node* temp=new node;
   temp->link=Head;
   temp->data=data;
   Head=temp;
   return Head;
  
}

int main(){
      node* head = new node;
      head->data=10;
      head->link=NULL;

      head->link=new node;
      head->link->data=20;
      head->link->link=NULL;

      head->link->link=new node;
      head->link->link->data=30;
      head->link->link->link=NULL;
      
    head=Node_at_Begin(head, 40);
    node* ptr =head;
    int count = 0;
    while(ptr->link != NULL){
        ptr=ptr->link;
        count++;
         cout<<"node: "<< count <<", Node data: "<<ptr->data<<endl;
    }

    return 0;
}