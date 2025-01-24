#include<bits/stdc++.h>

using namespace std;


void findsum(vector<int>nums , int temp , int n , int index , int&sum){


    if(index==n){
      
        sum+=temp;
        return;
    }

    findsum(nums,temp,n,index+1,sum);
    temp+=nums[index];
    findsum(nums,temp,n,index+1,sum);

}
int main(){
    
   vector<int>nums = {1,2,3};
   int temp=0;
   int n = nums.size();
   int sum=0;

    findsum(nums,temp,n,0,sum);




cout<<"Sum of all Subsequences of nums array is "<<sum<<endl;






    return 0;
}