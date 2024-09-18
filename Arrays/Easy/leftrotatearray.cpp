<<<<<<< HEAD
#include<iostream>

using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n= 5;
     int temp= arr[0];

    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }

    arr[n-1]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
=======
#include<iostream>

using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n= 5;
     int temp= arr[0];

    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }

    arr[n-1]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
}