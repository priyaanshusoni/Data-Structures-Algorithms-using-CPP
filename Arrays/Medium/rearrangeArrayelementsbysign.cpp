// most optimal solution for same positives and negatives 

#include<iostream>
#include<vector>

using namespace std;
void reaarange(vector<int>a,int n){

    vector<int>ans(n,0);

    int posindex=0;
    int negindex=1;


    for(int i=0;i<n;i++){
        if(a[i]>0){
           ans[posindex]=a[i];
            posindex+=2;
        }

        else{
             ans[negindex]=a[i];
            negindex+=2;
        }

  
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    }

int main(){
    vector<int>a={1,-2,-4,5};
   int  n=a.size();
     reaarange(a,n);
}