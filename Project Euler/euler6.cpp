#include<bits/stdc++.h>
using namespace std;
long long difference(long long n)
{

    long diff= pow((n*(n+1)/2),2)-((n*(n+1)*(2*n+1))/6);
    return diff;
}
int main()
{

    long long n=100;
    cout<<difference(n)<<endl;
    return 0;
}
