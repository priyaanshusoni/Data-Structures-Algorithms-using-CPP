<<<<<<< HEAD
#include<iostream>

using namespace std;
int maxone(int arr[], int n){
     int count =0,max;
     for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;

            max=count;

            
        }
        else if(arr[i]==0){
            count=0;
        }
     }

     return max;
}
int main(){
   int arr[7]={1,1,0,0,1,1,1};

   int n=7;

   cout<<maxone(arr,n);    
}

=======
#include<iostream>

using namespace std;
int maxone(int arr[], int n){
     int count =0,max;
     for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;

            max=count;

            
        }
        else if(arr[i]==0){
            count=0;
        }
     }

     return max;
}
int main(){
   int arr[7]={1,1,0,0,1,1,1};

   int n=7;

   cout<<maxone(arr,n);    
}

>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
