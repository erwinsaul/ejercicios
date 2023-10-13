/*  Problem:  Challenging Words
 *  Code: 2012
 *  Site: coj.uci.cu
 *  Status: Pending
 *  Type: String
 */

#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

int dimension(string s)
{
	int r=0;
	for(int k=0;k<(int)s.length();k++)
	{
		if(s.at(k)>='a' && s.at(k)<='z')
		   r=r+s.at(k)-'a';
	}
	return r;
}


int main(int argc, char **argv)
{
    string s;
    int v[2001],tam;
    int mayor=0;
    int k=0;
    while(cin>>s)
    {
		tam=dimension(s);		
		if(tam>mayor)
		   mayor=tam;
		v[k]=tam;
		k++;		
	}
	cout<<mayor<<endl;
	for(int k=0;k<2001;k++)
	{
		if(v[k]==mayor)		
		   cout<<(k+1)<<endl;
	}
	return 0;
}

