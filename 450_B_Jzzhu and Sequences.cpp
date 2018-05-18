#include<iostream>
using namespace std;

int main()
{
    long long f1,f2,fn,n;
    cin>>f1>>f2>>n;
    if(n>=1)
    {
        switch(n%6)
        {
           case 0 : fn = -(f2-f1); break;
           case 1 : fn = f1; break;
           case 2 : fn = f2; break;
           case 3 : fn = f2 - f1; break;
           case 4 : fn = -f1; break;
           case 5 : fn = -f2; break;
        }
    }
    if(fn >= 0)
    {
        cout<<(fn)%1000000007;
    }
    else
    {
        cout<<(2000000014+ fn)%1000000007;
    }

    return 0;

}
