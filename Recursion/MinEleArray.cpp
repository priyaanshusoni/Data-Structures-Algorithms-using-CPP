#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int printarr(int arr[] , int index , int n){

    if(index==n){
        return arr[index];
    }
    
      return min(arr[index], printarr(arr,index+1,n));

    
     
}
int main(){
    
  int arr[]= {0,2,-8,4,5};

  cout<<"Minimum of Given Array is:"<<printarr(arr,0,5);

}