#include <stdio.h>
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
  
  
long long days;
scanf("%lld", &days);
long long years = days/365;
long long numdays = years*365;
long long remainingdays = days - numdays;
printf("you have lived for %lld years ", years);
printf("and lived %lld days" , remainingdays );
}
