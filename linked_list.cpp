#include<iostream>
using namespace std;

struct node {
    int data;
    node *link;
};
//LEcture recommended NESO Academy ---- creating a single linked_list
int main(){
    node *head=NULL;
    head=new node; //new method returns the address of the located area or node in heap
    //while malloc return the void pointer to the located area in the heap , 
    //head=(node*)malloc(sizeof(node));


    //head is the pointer now its storing the address of node,  so 
    //we can point or accress the node attributes through head pointer.

     head->data=50;
    head->link= new node; //head->link is infact a pointer part of the node;
    
    head->link->data=60;
    head->link->link=NULL;

    head->link->link=new node; //head->link is infact a pointer part of the node;
    head->link->link->link=NULL;
    head->link->link->data=20;

    return 0;

};