<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int second(int arr[], int n){
           sort(arr,arr+n);
           vector<int> secondls;

           for(int i=n-2;i>=0;i--){
            if(arr[i]!=arr[n-1]){
                secondls.push_back(arr[i]);
                break;
            }


           }
           for(int i=1;i<n;i++){
            if(arr[i]!=arr[0]){
                secondls.push_back(arr[i]);
                break;
            }


           }


           for (int i = 0; i < secondls.size(); ++i) {
        cout <<secondls[i] << " ";
    }



}
int main(){
    int a[]={7,6,5,4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    second(a,n);

    

=======
#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int second(int arr[], int n){
           sort(arr,arr+n);
           vector<int> secondls;

           for(int i=n-2;i>=0;i--){
            if(arr[i]!=arr[n-1]){
                secondls.push_back(arr[i]);
                break;
            }


           }
           for(int i=1;i<n;i++){
            if(arr[i]!=arr[0]){
                secondls.push_back(arr[i]);
                break;
            }


           }


           for (int i = 0; i < secondls.size(); ++i) {
        cout <<secondls[i] << " ";
    }



}
int main(){
    int a[]={7,6,5,4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    second(a,n);

    

>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
}