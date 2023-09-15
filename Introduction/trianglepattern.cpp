#include<iostream>

using namespace std;
int main(){
    int size,row,col;
    row=1;

    cout<<"Enter The Size"<<endl;
    cin>>size;

    while(row<=size){
        col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }    
}