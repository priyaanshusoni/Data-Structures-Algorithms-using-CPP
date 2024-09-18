<<<<<<< HEAD
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void leadersinarray(vector<int>&a , int n){

    vector<int>ans;
         int maxi= a[n-1];
         ans.push_back(maxi);

         for(int i=n-1 ;i>=0;i--){
               if(a[i]>maxi){
                   ans.push_back(a[i]);
                    maxi=a[i];
                    
               }
              

         }


        for(int i=0;i<ans.size();i++){

              cout<<ans[i]<<" ";
        
}
}
int main()  {
  vector<int>a={10,22,2,3,0,6};

  int n = a.size();

  leadersinarray(a,n);
}


=======
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
