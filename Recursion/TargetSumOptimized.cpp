#include<iostream>

using namespace std;

void findTarget(int arr[] , int target,int index,int n, bool&targetFound){

if(target==0){
  targetFound = true;
    return;
}

if(index==n || target<0){
    // cout<<"Curret Target Value : "<<target<<endl;
    return;
}

findTarget(arr , target , index+1 , n ,targetFound);
if(target) target-=arr[index];
findTarget(arr,target,index+1 ,n ,targetFound);





}
int main(){
    
    int arr[] = {3,4,6,5};
    int n = 4;
    int target = 12;
    bool targetFound = false;

    findTarget(arr,target,0,n ,targetFound);

  if(targetFound)cout<<"Subset sum equals target "<<endl;

  return 0;


}