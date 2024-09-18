#include<iostream>
#include<bits/stdc++.h>

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

void PreOrder(Node* root){
    if(root==nullptr){
        return;
    }

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(Node* root){
    if(root==nullptr){
        return;
    }

    
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}
void PostOrder(Node* root){
    if(root==nullptr){
        return;
    }

    
    PostOrder(root->left);
    
    PostOrder(root->right);  


    cout<<root->data<<" ";
}


void LevelOrder(Node* root){
       
        queue<Node*>q;
        q.push(root);
        cout<<root->data;
        while(!q.empty()){
            Node* temp = q.front();

            q.pop();

            cout<<temp->left->data<<" ";
            cout<<temp->right->data<<" ";
            


          
        }


}

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
    cout<<"Enter The Root Node"<<endl;
    Node* root;
    root = BinaryTree();

    cout<<"PreOrder Traversal :";

    PreOrder(root);
    cout<<endl;

     cout<<"InOrder Traversal :";
    InOrder(root);
    cout<<endl;


     cout<<"PostOrder Traversal :";
     PostOrder(root);
     cout<<endl;



     cout<<"LevelOrder Traversal :";
     LevelOrder(root);
     cout<<endl;



}