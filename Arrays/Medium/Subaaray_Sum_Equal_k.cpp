#include<iostream>
#include<vector>
#include<bits/stdc++.h>



using namespace std;                  

int findAllSubarraysWithGivenSum(vector<int>&arr,int k){
       int presum=0;
       int cnt=0;

       map<int,int> mpp;

       mpp[0]=1;

       for(int i=0;i<arr.size();i++){
         presum+=arr[i];

         int remove=presum-k;

         cnt+= mpp[remove];
// Add the number of subarrays to be removed:
         mpp[presum]+=1;
       }
            return cnt;     
}
int main(){
 vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;    
}