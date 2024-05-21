#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    

//   head = new Node(4);

//   cout<<head->data<<endl;

//   cout<<head->next<<endl;





// insert node at the begining 

int arr[]={2,4,6,8,10};

Node* head = new Node(arr[0]);
Node * mover = head;


 // linked list doesn't exist 

 for(int i=1;i<5;i++){

  if(head == NULL){
    head = new Node(arr[i]);
  }


 // linked list does exist 
 else{
    Node * temp;
    temp = new Node(arr[i]);
    mover->next=temp;
    mover = temp;
 }
 }


// print the value

Node *temp= head;

int linkedListLength =0;

while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    linkedListLength++;

}
cout<<"\n";
cout<<"Length Of linked List is "<<linkedListLength<<endl;

}