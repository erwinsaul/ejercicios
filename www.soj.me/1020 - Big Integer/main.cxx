/*  Problem: Big Integer
 *  Code: 1020
 *  Site: www.soj.me
 *  Status: Pending
 *  Type: Ad-Hoc
 */

#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <utility>
#include <iostream>
#include <cmath>
#define MAX 1000

using namespace std;

//division y residuo de biginteger
 
int call_div(char *number, long div,char *result)
{
	int len=strlen(number);
	int now;
	long extra;
	char Res[MAX];
	for(now=0,extra=0;now<len;now++)
	{
		extra=extra*10 + (number[now]-'0');
		Res[now]=extra /div + '0';		
	}
	Res[now]='\0';
	for(now=0;Res[now]=='0';now++);
	strcpy(result, &Res[now]);
	if(strlen(result)==0)
	   strcpy(result,"0");
	return extra;
}
 
//


/*bigint gcd(bigint x, bigint y)
{
	if(y< bigint(0))
	   return (y*bigint(-1));
	return gcd(y,x%y);	
}*/

int main(int argc, char **argv)
{
	char fir[MAX],res[MAX];
	
	cin>>fir>>res;
	cout<<call_div();
	
	
	return 0;
}

