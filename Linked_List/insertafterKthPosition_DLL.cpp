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


Node* insertafterHead(Node*head,int val){

       // insert after head 
      Node*temp1 = head->next;
      
      Node *newnode = new Node(val);
      newnode->next=temp1;
      newnode->back=head;
      
      head->next= newnode;
      temp1->back=newnode;
      
      return head;
       

   
}



int main(){

    vector<int> arr = {2,4,5,8,7,9};

   Node * head = convertarr2DLL(arr);

   print(head);

   

   Node * newhead= insertafterHead(head,31);

   cout<<"Inserting after Head"<<endl;

   print(newhead);
   


     
}