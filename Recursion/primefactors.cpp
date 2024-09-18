
#include<iostream>
#include<vector>

using namespace std;

bool isprime(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            return false;
        }

        
    }

    return true;
}
   vector<int>primefactor(int n){

         vector<int>factors;

       
          for(int i=2 ; i*i<=n;i++ ){

           
            if(isprime(i)){
                int x=i;

                while(n%i==0){
                    factors.push_back(i);
                       x=x*i;
                }

             
                
            }
          }




          if (n > 1) {
        factors.push_back(n); // Any remaining factor greater than 1 is also prime.
    }
    return factors;
}




int main(){
    //    cout<<isprime(13);
    int k;
    cout<<"Enter The Number "<<endl;
    cin>>k;

    cout<<primefactor(k);
}