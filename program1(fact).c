#include <stdio.h>
int main() {
    int n, fact=1; 
    printf("Enter the number you want to find the factorial of");
    scanf("%d",&n);
    int i=1;
        while (i<=n) {
            fact=fact*i;
            i++;
        }
        printf("Factorial of %d is %d", n,fact);
        
    return 0;
}