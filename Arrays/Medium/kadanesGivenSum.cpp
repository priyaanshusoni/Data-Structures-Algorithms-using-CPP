#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void kadanessum(int arr[],int n){

    int sum=0;
    int maxi= INT_MIN;
    int ansstart ,ansend= -1;
    int start=0;

       for(int i=0;i<n;i++){
        
        
         if(sum==0){
          start=i;
         }

        sum+=arr[i];



     if(sum<0){
        sum=0;
      
     }

     if(sum>maxi){
        maxi=sum;

        ansstart=start;
        ansend=i;

     }





       }


        for(int i=ansstart ;i<=ansend;i++){
         cout<<arr[i]<<" ";
       }




      
      //  return maxi;    for printing the  max subarray sum

}




int main(){
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;

    kadanessum(a,n);

    
}