#include<iostream>
#include<vector>
#include<bits/stdc++.h>
// if no. of positives in not equal to no. of negatives 
using namespace std;

void rearrange(int arr[],int n){
           vector<int>pos;
           vector<int>neg;

           for(int i=0;i<n;i++){
            if(arr[i]>0){
                pos.push_back(arr[i]);


            }

            else if(arr[i]<0){
                neg.push_back(arr[i]);
            }


           }
          
          int index= 2*neg.size();

           for(int i=0;i<neg.size();i++){
                 arr[i*2]=pos[i];
                 arr[i*2 +1]=neg[i];

           }

           for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
           }
}
int main(){
    int arr[]={1,2,3,-4,7,-3,9,-5,9};
    int n= sizeof(arr)/sizeof(arr[0]);

    rearrange(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}