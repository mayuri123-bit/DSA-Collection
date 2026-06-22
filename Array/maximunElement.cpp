#include<iostream>
using namespace std;

int maximum(){
int arr[5]={20,30,10,40,60};
int max=arr[0];

for(int i=0;i<5;i++)
{
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"Maximun Element:"<<max;
return max;
}

int main()
{
    maximum();
    return 0;
}