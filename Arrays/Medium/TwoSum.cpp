//brute force approach can be implemented by using two for loops 

#include<iostream>
#include<algorithm>

using namespace std;

void twosum(int arr[], int n , int target){
    sort(arr,arr+n);
    int left=0;
    int right=n-1;
    while(left<=right && right>=0 ){
       int sum=  arr[left]+arr[right];

       if(sum>target){
        right--;
       }
       if(sum<target){
        left++;
       }
       else{
            cout<<left<<" "<<right<<endl;
            break;
       }

            
    }


}
int main(){
   int arr[] = {2,6,5,8,11};
   int n= sizeof(arr)/sizeof(arr[0]);

   twosum(arr,n,14);



}