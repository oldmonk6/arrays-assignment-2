#include<iostream>
#include<vector>
using namespace std;
void notsorted(int arr[],int n,bool flag)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag =false;
            break;
        }
    }
    if(flag==true)cout<<"array is sorted";
    else cout<<"array is not sorted";
}


    

int main()
{
    int arr[5]={1,2,3,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    notsorted(arr,n,true);
   

}