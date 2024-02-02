#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        int count=n-i+1;
        while(count)
        {
            cout<<j;
            count=count-1;
            j=j+1;
        }
        int star=i-1;
        while(star)
        {
            cout<<"**";
            star=star-1;
        }
        int k=0;
        int var=n-i+1;
        while(var)
        {
            cout<<n-k-i+1;
            var=var-1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
}