/*  Problem: Even and Odd	
 *  Code: 1259
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Data Structures and Libraries - 2
 */

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> par;
	vector<int> impar;
	int n,t;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(t%2==0)
		  par.push_back(t);
		else
		  impar.push_back(t);
	}
	sort(par.begin(),par.end());
	sort(impar.begin(),impar.end());
	vector<int>::iterator it;
	vector<int>::reverse_iterator rit;
	for(it=par.begin();it!=par.end();it++)
	   printf("%d\n",(*it));
	for(rit=impar.rbegin();rit!=impar.rend();rit++)
	   printf("%d\n",(*rit));
	return 0;
}

