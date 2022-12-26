#include<iostream>
using namespace std;

struct node{
int data;
node* link;
};
 
 
void insert_node(node* Head, node* NewNode, int Data){
node* temp = Head;
node* ptr = NewNode;
 int count=0;
 while (temp->link != NULL)
 {
    temp=temp->link;
    count ++;
 }

 temp->link=ptr;
 temp->data=Data;
 temp->link->link=NULL;

int Count = 0;
cout<<"\n nodes after addition"<<endl;
cout<<"\n";
 while(Head->link !=NULL){

//     if(Head->link == NULL){
//    break;
// }
    cout<<" node: "<<Count<<", NodeData: "<<Head->data<<endl;

    Head=Head->link;
    Count++;
 }
};

int main(){
node* head = new node;
 head->data=5;
 head->link=NULL;

 head->link=new node;
 head->link->data=10;
 head->link->link=NULL;

 head->link->link=new node;
 head->link->link->data=30;
 head->link->link->link=NULL;

 node* NewNode=new node;
 int Data=40;
 insert_node(head,NewNode,Data);

}


