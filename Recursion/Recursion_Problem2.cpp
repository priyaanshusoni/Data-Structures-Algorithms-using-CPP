#include<iostream>
using namespace std;
void binaryequivalent(int n){
    if(n==0){
        return;
    }
    else{
        binaryequivalent(n/2);
        cout<<n%2;
    }
}
// using namespace std;
int main(){
    int n;
    // n=1;
    // cout<<n%2<< "IS ANSWER"<<endl;
    cin>>n;
    binaryequivalent( n);

}