#include<bits/stdc++.h>

using namespace std;



class Stack {
 public:
 int data;
 Stack* next;
 Stack* top=nullptr;
 int size=0;

 public:
 Stack(int data1,Stack* next1){
    data=data1;
    next=nullptr;

 }

 void push(int x){
     Stack* temp = new Stack(x,nullptr);

     temp->next = top;
     top=temp;
     size++;



 }

 int pop(){
    if(size==0) return -1;

    Stack* temp =top;
    top= top->next;

    int x = temp->data;

    delete temp;

    size--;

    return x;
 }


 void sizedisplay(){
    cout<<"Size of LL is "<<size<<endl;
 }

 



};

// 



int main(){

 vector<int>v={1,2,3,4,5};





//   Stack* res =  convert2LL(v);


//    while(res!=NULL){
//        cout<<res->data<<"->";
//        res=res->next;
//    }

  Stack* st = new Stack(0,nullptr);


  st->push(5);
  st->push(6);
  st->pop();

  st->sizedisplay();




   




    return 0;
}