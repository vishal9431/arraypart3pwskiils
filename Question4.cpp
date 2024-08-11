// Check if an array is a subset of another .
#include<iostream>
using namespace std;
bool subset(int arr[],int n1,int arr2[],int n2)
{
    int maxi = max(n1,n2);
    int mini = min(n1,n2);
    for(int i=0;i<n1;i++ )
    {
        bool check = false;
        for(int j=0;j<n2;j++)
        {
            if(arr[i]==arr2[j])
            {
                check = true;
            }
        }
        if(check==false)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr1[]={4,3,6,7,8,9};
    int arr2[]={3,5,6,7,9,4};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);

    bool flag = subset(arr1,s1,arr2,s2);
    if(flag== true)
    {
        cout<<"Array is subset of another : "<<endl;
    }
    else{
        cout<<"Array is not subset of another :"<<endl;
    }

}