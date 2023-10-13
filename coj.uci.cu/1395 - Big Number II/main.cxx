/*   Problem:  1395 - Big Number II
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <bits/stdc++.h>
#define MAX 10000001

using namespace std;
double dig[MAX];
int main(int argc, char **argv)
{
    int t,n;    
    for(int i=1;i<MAX;i++)
                dig[i]=log10(i);
    for(int i=2;i<MAX;i++)
                dig[i]+=dig[i-1];
    dig[0]=dig[1]=1;

    scanf("%d",&t);;
    while(t--)
    {
		cin>>n;
		printf("%.0f\n",ceil(dig[n]));
	}	
	return 0;
}

