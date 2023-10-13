#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	queue< int > c;
	int n;
	bool f=false;
	while(cin>>n && n)
	{
		for(int k=1;k<=n;k++)
		{
			c.push(k);
		}
		cout<<"Discarded cards: ";
		f = false;
		while(c.size()>1)
		{
			if(f)
				cout<<", ";
			f = true;
			cout<<c.front();
			c.pop();
			c.push(c.front());
			c.pop();
		}
		cout<<endl;
		cout<<"Remaining card: ";
		cout<<c.front()<<endl;
		while(!c.empty())
		{
			c.pop();
		}
	}
	return 0;
}

