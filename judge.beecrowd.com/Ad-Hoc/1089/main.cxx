/*  Problem: Musical Loop
 *  Code: 1089
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(int argc, char **argv)
{
	int t, total, n;
	int ant,primero;
	bool flag,flagp;
	while(cin>>t && t)
	{
		cin>>primero;
	    cin>>n;
	    flagp=flag=n > primero?true:false;						
	    ant=n;
	    total=1;
		for(int k=2;k<t;k++)
		{
			cin>>n;
			if(ant < n && !flag)
			{				
					flag=true;				
					total++;				
			}
			else if(ant > n && flag)
			{
				flag=false;					
				total++;				
				
			}
			ant=n;
	   }
		if(ant<primero && !flag)
		{
		   total++;
		   flag=true;
		 }
		else if(ant>primero && flag)
		{
		   total++;
		   flag=false;
		 }
		if(flag==flagp)
		   total--;
		cout<<total<<endl;
	   }
	
	
	return 0;
}


