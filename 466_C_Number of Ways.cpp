#include<iostream>
#include<vector>
#include<math.h>

#define intt long long

using namespace std;

int main()
{
    intt n;
    cin>>n;

    intt arr[n];

    intt totalsum = 0;

    for(intt i = 0; i < n ; i++)
    {
        cin>>arr[i];
        totalsum+=arr[i];
    }


    pair<intt,intt> sum[n][n];

    for(intt i = 0; i < n ; i++)
    {
        for(intt j = 0; j < n ; j++)
        {
            sum[i][j] = {0,0};
        }
    }

    //--------------------insert first row of dynamic programming
    sum[0][0] = {0,arr[0]};
    for(intt k = 1; k < n ; k++)
    {
        sum[0][k] = {0,sum[0][k-1].second + arr[k]};
    }

    intt cnt = 0;
    for(intt i = 1 ; i < n ; i++)
    {
        for(intt j = i; j < n ; j++)
        {
            intt temp1;
            intt temp2;
            if(i == 0 && j == 0 ) continue;

            if(i == j)
                {//sum[i][j] = {sum[0][i-1].second ,arr[j]};
                    continue;
                }
            else
            {
                temp1 = sum[0][i-1].second;
                temp2 = sum[i][j-1].second + arr[j];

                sum[i][j] = {temp1,temp2};
            }

            if(temp1 == temp2 && temp2 == (totalsum - temp1 - temp2)) cnt++;

        }
    }

    cout<<cnt;



}
