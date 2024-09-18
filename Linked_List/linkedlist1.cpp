<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    public: 
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
};
int main(){
    vector<int> arr= {2,5,8,7};
    Node * y= new Node(arr[0],nullptr);
    cout<<y->data <<endl;
    y->next= new Node(arr[1],nullptr);
    
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    public: 
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
};
int main(){
    vector<int> arr= {2,5,8,7};
    Node * y= new Node(arr[0],nullptr);
    cout<<y->data<<endl;
>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
}