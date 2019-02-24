#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        bool flag = true;
        for(int j = 0 ; j < n ; j++)
        {
            if(i == j) continue;

            int x = (int)abs((arr[i]-arr[j])*1.0);
            if(x % 2 == 0)
            {
                flag = false;
            }
        }
        if(flag)
        {
            cout<<i+1;
            return 0;
        }
    }
}
