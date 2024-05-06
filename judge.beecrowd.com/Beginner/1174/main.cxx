/*  Problem: Array Selection I
 *  Code: 1174
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;	
int main(int argc, char **argv)
{
	float v[100];
	for(int k=0;k<100;k++)
	{
		cin>>v[k];
	}
	for(int k=0;k<100;k++)
	{
		if(v[k]<=10)
		  cout<<"A["<<k<<"] = "<<v[k]<<endl;
		  
	}
	return 0;
}

