#include<iostream>
using namespace std;

struct node{
    int data;
    node *link;
} *top=NULL;


void push(int Data){
 
 node* newNode = new node;
 if (newNode == NULL){
    cout<<"Stack has been full!"<<endl;
    exit(1);
 }
 newNode->data = Data;
 newNode->link =top;
 top=newNode;
}

 int pop(){
    node* temp = top;
    int Data = top->data;
    top= top->link;
    free(temp);
    temp = NULL;
    return Data;

 }

void display(){
    node* temp = top;
    //we used temp in condition because when ever temp would get equal to NULL then the Null will make condition false as in programming the NULL refer to false, 
    cout<<"the stack elements are"<<endl;
    while(temp){
    cout<<"stack Data: "<<temp->data<<endl;
    temp=temp->link;
    }

}

int main(){
int choice , data;

while(true){
    cout<<"press.1 for push"<<endl;
     cout<<"press.2 for print"<<endl;
      cout<<"press.3 for pop"<<endl;
       cout<<"press.4 to exit"<<endl;


cout<<"\n Enter your choice"<<endl;
cin>>choice;
switch(choice){

case 1:
cout<<"\n enter the element to be pushed";
cin>>data;
 push(data);
 break;

case 2:
cout<<"Elements to be display \n";
display();
break;

case 3:
cout<<pop()<<endl;
break;
case 4:
exit(1);
default:
cout<<"wrong choice \n"<<endl;
break;

}
}
 return 0;
}