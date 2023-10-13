/* problem:  Eazzzzzy
 * code: 1688
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int c,a,b;
	
	while(cin>>c && c!=-1)
	{
		if(c==1)
		{
			cin>>a;
			for(int k=0;k<a;k++)
			{
				for(int j=0;j< a-(k+1);j++)
				{
					cout<<" ";
				}
				for(int j=0;j< (2*(k+1)-1) ;j++ )
				{
					cout<<"*";
				}
				cout<<endl;
			}
		}
		else if(c==2)
		{	
			cin>>a>>b;
			for(int k=0;k<b;k++)
			{
				for(int j=0;j< b-(k+1);j++)
				{
					cout<<" ";
				}
				for(int j=0;j< a ;j++ )
				{
					cout<<"*";
				}
				cout<<endl;
			}			
		}
		else
		{
			cin>>a>>b;
			for(int k=0;k<b;k++)
			{
				for(int j=0;j<a;j++)
				{
					cout<<"*";
				}
				cout<<endl;
			}
		}
		cout<<endl;	
	}
	return 0;
}

