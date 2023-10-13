/*  Problem: Array Fill IV
 *  Code: 1179
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Begginer
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    vector<int> impar;
    vector<int> par;
    vector<int>::iterator it;
    int x,k;
    for(int j=0;j<15;j++)
    {
		cin>>x;
		if(x%2==0)
		{
			par.push_back(x);
		}
		else
		{
			impar.push_back(x);
		}
		if(par.size()==5)
		{
			k=0;
			for(it=par.begin();it!=par.end();it++)
			{
			  printf("par[%d] = %d\n",k,(*it));	
			  k++;
			}
			par.clear();
		}
		if(impar.size()==5)
		{
			k=0;
			for(it=impar.begin();it!=impar.end();it++)
			{
			  printf("impar[%d] = %d\n",k,(*it));	
			  k++;
			}
			impar.clear();
		}
	}
	k=0;
			for(it=impar.begin();it!=impar.end();it++)
			{
			  printf("impar[%d] = %d\n",k,(*it));	
			  k++;
			}
	    k=0;
			for(it=par.begin();it!=par.end();it++)
			{
			  printf("par[%d] = %d\n",k,(*it));	
			  k++;
			}
			
	return 0;
}

