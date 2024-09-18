#include<iostream>

using namespace std;
int printarr(int arr[] , int index , int n){
    int sum=arr[index];
       if(index==n){
         return 0  ;
       }

sum= sum+ printarr(arr,index+1,n); 

return sum;

    
    
}
int main(){
    
  int arr[]= {1,2,3,4,5};

  cout<<"SUM of Given Array is:"<<printarr(arr,0,5);

}