#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node *back;


    Node(int data1, Node* next1, Node* back1){
       data= data1;
       next= next1;
       back= back1;



    }


    Node(int data1){
        data= data1;
        next=nullptr;
        back=nullptr;
    }
};


Node * convertarr2DLL(vector<int>&arr){
          Node * Head= new Node(arr[0]);
          Node *prev = Head;

          for(int i=1;i<arr.size();i++){
             Node *temp = new Node(arr[i],nullptr,prev);
            
            
               prev->next=temp;
               prev = temp;// or we can say prev = temp;


          }

          return Head;


}

void print(Node* Head){
     Node *temp = Head;

     while(temp!=NULL){

     cout<<temp->data<<" ";

     temp=temp->next;
}

    cout<<endl;
} /*void print(Node* Head){
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head=Head->next;
    }
    cout<<endl;
}*/


Node* insertbeforeHead(Node*Head,int val){
    Node * newhead = new Node(val,Head,nullptr);

    Head->back=newhead;

    return newhead;
}
Node* insertBeforeGivenNode(Node*Head,int node,int val){
   Node* temp = Head;
   

   while(temp->next!=NULL){
    
    if(temp->data==node) break;
    temp=temp->next;
   }


   Node*prev = temp->back;

   Node *newnode = new Node(val,temp,prev);
   temp->back=newnode;
   prev->next=newnode;

   return Head;
}



int main(){

    vector<int> arr = {2,4,5,8,7,9};

   Node * head = convertarr2DLL(arr);

   print(head);

   

   Node * newhead= insertBeforeGivenNode(head,4,31);

   cout<<"After Inserting Kth node"<<endl;

   print(newhead);
   


     
}