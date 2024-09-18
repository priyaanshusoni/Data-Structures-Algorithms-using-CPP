#include<stdio.h>

    //move n disks from A to C using B as quxx
    void hanoi(int n, char A , char C , char B){
        if(n==0){
            return ; // nothing to move!!

        }
        //recursively move n-1 disks 
        //from A to B using c as auxx
        hanoi(n-1, A,B,C); 
        // move of a single disk
        printf("Move 1 disk from %c to %c\n",A,C);
        //recursively move n-1 disks
        //from B to C using A as auxx
        hanoi(n-1,B,C,A);
    }

    int main(){

        int n=4;//Number Of disks
        hanoi(n,'A','B','C'); 
        return 0;
}