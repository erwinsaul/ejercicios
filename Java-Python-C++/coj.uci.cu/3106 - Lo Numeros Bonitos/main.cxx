/* problem:  Los Números Bonitos
 * code: 3106
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

bool palindrome(string s)
{
	int i=0,t;
	t= s.length()-1;
	while(i<t)
	{
		if(s.at(i)!=s.at(t))
		  return false;
		i++;
		t--;		
	}
	return true;
}

int main(int argc, char **argv)
{
	string s1,s2,s ;
	cin>>s1>>s2;
	s = s1+s2;
	
	if(palindrome(s))
	   cout<<"Yes";
	else
	   cout<<"No";
	return 0;
}

