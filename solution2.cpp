#include<iostream>
#include<vector>
using namespace std;
void threelarge(int arr[],int n,vector<int>&v)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
        
    }
    for(int i=0;i<n;i++)
    {
        v[i]=arr[n-i-1];
        
        cout<<"the elments are "<<v[i]<<endl;;
        if(i==2)break;
        
    }

    
}
int main()
{
    int arr[5]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n,0);
    threelarge(arr,n,v);

}