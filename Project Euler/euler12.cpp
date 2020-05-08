#include<bits/stdc++.h>
using namespace std ;
long long tau(long long num) {

    long long n = num;
    long long i = 2;
    long long p = 1;

    if (num == 1) return 1;

    while (i * i <= n) {
        long long c = 1;
        while (n % i == 0) {
            n/= i;
            c++;
        }
        i++;
        p*= c;
    }

    if (n == num | n > 1)
        p*= 1 + 1;

    return p;
}
long long solution(long long x)
 {long long  n = 1;
    long long d = 1;

    while (tau(d) <= x) {
        n++;
        d+= n;
    }
    return d;
}
int main(){
cout<<solution(500);
return 0;
}
