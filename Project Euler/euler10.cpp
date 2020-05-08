#include<bits/stdc++.h>
using namespace std;

long long SieveOfEratos(long long n)
{
    bool prime[n+1];
    long long sum=0;
    memset(prime,true,sizeof(prime));
    for(long long i=2;i<n;i++)
    {
        if(prime[i])
            for(long long p=i*i;p<n;p+=i)
             prime[p]=false;

    }
    for(long long i=2;i<n;i++)
    {
        if(prime[i])
            sum+=i;
    }
    return sum;
}

int main()
{
    long long n=2000000;
    cout<<SieveOfEratos(n)<<endl;
    return 0;
}
