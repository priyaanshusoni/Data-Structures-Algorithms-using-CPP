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


Node* insertafterTail(Node*head,int val){

       // insert after head 
     Node*tail=head;

     while(tail->next!=NULL){
        tail=tail->next;
     }

     Node* newTail = new Node(val);
     newTail->next=NULL;
     newTail->back= tail;

     tail->next=newTail;


     return head;


   
}

Node* insertafterKthPosition(Node * head , int pos , int data){
           Node * temp = head;
          int cnt=0;

           while(temp->next!=nullptr){
            cnt++;
            if(cnt==pos) break;
            temp=temp->next;
           }

           Node* front = temp->next;

           if(front==NULL){
               return insertafterTail(head,data);
           }
           Node * newnode = new Node(data);
           newnode->back = temp;
           newnode->next = front;
           
           temp->next= newnode;
           front->back=newnode;


           return head;

}





int main(){

    vector<int> arr = {2,4,5,8,7,9};

   Node * head = convertarr2DLL(arr);

   print(head);

   

  head = insertafterKthPosition(head , 0,11);


  print(head);
   


     
}