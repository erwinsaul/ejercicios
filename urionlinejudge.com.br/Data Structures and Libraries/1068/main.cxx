/*  Problem: Parenthesis Balance I
 *  Code: 1068
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Data Structures and Libraries
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main(int argc, char **argv)
{
	stack<char> st;
	string s;
	bool flag;
	while(getline(cin,s))
	{
		flag=true;
		for(int k=0;k<(int)s.length();k++)
		{
			if(s.at(k)=='(')
			  st.push(s.at(k));
			if(s.at(k)==')')
			{
				if(st.empty())
				{
					flag=false;
					break;
				}
				else
				   st.pop();
			}
		}
		if(st.empty() && flag )
		   puts("correct");
		else
		   puts("incorrect");
		while(!st.empty()) st.pop();
	}
	return 0;
}

