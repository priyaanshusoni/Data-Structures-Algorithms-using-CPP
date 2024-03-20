#include<iostream>

using namespace std;

int maximunconsecutiveones(int arr[], int n){
    int count =0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        if(count>max){
        max=count;
        }

        if(arr[i]!=1){
            count=0;
        }
        
    }

    return max;
}
int main(){
    int arr[]={1,1,1,0,0,1,0,1,1,1,1,1,0,1,0,1};

    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"No. of Maximum consective one is "<<maximunconsecutiveones(arr,n);

    
}