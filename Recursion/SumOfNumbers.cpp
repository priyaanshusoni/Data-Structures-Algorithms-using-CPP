#include<iostream>
using namespace std;


int getsum(int n){
    if(n==0){
    return 0;
    }
    else{
    return n+getsum(n-1);
}
}


// using namespace std;
int main(){
    int k;
    cin>>k;
    getsum(k);
    cout<<getsum(k);

    
    
}