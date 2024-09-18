<<<<<<< HEAD
#include<iostream>

using namespace std;

void sortarray(int a[],int n){
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;


    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt0++;
        }
        else if(a[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }

    }



        for(int i=0;i<cnt0;i++){
            a[i]=0;
        }

        for(int i=cnt0;i<cnt0+cnt1;i++){
            a[i]=1;
        }

        for(int i=cnt0+cnt1;i<n;i++){
            a[i]=2;
        }


        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

    


}
int main(){
    int arr[]={2,0,2,1,1,0};

    int n= sizeof(arr)/sizeof(arr[0]);

    sortarray(arr,n);
    
=======
#include<iostream>

using namespace std;

void sortarray(int a[],int n){
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;


    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt0++;
        }
        else if(a[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }

    }



        for(int i=0;i<cnt0;i++){
            a[i]=0;
        }

        for(int i=cnt0;i<cnt0+cnt1;i++){
            a[i]=1;
        }

        for(int i=cnt0+cnt1;i<n;i++){
            a[i]=2;
        }


        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

    


}
int main(){
    int arr[]={2,0,2,1,1,0};

    int n= sizeof(arr)/sizeof(arr[0]);

    sortarray(arr,n);
    
>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
}