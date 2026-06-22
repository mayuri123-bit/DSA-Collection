//Defination---It measures how running time of algorithm increases as input size increases
#include<iostream>
using namespace std;
//Constant-time O(1)
int constant()
{
int a=10;
int b=20;
return a+b;
}

//O(n)-single loop
int linear(){
int n=5;
    for(int i=0;i<=n;i++)
    {
        cout<<" "<<i;
    }
    return n;
}

//O(n square)--Quadratic Nested loop
int Nested(){
    int n=5;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

// O(n cube) loop inside Nested loop
int loops()
{
    int n=3;
    for (int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            for (int k=0;k<=n;k++)
            {
                cout<<" "<<i;
            }
            cout<<"\n";
        }
        cout<<" ";
    }
    return n;
}

//log n -logrithmic 
int iteration(){
int n=16;
while(n>1)
{
    n=n/2;//reduceby half-half at every iteration
    cout<<" "<<n;
}
return n;
}

//main loop to call given above function
int main(){
    int sum=constant();
    cout<<"Sum= "<<sum<<"\n";

    cout<<"Linear Elements:";
    int ivalue=linear();
    cout<<ivalue;

    cout<<"\nNested loop:\n";
    int loop=Nested();
    cout<<loop;

    cout<<"\n Logarithmic:";
    int log=iteration();
    cout<<log;


    return 0;
}

