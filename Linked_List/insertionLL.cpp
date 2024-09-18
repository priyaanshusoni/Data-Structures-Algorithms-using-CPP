
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;


    Node(int data1 ,Node* next1){
        data=data1;
        next = next1;
    }
};

Node* convertarr2LL(vector<int>arr){
        Node* Head = new Node(arr[0],nullptr);
        Node * mover= Head;

        for(int i=1;i<arr.size();i++){
            Node *temp= new Node(arr[i],nullptr);
            mover->next =temp;
            mover=temp;

        }
          return Head;
}

void print(Node* Head){
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head=Head->next;
    }
    cout<<endl;
}


// inserting Head in a linked List 

Node * insertHead(Node * head , int val){
      Node*temp = new Node(val,head);
        return temp;

}

Node* insertTail(Node * head , int val){
    Node*temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newnode = new Node(val,nullptr);
    temp->next=newnode;

    return head;
}



int main(){
    vector<int> arr = {12,5,8,7};

Node* Head =  convertarr2LL(arr);
Head= insertHead(Head,10);
Head = insertTail(Head,44);

print(Head);

}