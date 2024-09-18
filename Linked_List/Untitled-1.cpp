#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

int x =4;

int *y= &x;

cout<<*y<<endl;

}








// class Node{
//     public:
//     int data;
//     Node * next;


//     Node(int data1){
//         data=data1;
//         next = nullptr;
//     }
// };

// Node* convertarr2LL(vector<int>arr){
//         Node* Head = new Node(arr[0]);
//         Node * mover= Head;

//         for(int i=1;i<arr.size();i++){
//             Node *temp= new Node(arr[i]);
//             mover->next =temp;
//             mover=temp;

//         }
//           return Head;
// }

// void print(Node* Head){
//     while(Head!=NULL){
//         cout<<Head->data<<"->";
//         Head=Head->next;
//     }
//     cout<<endl;
// }




