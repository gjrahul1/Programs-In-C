#include <stdio.h>
//Written by G.J.Rahul
int factorial(int); //Calls the factorial function
int main()
{
    int n, results;
    printf("Enter the number to find the factorial \t");
    scanf("%d",&n);
    results=factorial(n);
    printf("The factorial of %d is %d",n,results);
}
int factorial(int n) //factorial is defined 
{
    int fact;
    if (n==1) //base case
    return 1;
    else
    fact=n*factorial(n-1); //general case
    return(fact);
}
    


