#include<bits/stdc++.h>

using namespace std;


void findsum(vector<int>nums , int temp , int n , int index , int target , bool&targetfound){


    if(index==n){
      
        if(temp==target){

            cout<<"Target Found "<<temp<<endl;
            targetfound = true;
            return;

        } 
        
        return;
    }

    findsum(nums,temp,n,index+1,target,targetfound);
    temp+=nums[index];
    findsum(nums,temp,n,index+1,target,targetfound);

}
int main(){
    
   vector<int>nums = {2,5,6,1};
   int temp=0;
   int n = nums.size();
   int target = 8;
   bool targetFound = false;

    findsum(nums,temp,n,0,target,targetFound);




   if(!targetFound) cout<<"No tarfet found"<<endl;






    return 0;
}