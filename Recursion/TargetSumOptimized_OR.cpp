#include<iostream>

using namespace std;

bool findTarget(int arr[] , int target,int index,int n){

if(target==0){
 
    return 1;
}

if(index==n || target<0){
    // cout<<"Curret Target Value : "<<target<<endl;
    cout<<"target value is "<<target<<endl;

    return 0;
}

return  findTarget(arr , target , index+1 , n ) || findTarget(arr,target-=arr[index],index+1 ,n );





}
int main(){
    
    int arr[] = {2,3,6};
    int n = 3;
    int target = 8;
    bool targetFound = findTarget(arr,target,0,n);

  if(targetFound)cout<<"Subset sum equals target "<<endl;

  return 0;


}