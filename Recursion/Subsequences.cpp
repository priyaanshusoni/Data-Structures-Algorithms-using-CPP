// Generating all the subseuences of a string whose length is exactly three and s are palindromes 

#include<iostream>
#include<bits/stdc++.h>




using namespace std;


void Subsequences(string s , set<string>&ans , string temp , int n , int index){


    if(index==n){
     if(temp.length()==3 && temp[0]==temp[2])   ans.insert(temp);
        return;
    }


    Subsequences(s ,ans ,temp ,  n , index+1);
    temp.push_back(s[index]);
    Subsequences(s ,ans ,temp ,  n , index+1);


}
int main(){
    string s = "aabca";

    set<string>ans;

    string temp;

    int n = s.size();

    Subsequences(s,ans , temp , n , 0 );


    for(auto it : ans){
        cout<<it<<endl;
    }


    return 0;
}