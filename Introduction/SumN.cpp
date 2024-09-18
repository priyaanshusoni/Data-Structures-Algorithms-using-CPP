#include<iostream>

using namespace std;

int sumofn(int k){
    if(k==0){
    return 0;
    }
    else {
        return k+sumofn(k-1);
    }

}
int main(){
    
int n;
cout<<"Enter The Number"<<endl;
cin>>n;

cout<<sumofn(n);



}