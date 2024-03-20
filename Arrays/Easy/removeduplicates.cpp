//remove duplicates from sorted array 

#include<iostream>

using namespace std;
int main(){
int arr[]={1,1,1,2,2,2,2,3,3,4,5,5,5,5};

int i=0;
for(int j=1;j<14;j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
    }
    
    
}

cout<<i+1;



    
}