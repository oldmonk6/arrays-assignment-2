#include<iostream>
#include<vector>
using namespace std;
void difference(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+10;
            cout<<arr[i]<<" ";
        }
        else
        {

         arr[i]=arr[i]*2;
         cout<<arr[i]<<" ";
        }

    }
    


}



    

int main()
{
    int arr[]={1,2,3,5,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    difference(arr,n);
    

}