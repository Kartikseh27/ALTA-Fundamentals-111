#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() 

{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 

   long long x;
   scanf("%lld",  &x );
   long long discount = 1ll*( x/10);
   long long discount_amount = 1ll*(x-discount);
   long long tax = 1ll*(discount_amount * 0.18);
   long long total_amount = 1ll*(discount_amount + tax);
   printf("%lld",total_amount );
}
