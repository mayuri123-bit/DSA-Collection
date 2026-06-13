//Recursion Program
#include<iostream>
using namespace std;
//Function is calling itself 
int factorial(int n)
{
    if(n==1) return 1; //Base case

    return n* factorial(n-1); 
}

//Recursion is an concept where function call it self to solve problem by breaking down
//  it into small versions of the same problem until base case reached 
int main()
{
    int n=5;
    int fact=factorial(n);
    cout<<"factorial of "<<n<<"="<<fact;
    return 0;
}