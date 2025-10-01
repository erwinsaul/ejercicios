/* problem: A. Pashmak and Garden
 * code: 459
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int x1,x2,x3,x4,y1,y2,y3,y4,x,y,i;
	cin>>x1>>y1>>x2>>y2;
	x=abs(x2-x1);
	y=abs(y2-y1);	
	if(x1!=x2 && y1!=y2 &&x!=y)
	   cout<<"-1";
	else if(y1==y2)
	{
		cout<<x1<<" "<<y1+x<<" "<<x2<<" "<<y2+x;
	}
	else if(x1==x2)
	{
		cout<<x1+y<<" "<<y1<<" "<<x2+y<<" "<<y2;
	}
	else
	{
		cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
	}
	return 0;
}

