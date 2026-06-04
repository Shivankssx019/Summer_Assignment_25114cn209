#include<stdio.h>
int sumofdigit(int n){
    if(n==0)
    return 0;
    else return (n % 10) + sumofdigit(n / 10);

}
int main(){
    int x ;
    printf("Enter a Number :");
    scanf("%d",&x);

    int result = sumofdigit(x);
    
        printf("%d",result);
    

    return 0;
}