#include<iostream>

using namespace std;
int main(){
    char ch;       //  65-90(Upper Case letters) , 97 - 122 (lower case), 48-57 (Numeric)
    cin>>ch;
    if (ch>=64 && ch<=90)
    {
        cout<<"It is a Upper Case Letter"<<endl;
    }
    else if (ch>=97 && ch<=122){
        cout<<"It is Lower Case Letter";
    }
    else if(ch>=48 && ch<=57){
        cout<<"It is Numeric"<<endl;
    }
    else
    {
        std::cout << "It is a Symbol" << std::endl;
    }
    
}