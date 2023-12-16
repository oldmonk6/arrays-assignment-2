#include<iostream>
#include<vector>
using namespace std;
void difference(int arr[],int n)
{
    int sumodd=0;
    int sumeven=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)sumeven=sumeven+arr[i];
        else sumodd=sumodd+arr[i];
    }
    if(sumodd>=sumeven)
    {
        int diff=sumodd-sumeven;
        cout<<diff<<endl;

    }
    else
    {
        int diff=sumeven-sumodd;
        cout<<diff;
    }


}



    

int main()
{
    int arr[]={1,2,3,5,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    difference(arr,n);
    

}