#include<iostream>

using namespace std;
int main(){
    int num=1;
    for(int i=1;i<=3;i++){
        for(int j=3;j>=i;j--){
                 cout<<num;
                 num++;
        }
        cout<<endl;
    }


    for(int i=3;i>=1;i--){
        for(int j=2;j<3;j++){
            cout<<num;
            num++;
        }
    }
}