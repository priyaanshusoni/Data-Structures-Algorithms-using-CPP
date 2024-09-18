<<<<<<< HEAD
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


/* Deleting Head of the linked list */
Node* removeHead(Node* Head){
    if(Head==NULL) return Head;

    Node* temp = Head;

    Head = Head->next;

    delete temp;

    return Head;
}

/* Deleting Tail of the linked list */
Node* removeTail(Node* Head){
        if(Head == NULL || Head->next==NULL) return NULL;

        Node*temp = Head;
  // 1->2->3->4->5
        while(temp->next->next != NULL) {
            temp =temp->next;
        }

        free(temp->next);
        temp->next=NULL;

     return Head;
}



int main(){
    vector<int> arr = {12,5,8,7};

Node* Head =  convertarr2LL(arr);
cout<<"Originial Linked List "<<endl;
 print(Head);

//  Head = removeHead(Head);
Head = removeTail(Head);
 cout<<"Linked List After Deletion of Head/Tail"<<endl;

print(Head);
=======
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


/* Deleting Head of the linked list */
Node* removeHead(Node* Head){
    if(Head==NULL) return Head;

    Node* temp = Head;

    Head = Head->next;

    delete temp;

    return Head;
}

/* Deleting Tail of the linked list */
Node* removeTail(Node* Head){
        if(Head == NULL || Head->next==NULL) return NULL;

        Node*temp = Head;
  // 1->2->3->4->5
        while(temp->next->next != NULL) {
            temp =temp->next;
        }

        free(temp->next);
        temp->next=NULL;

     return Head;
}



int main(){
    vector<int> arr = {12,5,8,7};

Node* Head =  convertarr2LL(arr);
cout<<"Originial Linked List "<<endl;
 print(Head);

//  Head = removeHead(Head);
Head = removeTail(Head);
 cout<<"Linked List After Deletion of Head/Tail"<<endl;

print(Head);








>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
}