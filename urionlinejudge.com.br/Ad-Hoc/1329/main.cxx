/*  Problem: Head or Tail
 *  Code: 1329
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc - 1
 */


#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main(int argc, char **argv)
{
	int n,t;
	int j,m;
	while(1)
	{
	  cin>>n;
	  if(n==0)
	    break;
	  j=0;
	  m=0;
	  for(int k=0;k<n;k++)
	  {
		  cin>>t;
		  if(t==0)
		    m++;
		  else
		    j++;
	  }
	  printf("Mary won %d times and John won %d times\n",m,j);
    }
	return 0;
}

