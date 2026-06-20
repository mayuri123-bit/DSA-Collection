//O(1)-Constant space
#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int result=a+b;
    return result;
}

//o(n)-Linear space
int linear(){
    int n=5;
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        arr[i]=i;
    }
    return n;
}

//o(n Square)-Quadratic Space
/*int demo(){
    int n=5;
    int matrix=[n][n]; //no. n =no.elements (5 x 5 = 25 elements)
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            matrix[n][n]=i+j;
        }
    }
    return n*n;
} ------*/

//Recursion space
int print(int n)
{
    if(n==0)
        return 0;

    cout<<n<<endl;
    print(n-1);
    return n;
}

int main()
{
//------The memory space for the result is contant
    cout << "Constant function: ";
    cout << sum(10,20);

    cout << "\nLinear function: ";
    int space = linear();
    cout << space;

  //  cout << "\nQuadratic function(Total elements)= ";
// cout << demo();

    cout << "\nRecursion function: ";
    cout << print(5);
     
    return   0;
}
