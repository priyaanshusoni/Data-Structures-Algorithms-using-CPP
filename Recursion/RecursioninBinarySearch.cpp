#include<iostream>

using namespace std;
bool findele(int arr[] ,int val ,int low , int high){

    int mid = (low+high) /2;
    if(arr[mid]==val){
        return mid;;
    }

   if(arr[mid]<val){
     return  findele(arr,val,mid+1,high);
   }

   else{
    return  findele(arr,val,low,mid-1);
   }


   return -1;


}
int main(){
    

    int arr[]={2,4,5,6,7,89};


    cout<<findele(arr,89 ,0,5);
}