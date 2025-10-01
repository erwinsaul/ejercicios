/*  Problem: Sort by Length 
 *  Code: 2044
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted(2)
 *  Type: Data
 */


#include <iostream>
#include <sstream>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char **argv)
{
	int n,tam,si;
	string s;
	getline(cin,s);
	istringstream ss(s);
	vector< pair<int,string> > v;
    vector< pair<int,string> >::iterator it;
    vector<string> ve;
	set<int> st;
	set<int>::reverse_iterator rit;
	ss>>n;
	while(n--)
	{
		getline(cin,s);
		ss.clear();
	    ss.str(s);
	    while(ss>>s)
	    {
			tam=(int)s.length();
			st.insert(tam);
			v.push_back(make_pair<int,string>(tam,s));
		}
		
		for(rit=st.rbegin();rit!=st.rend();rit++)
		{
			tam=(*rit);
			si=v.size();
			for(int k=0;k<si;k++)
			{
				if(v[k].first==tam)
				{
					ve.push_back(v[k].second);															
				}								
			}			
		}
		si=(int)ve.size();
		for(int i=0;i<si;i++)
		{
			cout<<ve[i];
			if(i+1<si)
			  cout<<" ";
		}
		cout<<endl;
	   s.clear();
	   v.clear();
	   ve.clear();
	}
	return 0;
}

