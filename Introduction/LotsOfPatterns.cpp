#include<iostream>

using namespace std;

int main(){
    int size=4,i=1,j;
  while (i<=size)  //i= no. of rows , j= no. of coloumns
{  j=1;
    while (j<=size)
    {
        cout<<"*";

        j++;
    }
    cout<<endl;    
    i++;
}



}
