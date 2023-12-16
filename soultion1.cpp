#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int count=0;
    int x=1;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>x)count++;
    }
    cout<<"the no of elements greater than x is "<<count;
}