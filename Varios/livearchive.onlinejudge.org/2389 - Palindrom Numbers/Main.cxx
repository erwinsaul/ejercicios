/*   Problem: 2389 - Palindrom Numbers
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Math
 */

#include <bits/stdc++.h>

using namespace std;

string itob(long int n, int b=10)
{
	string num="";
	int j,sign;
	if((sign=n)<0)
	   n=-n;
	do
	{
		j=n%b;
		num.push_back((j<10)?(j+'0'):('A'+j-10));
	}while((n/=b)!=0);
	if(sign < 0)
	  num.push_back('-');
    return string(num.rbegin(),num.rend());
}


bool palindrome(string s)
{
	int ant=0;
	int pos=s.length()-1;
	while(ant<pos)
	{
		if(s.at(ant)!=s.at(pos))
		  return false;
		ant++;
		pos--;
	}
	return true;
}

int main(int argc, char **argv)
{
	int n;
	bool flag;	
	vector<int> v;
	while(cin>>n && n)
	{
		for(int k=2;k<=16;k++)
		{
		  if(palindrome(itob(n,k)))
		  {
		    v.push_back(k);
		  }
	    }
	    
	    if(v.size()==0)
	       cout<<"Number "<<n<<" is not palindrom"<<endl;
	    else
	    {
			flag=false;
			cout<<"Number "<<n<<" is palindrom in basis ";
			for(int k=0;k<(int)v.size();k++)
			{
				if(flag)
				   cout<<" ";
				flag=true;
				cout<<v[k];
			}
			cout<<endl;
		}
		v.clear();
	}
	return 0;
}

