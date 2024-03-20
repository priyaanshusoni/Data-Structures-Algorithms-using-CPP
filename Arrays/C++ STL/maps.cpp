// map<int , int > mapname 


// red black treess 

// stored in sorted order 

// non-contigous allocation



#include<bits/stdc++.h>
#include<map>

using namespace std;

void print (map<int , string>&m){
    for(auto &it : m){
          cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    map<int,string> m;
    m[1]="abc";  // key , value pairs 
    m[4]="bcd";
    m[6]="asd";
    m[2]="vbc";
    m.insert({3,"zxc"});

    map<int,string> :: iterator it;

    // for(it= m.begin(); it!=m.end(); ++it){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    print(m);


}






