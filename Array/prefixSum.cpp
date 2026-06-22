//repeated prefix sum _--->Adding previous no.with current no. to generate next no.
//Example 1 2 3 4 5---->1 3 6 10 15 like this

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int num=0;
    for(int i=0;i<5;i++)
    {
        int sum=arr[i]+num;
        cout<<sum<<" ";
        num=sum;
    }
    return 0;
}