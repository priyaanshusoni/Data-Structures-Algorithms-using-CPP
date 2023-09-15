#include<iostream>

using namespace std;
int main(){
    // celcius to forenhite conversion 
    float DegreeTemp;
     cout<<"Enter Temparature in Degree celcius"<<endl;
     cin>>DegreeTemp;
     float Forenhitetemp=  ((9.0/5.0)*DegreeTemp+ 32);
     std::cout << "tempartature in farenhite is :" <<Forenhitetemp<< std::endl;


}