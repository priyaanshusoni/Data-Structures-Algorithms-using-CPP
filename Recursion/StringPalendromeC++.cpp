#include<iostream>

using namespace std;
//initially start =0 & end = n-1
bool ispalendrome(string &str, int start, int end){
    if(start>=end){
        return true ;
    }
        else
           return (str[start]==str[end] && ispalendrome(str, start+1, end-1)); 
    }

    
int main(){
    string str;
    cout<<"Enter The String"<<endl;
    // cin>>str;
    getline(cin, str);

    int length = str.length();

    bool palindrome = ispalendrome(str, 0, length - 1);  //i can also use str.length instead of storing it into length variable end then doing length -1 = end

    if (palindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;



}