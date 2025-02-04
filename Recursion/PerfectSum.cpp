#include<bits/stdc++.h>

using namespace std;

int perfectSum( vector<int>&arr, int target ,int sum,int index){

 if(sum==0) return 1;

 if(index==arr.size() || sum<0) return 0;


 return perfectSum(arr,target,sum,index+1) + perfectSum(arr,target,sum-arr[index],index+1);

}
int main(){
    //Given an array & a target we need to return total number of subsets in that array that sums up to target

     vector<int>arr = {1,2,3};
    int target = 3;
    int sum=target;

    int ans = perfectSum(arr,target,sum,0);


    cout<<"Total no. of subsets that sums up to target "<<target<<" in given array is "<<ans<<endl;



}