#include<iostream>

using namespace std;
void printarr(int arr[] , int index , int n){
       if(index==n){
         return ;
       }

     printarr(arr,index+1,n); //for printing in reverse
       cout<<arr[index]<<" ";
    //    printarr(arr,index+1,n); for printing original array
}
int main(){
    
  int arr[]= {2,4,5,6,7,8};

  printarr(arr,0,6);

}