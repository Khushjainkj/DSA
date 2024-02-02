#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A';

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char value=ch + n - i + j -1;
            cout<<value;
            value=value-1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}