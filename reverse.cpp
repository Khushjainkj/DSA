#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int int_min=pow(2,-31);
    int int_max=pow(2,31)-1;

    int ans=0;

    while(n!=0)
    {
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    if(ans>int_min || ans<int_max)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"Out of limit";
    }
}