/*   Problem: 1004 - Traversing Grid
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Ad - Hoc
 */



#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	
	int t,f,c;
	cin>>t;
	while(t--)
	{
		cin>>f>>c;
		 
		
		if(f>c)
		{
			if(c%2==0)
			   cout<<"U"<<endl;
			else
			   cout<<"D"<<endl;
		} 
		else if(f<c)
		{
			if(f%2==0)
			   cout<<"L"<<endl;
			else
			   cout<<"R"<<endl;
		}
		else
		{
			if(c%2==0 && f%2==0)
			    cout<<"L"<<endl;
			else
			    cout<<"R"<<endl;
		}
		
		
	}
	
	return 0;
}

