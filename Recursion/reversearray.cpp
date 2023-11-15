#include<iostream>

using namespace std;

void reversearray(int i, int size, int arr[] ){

     if(i>=(size/2)){
        return  ;
     }

     swap(arr[i],arr[size-i-1]);

     reversearray(i+1,size,arr);


     


        
}
int main(){

    int n=5;
    int array[n];
    cout<<"Enter Elements Of Array ";
    for(int i=0 ; i<n; i++){
        cin>>array[i];
    }
   

    reversearray(0,n,array);


   for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
   }




    
}