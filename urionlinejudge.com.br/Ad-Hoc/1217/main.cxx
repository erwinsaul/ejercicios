/*  Problem: Getline Two - Fruits
 *  Code: 1217
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	string s;
	int n,t;
	float p,sum=0,total=0;
	getline(cin,s);
	istringstream ss;
	ss.str(s);
	ss>>n;
	for(int k=1;k<=n;k++)
	{
	  ss.clear();
	  getline(cin,s);
	  ss.str(s);
	  ss>>p;	 
	  total=total+p;
	  t=0;
	  getline(cin,s);
	  ss.clear();
	  ss.str(s);
	  while(ss>>s)
	  {		 
		  t++;
	  }
	  printf("day %d: %d kg\n",k,t);
	  sum=sum+t;
	}
	printf("%.2f kg by day\n",sum/(double)n);
	printf("R$ %.2f by day\n",total/(double)n);

	return 0;
}

