/*  Problem: Alarm Clock
 *  Code: 11677
 *  Site: uva.onlinejudge.org
 *  Type: Time / Ad-Hoc / Math
 *  Status : pending
 */      
    


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int h1,m1,h2,m2,h,m;
	while(1)
	{
		cin>>h1>>m1>>h2>>m2;
		if(h1==0&&m1==0&&h2==0&&m2==0)
		   break;
		/*if(h1==h2 && m1==m2)
		{
		   h=0;
		   m=0;   
	   }*/
		else if(h1<=h2)
		   h=h2-h1;
		else
		   h=h2+(23-h1);
		if(m1<=m2)
		   m=m2-m1;
		else
		   m=(60-m1)+m2;
	    cout<<(h*60)+m<<endl;
	}
	return 0;
}

