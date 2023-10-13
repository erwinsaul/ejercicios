/* Problem: Discover the Web 
 * Code: 1113
 * Site: lightoj.com
 * Type: String / Pila
 * Status: Accepted
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	int t;
	cin>>t;
	string ins,url;
	int ind;
	for(int k=1;k<=t;k++)
	{
		cout<<"Case "<<k<<":"<<endl;
		vector<string> v;
		v.push_back("http://www.lightoj.com/");
		ind=0;
		while(1)
		{
		 cin>>ins;
		 if(ins.compare("VISIT")==0)
		 {
			cin>>url;
			if(ind==((int)v.size()-1))
			{
		  	  ind++;
		  	  v.push_back(url);
		  	  cout<<url<<endl;
		    }
		    else
		    {
				while(ind<((int)v.size()-1))
				{
					v.pop_back();
				}
				v.push_back(url);
		  	    cout<<url<<endl;
		  	    ind=(int)v.size()-1;
			}
		 }
		 else if(ins.compare("BACK")==0)
		 {
			ind--;
			if(ind<0)
			{
				cout<<"Ignored"<<endl;
				ind=0;
			}
			else
			{
				cout<<v[ind]<<endl;
			}
		}
		else if(ins.compare("FORWARD")==0)
		{
			ind++;
			if(ind>=(int)v.size())
			{
				cout<<"Ignored"<<endl;
				ind=v.size()-1;
			}
			else
			{
				cout<<v[ind]<<endl;
			}
		}
		else
		   break;
	   }
		
	}
	return 0;
}

