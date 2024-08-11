// Find the first non-repeating element in the array .
#include<iostream>
using namespace std;
int nonrepeating(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            return arr[i];
        }
    }
    return 0;
}
int main()
{
    int arr[]={2,0,4,4,3,1,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ans =nonrepeating(arr,n);
    cout<<" Answer is : "<<ans;
}