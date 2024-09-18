<<<<<<< HEAD


#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr){


    //better approach 
        //  set<vector<int>>st;
        //  for(int i=0;i<n;i++){
        //          set<int>contains;
        //     for(int j=i+1;j<n;j++){
            
        //         int third= -(arr[i]+arr[j]);
        //      if(contains.find(third)!=contains.end()){
        //         vector<int>temp={arr[i],arr[j],third};
        //         sort(temp.begin(),temp.end());
        //         st.insert(temp);

        //      }
        //      contains.insert(arr[j]);


        //     }


        //  }

        //  vector<vector<int>>ans(st.begin(),st.end());

        //  return ans;





     // optimal approach using three pointers 
  
       vector<vector<int>>ans;
       sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    if(i!=0 && arr[i]==arr[i-1]){
        continue;
    }
    int j=i+1;

    int k=n-1;

    while(j<k){
        
        int sum=arr[i]+arr[j]+arr[k];

        if(sum>0){
           k--;
        }
        else if(sum<0){
          j++;
        }

        else{
           vector<int>temp={arr[i],arr[j],arr[k]};
        //    sort(temp.begin(),temp.end());
           ans.push_back(temp);
           j++;
           k--;
//skip duplicates
           while( j < k && arr[j]== arr[j - 1]){
            j++;
           }
           while(j < k && arr[k]== arr[k + 1]){
            k--;
           }

           }
        }

    }

    return ans;
}








int main(){
      vector<int> arr = { -1, 0, 1, 2, -1, -4};
       int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);

    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
       
    

}
=======


#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr){


    //better approach 
        //  set<vector<int>>st;
        //  for(int i=0;i<n;i++){
        //          set<int>contains;
        //     for(int j=i+1;j<n;j++){
            
        //         int third= -(arr[i]+arr[j]);
        //      if(contains.find(third)!=contains.end()){
        //         vector<int>temp={arr[i],arr[j],third};
        //         sort(temp.begin(),temp.end());
        //         st.insert(temp);

        //      }
        //      contains.insert(arr[j]);


        //     }


        //  }

        //  vector<vector<int>>ans(st.begin(),st.end());

        //  return ans;





     // optimal approach using three pointers 
  
       vector<vector<int>>ans;
       sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    if(i!=0 && arr[i]==arr[i-1]){
        continue;
    }
    int j=i+1;

    int k=n-1;

    while(j<k){
        
        int sum=arr[i]+arr[j]+arr[k];

        if(sum>0){
           k--;
        }
        else if(sum<0){
          j++;
        }

        else{
           vector<int>temp={arr[i],arr[j],arr[k]};
        //    sort(temp.begin(),temp.end());
           ans.push_back(temp);
           j++;
           k--;
//skip duplicates
           while( j < k && arr[j]== arr[j - 1]){
            j++;
           }
           while(j < k && arr[k]== arr[k + 1]){
            k--;
           }

           }
        }

    }

    return ans;
}








int main(){
      vector<int> arr = { -1, 0, 1, 2, -1, -4};
       int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);

    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
       
    

}
>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
