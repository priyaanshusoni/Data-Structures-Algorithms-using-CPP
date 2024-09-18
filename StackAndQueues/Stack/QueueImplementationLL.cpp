#include<bits/stdc++.h>

using namespace std;

class Queue{
     int data;
     Queue* start=NULL;
     Queue* end=NULL;
     Queue* next;
     int size=0;
     

     public: 
     Queue(int data1 , Queue* next1){
        data=data1;
        next=next1;
       
     }



     void push(int x){
           Queue* temp = new Queue(x,nullptr);
           if(start==NULL){
            start=end=temp;
           }

           end->next=temp;
           end=temp;
           size++;
     }


     void pop(){
        if(start==NULL){
            end=NULL;
            cout<<"LL is Empty Now , so stop popping"<<endl;
            return;
        }

        Queue* temp = start;
        start=start->next;
        int x = temp->data;
        cout<<"Popped element is"<<x<<endl;

        delete temp;

        size--;




     }

     void sizeofQueue(){
        cout<<"Current size of LL is"<<size<<endl;
     }



     void displayLL(){
   Queue* temp = start;

   while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
   }
     }
};

int main(){

Queue* q = new Queue(1,NULL);

q->push(3);
q->push(2);
q->push(2);
q->push(2);


q->pop();
q->pop();
q->pop();
q->pop();
q->pop();

q->displayLL();





}