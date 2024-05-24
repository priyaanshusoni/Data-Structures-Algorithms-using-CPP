#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;


    Node(int data1){
        data=data1;
        next = nullptr;
    }
};

Node* convertarr2LL(vector<int>arr){
        Node* Head = new Node(arr[0]);
        Node * mover= Head;

        for(int i=1;i<arr.size();i++){
            Node *temp= new Node(arr[i]);
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


Node * DeleteKthNode(Node * Head , int k ){
   if(Head==NULL) return Head;
   if(k==1) {
    Node * temp= Head;
    Head = Head->next;
    delete temp;
    return Head;
   }

   int cnt =0;
   Node* temp = Head;
   Node *prev= NULL;
   while(temp!=NULL){
    cnt++;
   if(cnt==k){
      prev->next= prev->next->next;
      delete temp;
      break;

   }

   prev = temp;
   temp=temp->next;

   }
  return Head;
    

}





int main(){
    vector<int> arr = {12,5,8,7};

Node* Head =  convertarr2LL(arr);
cout<<"Originial Linked List "<<endl;
 print(Head);


 DeleteKthNode(Head,3);


//  Head = removeHead(Head);
 cout<<"Linked List After Deletion of kth node"<<endl;

print(Head);
}