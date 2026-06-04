#include<stdio.h>
int fact(int n){
    if(n==0 || n==1)
    return 1 ;
    else return n * fact(n-1);
}
int main(){
    int x;
    printf("Enter a Number :");
    scanf("%d",&x);
    int result = fact(x);
    printf("%d",result);

    return 0;}