/*   Problem: 4810 - Flowers Flourish from France
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	char ant;
	bool flag;
	while(getline(cin,s) && s.compare("*")!=0)
	{
		istringstream ss(s);
		ant=' ';
		flag=true;
		while(ss>>s)
		{
			if(ant!=' ')
			{
				if(ant!=tolower(s.at(0)))
				   flag =false;
			}
			else
			{
				ant=tolower(s.at(0));
			}
		}
		if(flag)
		   cout<<"Y"<<endl;
		else
		   cout<<"N"<<endl;
	}
	return 0;
}

