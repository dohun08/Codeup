#include <stdio.h>

int chk[110]; 
long long d[110]; 

long long f(int n)
{
  if(chk[n] == 1) return d[n];
  chk[n]=1;
  if(n <= 2) return d[n]=1;
  return d[n]=(f(n-2)+f(n-1))%1000000007;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", f(n)%1000000007);
}