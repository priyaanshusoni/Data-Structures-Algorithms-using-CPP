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
int main(){
    queue<Node*>q;

    int x;
    int first,second;

    cout<<"Enter Value of root Node"<<endl;
    cin>>x;

    Node* root = new Node(x);

    q.push(root);

    //Building Binary Tree

    while(!q.empty()){
        Node* temp = q.front();

        q.pop();
        cout<<"Enter Values of left node of"<<temp->data<<endl;

        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
        }

        cout<<"Enter the value of right node of "<<temp->data<<endl;

        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
        }
 

        q.push(temp->left);
        q.push(temp->right);

    }

    

}