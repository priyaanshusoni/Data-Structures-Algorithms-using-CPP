//deletion of Head & tail in doubly linked list 

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

Node * deleteHead(Node * Head){
       Node * prev = Head;
       Head= Head->next;
       Head->back=nullptr;

       prev->next=nullptr;

       delete prev;

       return Head;
}


Node * deleteTail(Node * Head){
      Node * tail = Head;
     
   while(tail->next!=nullptr){
      tail = tail->next;
    


   }
   Node* prev = tail->back;
   prev->next=NULL;
   tail->back=NULL;

   delete tail;

  return Head;
}


Node* DeletionOfGivenNode(Node * Head,int ele){
    Node * temp= Head;
   

  
    while(temp!=NULL){
      
       if(temp->data==ele) break;

        temp= temp->next;
    }


    Node * prev = temp->back;
    Node * front = temp->next;


    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deleteHead(Head);
    }
    else if(front==NULL){
        return deleteTail(Head);
    }


    front->back=prev;
    prev->next=front;

    temp->back=NULL;
     temp->next=NULL;
     delete temp;


     return Head;






}

int main(){

    vector<int> arr = {2,4,5,8,7,9};

   Node * head = convertarr2DLL(arr);

  Node * newHead=  DeletionOfGivenNode(head,9);

   print(newHead);


     
}