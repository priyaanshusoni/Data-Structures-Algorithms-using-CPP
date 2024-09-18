#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseStr(string &s , int start , int end){

    if(start>=end){
        return ;
    }

    swap(s[start],s[end]);
    reverseStr(s,start+1,end-1);


    
 
  
}
int main(){

    string s = "JOHN";
    
   reverseStr(s,0,3);

   cout<<s<<endl;
}