/*   Problem: Lucky Numbers I
 *   Code: 1366
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	vector<long int> v;
    vector<long int> sol;	
    v.push_back(1);
    int j=0;
    int k=1;
    int t,n;
	while(sol.size()<=8000)
	{
		v.push_back(5*v[j]);					
		if(k%2==1)
		  sol.push_back(v[k]);		
		v.push_back(v[v.size()-1]+1);
		j++;
		k++;
	}
	cin>>t;
	while(t--)
	{
	  cin>>n;
	  cout<<sol[n-1]<<endl;	
	}
	
	
	return 0;
}

