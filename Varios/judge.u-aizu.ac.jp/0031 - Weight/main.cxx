/* Problem: Weight
 * Code: 0031
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc 
 */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int p[10]={1,2,4,8,16,32,64,128,256,512};	
    vector<int> v;
    int n,k;
    while(cin>>n)
    {
		k=9;
		while(k>=0)
		{
			if(p[k]<=n)
			{
			  n=n-p[k];
			  v.push_back(p[k]);
		    }
		    k--;
		}
		sort(v.begin(),v.end());
		int t=v.size();
		for(int k=0;k<t;k++)
		{
		    cout<<v[k];
		    if(k+1!=t)
		       cout<<" ";
		 }
		cout<<endl;
		v.clear();
	}
    
    
	return 0;
}

