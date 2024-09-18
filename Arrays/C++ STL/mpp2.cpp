#include<iostream>
#include<map>

using namespace std;

void print(map<string , int>&m){
    for(auto &it : m){
          cout<<it.first<<" "<<it.second<<endl;
    }
}

int main (){
 
 map<string,int> map;

 int n;
 cout<<"Enter n"<<endl;
 cin>>n;

 for(int i=0; i<n;i++){
          string s;
          cin>>s;
          map[s]++;
          cout<<"enter string"<<i+1<<endl;
 }

 print(map);

}