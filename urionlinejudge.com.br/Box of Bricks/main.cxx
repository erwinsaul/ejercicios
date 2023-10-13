/* Problem: Box of Bricks
 * Code: 591
 * Site: uva.onlinejudge.org
 * Status: Accepted
 */    


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int n, aux, r, ind;
	int t=1;
	while(1)
	{
		cin>>n;
		r=0;
		if(n==0)
		   break;
	    vector<int> v;
	    
	    for(int k=0;k<n;k++)
	    {
			cin>>aux;
			v.push_back(aux);
		}
		sort(v.begin(),v.end());
		ind=v.size()-1;
		while(v[0]!=v[ind])
		{
		
			v[ind]--;
			v[0]++;
			sort(v.begin(),v.end());
			r++;
		}
		cout<<"Set #"<<t<<endl;
 		cout<<"The minimum number of moves is "<<r<<"."<<endl<<endl;
		t++;
	}
	return 0;
}

