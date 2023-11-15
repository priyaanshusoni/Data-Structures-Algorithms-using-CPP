#include<stdio.h>
int push(int stack[], int stack_top, int maxstack, int item){
    if(stack_top==maxstack){
        printf("\n Stack Overflow");
        return -1;
    }
    else{
        stack_top++;
        stack[stack_top]=item;
        printf("the final insertion is",stack[5]);
        int top=stack_top;
        return 0;
    }
}
int main(){
    int arr[5]={1,2,3};

    push(arr,3,5,4);
    
    
return 0;
}