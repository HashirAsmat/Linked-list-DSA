#include<iostream>
using namespace std;

struct treeNode{
int data;
treeNode *left, *right;
};

treeNode* newNode(int data){
treeNode* newnode=new treeNode();
newnode->data = data;
newnode->left =newnode->right =NULL;
return newnode;
}
treeNode* insertNode(treeNode *Root, int data){
    if(Root == NULL){
        Root = newNode(data); 
    }
   else if(Root->data < data){
    Root->right=insertNode(Root->right, data);
   }
   else if(data<= Root->data){
    Root->left=insertNode(Root->left, data);
   }
   return Root;
}
bool search_data(int data , treeNode *root){
   
    if(root == NULL){
    return false;
}
else if (data == root->data){
    return true;
}

else if (data >root->data){
    return search_data(data, root->right);

}
else if(data <= root->data){
  return search_data(data,root->left);
}
}
    
int main(){
    treeNode *root =NULL;
   
    root=insertNode(root,15);
    root=insertNode(root,45);
    root=insertNode(root,70);
    
    int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(search_data(number,root) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
    return 0;
}