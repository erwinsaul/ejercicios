/*  Problem: Getline One
 *  Code: 1216
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc 
 */


#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char **argv)
{
	string s;
	int n,t;
	double sum;
	t=0;
	while(getline(cin,s))
	{
		getline(cin,s);
		istringstream buffer(s);
        buffer >> n;       
		sum=sum+n;
		t++;
	}
	
	printf("%.1f\n",(sum/(double)t));
	return 0;
}

