/*   Problem: B. Queue at the School
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,t;
    string s;
    cin>>n>>t>>s;
    for(int j=0;j<t;j++)
    {
	  for(int k=0;k<(s.length()-1);k++)
	  {
		if(s.at(k)=='B')
		{
			if(s.at(k+1)=='G')
			{
			   swap(s.at(k),s.at(k+1));
			   k++;
		    }
		}
	  }
	}
	cout<<s<<endl;
	return 0;
}

