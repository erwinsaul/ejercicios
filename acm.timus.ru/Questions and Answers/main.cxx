/*  Problem:  Questions and Answers
 *  Code: 1026
 *  Site: acm.timus.ru
 *  Type: Ad-Hoc / Ordenacion
 *  Status : Accepted
 */  
   


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int n,a;
	vector<int> v;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>a;
		v.push_back(a);
	}
	string s;
	cin>>s;
	sort(v.begin(),v.end());
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>a;
		cout<<v[a-1]<<endl;
	}
	return 0;
}

