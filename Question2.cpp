// Find the factorial of a large number.
//5*4*3*2*1;
#include<iostream>
using namespace std;
int factorial(int n)
{
    int ans =1;
    for(int i=n;i>=1;i--)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    int n=12;
    int ans =factorial(n);
    cout<<"Factorial of number is: "<<ans<<" ";

}