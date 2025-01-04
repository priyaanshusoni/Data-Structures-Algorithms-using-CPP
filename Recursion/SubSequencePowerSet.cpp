#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void AllSubSequences(int arr[] , vector<vector<int>>&ans , vector<int>temp , int index , int n){                

if(index==n){
    ans.push_back(temp);
    return; 
}

AllSubSequences(arr , ans , temp , index+1 , n);
temp.push_back(arr[index]);
AllSubSequences(arr , ans , temp , index+1 , n);
}
int main(){

    // Generating a power set
    int arr[] = {1 ,2 ,3};

    vector<vector<int>>ans;
    vector<int>temp;

    AllSubSequences(arr , ans , temp , 0 , 3);
     

     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }
 
}