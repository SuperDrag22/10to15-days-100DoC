// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6
*/

#include <stdio.h>

int main(){
    int n,i,f=1;
    
    printf("Enter the limit: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        f *= i;
    }
    printf("The factorial is: %d",f);
    
    return 0;
}
