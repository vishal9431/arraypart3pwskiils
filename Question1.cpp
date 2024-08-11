// Count the number of triplets whose sum is equal to the given value x.
#include <iostream>
#include<algorithm>
using namespace std;
int countTriplets(int arr[],int n,int x)
{
    int count =0;
   for(int i=0;i<n-2;i++)
   {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;j<n;j++)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==x)
                {
                    count++;
                }
            }
        }
   }
   return count;
}
int main()
{
    int arr[]={3,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x=14;
    int ans =countTriplets(arr,n,x);
    cout<<"Answer is << :"<<ans<<"";
}