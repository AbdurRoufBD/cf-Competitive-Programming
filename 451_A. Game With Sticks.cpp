#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;
    if(m == n)
    {
        if(n%2)
        {
            cout<<"Akshat";
        }
        else
        {
            cout<<"Malvika";
        }
        return 0;
    }
    else
    {
        if(min(m,n) % 2)
        {
           cout<<"Akshat";
        }
        else
        {
            cout<<"Malvika";
        }
        return 0;
    }
}
