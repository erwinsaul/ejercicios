/*  Problem: 10945 - Mother bear
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: String
 */


#include <bits/stdc++.h>

using namespace std;

string palabra(string s)
{
	string r="";
	for(int k=0;k<(int)s.length();k++)
	{
		if(isalpha(s.at(k)))
		  r.push_back(s.at(k));
	}
	return r;
}

bool palindrome(string s)
{
	int ant=0;
	int pos=s.length()-1;
	while(ant<pos)
	{
		if((char)tolower(s.at(ant))!=(char)tolower(s.at(pos)))
		   return false;
		ant++;
		pos--;
	}
	return true;
}

int main(int argc, char **argv)
{
	string s;
	while(getline(cin,s) && s.compare("DONE")!=0)
	{
		if(palindrome(palabra(s)))
		   cout<<"You won't be eaten!"<<endl;
		else
		    cout<<"Uh oh.."<<endl;
	}
	return 0;
}

