/*  Problem:  Sacrament of the Sum
 *  Code: 1021
 *  Site: acm.timus.ru
 *  Type: Ad-Hoc / Simulacion / Map
 *  Status : Accepted
 */  

#include <iostream>
#include <map>

using namespace std;
int main(int argc, char **argv)
{
	map<int,bool> m;
	map<int,bool>::iterator it;
	int n, a;
	bool flag=false;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>a;
		m[a]=true;
	}
	cin>>n;
	for (int k=0;k<n;k++)
	{
		cin>>a;
		if(m[10000-a])
        {
			flag=true;
			break;
		}
	}
	if(flag)
	   cout<<"YES";
	else
	   cout<<"NO";
	return 0;
}

