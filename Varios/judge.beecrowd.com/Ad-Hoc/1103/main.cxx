/*  Problem: Alarm Clock	
 *  Code: 1103
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-hoc 
 */


#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
	int h1,m1,h2,m2, mth,mtm,mt;
	while(1)
	{
		cin>>h1>>m1>>h2>>m2;
		if(h1==0&&m1==0&&h2==0&&m2==0)
		      break;
		if(h1==h2)
		{
			if(m1>m2)
			   mt=24*60-(m1-m2);
			else
			   mt=(h2-h1)*60+(m2-m1);
		}
		else
		{
		if(h2<h1)
		   mth=h2*60+(24-h1)*60;
		if(h1<h2)
		   mth=(h2-h1)*60;
		if(m2>m1)
		    mtm=m2-m1;
	    if(m1>=m2)
	       mtm=-(m1-m2);
	    mt=mth+mtm;
	    }
	    cout<<mt<<endl;
	}
	return 0;
}
