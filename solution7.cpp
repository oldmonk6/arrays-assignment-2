#include<iostream>
#include<vector>
using namespace std;
void palindrome(int arr[],int n,bool flag)
{
    
   int i=0;
   int j=n-1;
   while(i<j)
   {
    if(arr[i]==arr[j])
    {
        flag=true;
        i++;
        j--;
      
    }
    else
    {
        flag =false;
        break;
    }
    

   }
   if(flag==true)cout<<"given array is a palindrome";
   else
   cout<<"the given array is not a pallindrome";
    


}

int main()
{
    int arr[]={1,2,3,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    palindrome(arr,n,false);
    

}