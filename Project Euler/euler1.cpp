#include<bits/stdc++.h>
using namespace std;
int sumDivisibleByN(int n)
{
    int p=999/n;
    return (n*p*(p+1))/2;
}
int main()
{
    cout<<(sumDivisibleByN(3)+sumDivisibleByN(5)-sumDivisibleByN(15))<<endl;
    return 0;
}
