#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;



void reverse(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at indices 'start' and 'end'
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards each other
        start++;
        end--;
    }
}
void nextpermutation(int arr[], int n){
    int index =-1;

    // find break point 
    for(int i=n-2;i>=0;i--){

        if(arr[i]<arr[i+1 ]){

            index=i;
            break;
        }


    }

    if(index==-1){
        reverse(arr,0,n-1);
    }


    for(int i=n-1;i>=index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }

    reverse(arr,index+1,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){

    int arr[]={2,1,5,4,3,0,0};

    int n=sizeof(arr)/sizeof(arr[0]);

    nextpermutation(arr,n);


}