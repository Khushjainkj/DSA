#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    int value=n;
    while(i<=n)
    {
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=value)
        {
            cout<<"*";
            j=j+1;
        }
        value=value-1;
        cout<<endl;
        i=i+1;
    }
}