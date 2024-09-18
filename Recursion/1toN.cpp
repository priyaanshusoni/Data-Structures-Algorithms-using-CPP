#include<iostream>


using namespace std;

void printnto1(int i, int n){
    if(i<=0){
        return ;
    }

    cout<<i;
    printnto1(i-1,n);
                                           

}

int main(){

    printnto1(4,4);

    
           
}