#include<iostream>

using namespace std;
int main(){
    string str = "amit";

    for(int i=0;i<str.length();i++){
        str[i] = 'A'+ str[i]-'a';
    }
 

    cout<<str<<endl;
}