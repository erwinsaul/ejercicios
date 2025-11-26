/* Problem: Candy I
 * Code: CANDY
 * Site: spoj.pl
 * Status: Time Limit Exced / Wrong Answer
 */    


#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, aux, r, ind, s;
	
	while(1)
	{
		scanf("%d",&n);
		r=0;
		if(n<1)
		   break;
	    vector<int> v;
	    s=0;
	    for(int k=0;k<n;k++)
	    {
			scanf("%d",&aux);//cin>>aux;
			v.push_back(aux);
			s+=aux;
		}
		int a=s/n;
		
		if(a*n==s)
		{
		 sort(v.begin(),v.end());
		 ind=v.size()-1;
		 while(v[0]!=v[ind])
		 { 
		
			v[ind]--;
			v[0]++;
			sort(v.begin(),v.end());
			r++;
		 }
		 printf("%d\n",r);
	    }
	    else
	     printf("-1\n");
	}
	return 0;
}

