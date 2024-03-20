#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void printvector(vector<int> v){
    for(int i=0 ; i<v.size(); i++){

        //v.size() = O(1)
     
        cout<<v[i]<<endl;
    }
}
int main(){
    pair<int,string> p;
    // p= make_pair(2,"abc");
    p= {2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;

    // copying pair
    pair<int,string> p1= p;
    cout<<p1.second<<endl;
  
   int a[] = { 1,2,3};
   int b[]= { 5,6,7};

   pair<int,int> p_array[3];

   p_array[0]={1,2};
   p_array[1]={3,4};
   p_array[2]={5,6};

   swap(p_array[0],p_array[2]);

   for (int i = 0; i < 3; i++)
   {
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
   }
   
   // vectors 

   vector<int> v(10,3);
   v.push_back(12122);
//   for(int i=0; i<10 ; i++){
//     v.push_back(i*2); //O(1)
//   }
// v.pop_back();   // remove last element from a vector 
vector<int> v2= v;

printvector(v2);
printvector(v);





}

