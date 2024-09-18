<<<<<<< HEAD
#include<iostream>

using namespace std;

int maxpro(int a[],int n){

   int cost;
   int profit=0;
   int mini=a[0];

   for(int i=1;i<n;i++){
        cost=a[i]-mini;
        profit=max(profit,cost);

        mini=min(a[i],mini);
   }

     return profit;


}
int main(){
    int prices[] = {7,1,5,3,6,4};

    int n=sizeof(prices)/sizeof(prices[0]);


     cout<<maxpro(prices,n);

=======
#include<iostream>

using namespace std;

int maxpro(int a[],int n){

   int cost;
   int profit=0;
   int mini=a[0];

   for(int i=1;i<n;i++){
        cost=a[i]-mini;
        profit=max(profit,cost);

        mini=min(a[i],mini);
   }

     return profit;


}
int main(){
    int prices[] = {7,1,5,3,6,4};

    int n=sizeof(prices)/sizeof(prices[0]);


     cout<<maxpro(prices,n);

>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
}