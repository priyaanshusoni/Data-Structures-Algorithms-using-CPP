#include<iostream>

using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int data1){
        data=data1;
        left=right=nullptr;
    }
};

Node* BinaryTree(){
    int x;
   
    cin>>x;
    if(x==-1){
        return NULL; 
    }

    Node* temp = new Node(x);
    //left side create 

    cout<<"Enter the Left Child"<<endl;

    temp->left = BinaryTree();
    //right side create

    cout<<"Enter the value of right child"<<endl;
    temp->right= BinaryTree();

   return temp;
}
int main(){
    cout<<"Enter The root Node"<<endl;
    Node* root = BinaryTree();

     
} 