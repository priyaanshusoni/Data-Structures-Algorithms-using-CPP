#include<iostream>

using namespace std;

int getsum(int n){
    if(n==0){
        return 0;
    }
    else{
        return getsum(n/10) + n%10;
    }
}
int main(){

    int n;

    cout<< "Enter the Digits"<<endl;
    cin>>n;
    cout<<getsum(n);




    return 0;
    
}