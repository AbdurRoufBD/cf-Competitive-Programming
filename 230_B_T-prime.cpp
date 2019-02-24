#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(long long num){
    if(num == 1) return false;
    bool flag=true;
    for(long long i = 2; i*i <= num ; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

bool hasDistinctDivisor(long long number)
{
    double sq = sqrt(number);
    int lsq = int(sq);
    if(lsq!=sq) return false;
    else if(isPrime(sq)) return true;
    else return false;
}

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(long long i = 0; i < n ; i++)
    {
        if(hasDistinctDivisor(arr[i]))
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }

    return 0;




}
