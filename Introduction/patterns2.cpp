#include<iostream>

using namespace std;
int main(){
    int size,i=1,j;
    cout<<"Enter The Size"<<endl;

    cin>>size;

    cout<<endl;


    while(i<=size){
        j=1;
        while(j<=size){
            cout<<j;
            j++;
        }
       cout<<endl;
        i++;
    }
}