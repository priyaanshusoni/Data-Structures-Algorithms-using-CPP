#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Queue{ // this queue will behave like a stack 
queue<int>q;

public:

void push(int x){
    int s =q.size();
    q.push(x);

for(int i=1;i<=s;i++){
    
        int val = q.front();
        q.pop();
        q.push(val);
}
}


int popele(){
   
int val = q.front();
 q.pop();
 return val;
}

int top(){
    return q.front();
}

int sizeofQ(){
    return q.size();
}


};
int main(){

    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);

    cout<<"Current Size of Queue is"<<Q.sizeofQ()<<endl;
    cout<<"popped element is "<<Q.popele()<<endl;
    cout<<"top element of queue is now "<<Q.top()<<endl;
    
}