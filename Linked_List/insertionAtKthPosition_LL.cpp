<<<<<<< HEAD

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

// Node * insertHead(Node * head , int val){
//       Node*temp = new Node(val,head);
//         return temp;

// }

// Node* insertTail(Node * head , int val){
//     Node*temp = head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     Node* newnode = new Node(val,nullptr);
//     temp->next=newnode;

//     return head;
// }



Node* insertatK(Node* head,int val,int k){
    if(head==NULL){
        if(k==1){
            Node* temp = new Node(val,nullptr);
        }
        else return NULL;
    }


    if(k==1){
        Node * temp = new Node(val,nullptr);
        temp->next=head;

        return temp;
    }

  
    Node * temp = head;
    int cnt=0;
    while(temp!=NULL){
           cnt++;
           if(cnt==k-1){
                 Node * newnode = new Node(val,temp->next);
                temp->next=newnode;
           }

           temp=temp->next;
    }


     return head;

}



int main(){
    vector<int> arr = {12,5,8,7};

Node* Head =  convertarr2LL(arr);
// Head= insertHead(Head,10);
// Head = insertTail(Head,44);

Head = insertatK(Head , 13 ,3);

print(Head);

=======

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

// Node * insertHead(Node * head , int val){
//       Node*temp = new Node(val,head);
//         return temp;

// }

// Node* insertTail(Node * head , int val){
//     Node*temp = head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     Node* newnode = new Node(val,nullptr);
//     temp->next=newnode;

//     return head;
// }



Node* insertatK(Node* head,int val,int k){
    if(head==NULL){
        if(k==1){
            Node* temp = new Node(val,nullptr);
        }
        else return NULL;
    }


    if(k==1){
        Node * temp = new Node(val,nullptr);
        temp->next=head;

        return temp;
    }

  
    Node * temp = head;
    int cnt=0;
    while(temp!=NULL){
           cnt++;
           if(cnt==k-1){
                 Node * newnode = new Node(val,temp->next);
                temp->next=newnode;
           }

           temp=temp->next;
    }


     return head;

}



int main(){
    vector<int> arr = {12,5,8,7};

Node* Head =  convertarr2LL(arr);
// Head= insertHead(Head,10);
// Head = insertTail(Head,44);

Head = insertatK(Head , 13 ,3);

print(Head);

>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
}