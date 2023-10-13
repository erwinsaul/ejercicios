/*  Problem: Queen
 *  Code: 1087
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: AdHoc
 */


#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int x1,y1,x2,y2;
	while(1)
	{
		cin>>x1>>y1>>x2>>y2;	
		if(x1==0 && y1==0 && x2==0 && y2==0)
		   break;	
		if(x1==x2 && y1==y2)
		  cout<<"0"<<endl;
	    else if(x1==x2 || y1==y2 || fabs(x1-x2)==fabs(y1-y2))
	      cout<<"1"<<endl;
	    else
	      cout<<"2"<<endl;	      
	}
	return 0;
}

