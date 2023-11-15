#include<iostream>

using namespace std;

int printsum(int n){
     
    while(n!=0){                
    return n+printsum(n-1);
}

    return 0;

} 
int main(){

    cout<<printsum(3);
    
}