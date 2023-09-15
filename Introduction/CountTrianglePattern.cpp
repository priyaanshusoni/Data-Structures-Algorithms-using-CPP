#include<iostream>

using namespace std;
int main(){
    int size, row=1,col;
    int count=1;
    cout<<"Enter The Size Of Pattern"<<endl;
    cin>>size;

    while(row<=size){
        col=1;
        while(col<=row){
            cout<<count<<" ";
            count++;
            col++;
        }

        cout<<endl;
        row++;
    }

}