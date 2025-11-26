/*   Problem:1753 - Numbersrebmun
 *   Code: 1753
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Ad-Hoc
 */



#include <iostream>
#include <string>

using namespace std;

string number(string s)
{
	string r="";
	char c;
	int t=s.length();
	for(int k=0;k<t;k++)
	{
		c=s.at(k);
	if(c=='A' || c=='B' || c=='C')
	   r.push_back('2');
	else if(c=='D' || c=='E' || c=='F')
	   r.push_back('3');
	else if(c=='G' || c=='H' || c=='I')
	   r.push_back('4');
	else if(c=='J' || c=='K' || c=='L')
	   r.push_back('5');
	else if(c=='M' || c=='N' || c=='O')
	   r.push_back('6');
	else if(c=='P' || c=='Q' || c=='R' || c=='S')
	   r.push_back('7');
	else if(c=='T' || c=='U' || c=='V')
       r.push_back('8');
    else
	   r.push_back('9');
	}	
	return r;
}


bool palindrome(string s)
{
	int ant=0;
	int post=s.length()-1;
	while(ant<post)
	{
		if(s.at(ant)!=s.at(post))
		   return false;
		ant++;
		post--;
	}
	return true;
}

int main(int argc, char **argv)
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		for(int k=0;k<(int)s.length();k++)
		{
			s.at(k)=toupper(s.at(k));
		}		
		if(palindrome(number(s)))
		   cout<<"YES";
		else
		   cout<<"NO";
		cout<<endl;
	}
	return 0;
}

