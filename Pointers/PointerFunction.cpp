#include<bits/stdc++.h>

using namespace std;


void incr(int *n){ // pass by pointer 
   *n = *n + 1;


}

void swapping(int &p1 , int &p2){
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

void doublearr(int array[] , int n){
    for(int i=0;i<n;i++){
        array[i]=2*array[i];
    }
}


void pass(vector<int>&arr){

    for(int i=0;i<arr.size();i++){
         arr[i] = 2*arr[i];
    }
}
int main(){
    int num =10;

    int temp = num;

    incr(&num);

 cout<<num<<endl;



 int arr[5] = {1,2,3,4,5};


 doublearr(arr,5);

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;



//swapping 

int a = 10;
int b = 20;

int * tempp = &a;
int * tempq = &b;

int x = *tempp;
*tempp=*tempq;
*tempq=x;


cout<<*tempp<<" "<<*tempq<<endl;



 int number = 19;

 int &ref = number;

 cout<<ref<<" This is before Increment"<<endl;

 ref = ref+1;

 cout<<ref<< "This is after Increment"<<endl;




cout<<"Swapping using ref. variable"<<endl;


int first = 8;
int second = 7;


swapping(first,second);

// int & p1 = first;
// int & p2 = second;

// int temporary = p1;
// p1=p2;
// p2=temporary;

 cout<<first<<" "<<second<<endl;



 // passing vector 


 vector<int> v = {1,2,3,4,5,6,7,8,9,10};

 pass(v);

 for (int i = 0; i <v.size(); i++)
 {
    cout<<v[i]<<" ";
 }
 


 return 0;   
}