// using moore's voting algorithm 


#include<iostream>

using namespace std;
int majorityelement(int arr[], int n){
     int cnt=0;
     int element;

     for(int i=0 ;i<n ; i++){

        if(cnt==0){
            element=arr[i];         // first step of MV algorithm to store element to start traversing 
            cnt=1;

        }
        else if(arr[i]==element){
            cnt++;
        }
        else{
            cnt--;
        }


        // checking if element is majority element or not 

        int cnt1=0;
        for(int i=0 ;i<n;i++){
            if(arr[i]==element){
                cnt1++;
            }

            if(cnt1> (n/2)){
                return element;
            }
         

        }
         return -1;
     }




}
int main(){
    int arr[]={4,4,2,4,3,4,4,3,2,4};

    int n= sizeof(arr)/sizeof(arr[0]);


    cout<<majorityelement(arr,n);
}