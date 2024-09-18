#include<iostream>

using namespace std;

class Queue{
    int *arr;
    int start , end , currSize , maxSize;

    public:

    Queue(){
        maxSize=4;
        arr =new int[4];
        start =-1;
        end =-1;

        currSize =0;
    }


    void push(int val){
        int x = val;
 if(currSize>=maxSize){
     cout<<"Queue is full"<<endl;
     return;
 }
 else if(currSize==0){
    
    start =0;
    end=0;
   
    
 }

 else{

   end=(end+1) % maxSize;
   
 }

 
  arr[end]=x;
   currSize++;


    }


    int pop(){
      if(currSize<=0){
    
           return -1;
    }

     int x = arr[start];

    if(currSize==1){
       
        end =-1;
        start=-1;

      
    }

   
   else{
    start = (start+1)%maxSize;
   }


    

    currSize--;

    return x;
    
    }

    int top(){

        if(currSize==0) return -1;

        return arr[start];

    }










};
int main(){
    

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop();
    cout<<q.pop();
    cout<<q.pop();
    cout<<q.pop();
    cout<<q.pop();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.pop();
    cout<<q.pop();
    cout<<q.pop();

      q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);


   cout<< q.pop()<<endl;
    cout<<q.top()<<endl;



}