/*  Problem: Infix to Posfix
 *  Code: 1077
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Data
 */

#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

int precedencia(char c)
{
	switch(c)
	{
		case '^': {return 3;break;}
		case '*': case'/': {return 2; break;}
		case '+': case'-': {return 1; break;}
		default : {return 0; break;}		
	}
}

bool is_op(char c)
{
	if(c=='^' || c=='*' || c=='/' || c=='+' || c=='-' )
	   return true;
	   
	return false;
}

string post(string s)
{
	string r;
	char c;
	stack<char> op;
	for(int k=0;k<(int)s.length();k++)
	{
	  c=s.at(k);
	  if(!is_op(c) && c!='(' && c!=')')	
	  {
		  r.push_back(c);
	  }
	  else if(c=='(')
	  {
			  op.push(c);
	  }
	  else if(is_op(c))
	  {
		  while(!op.empty() && (precedencia(op.top())>=precedencia(c)))
		  {
			  r.push_back(op.top());
			  op.pop();
		  }
		  op.push(c);
	  }
	  else if(c==')')
	  {
		  while(!op.empty() && op.top()!='(')
		  {
			  r.push_back(op.top());
			  op.pop();
		  }
		  op.pop();
	  }	  
	  
	}
	while(!op.empty())
	{
		r.push_back(op.top());
		op.pop();
	}	
	return r;
}

int main(int argc, char **argv)
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		cout<<post(s)<<endl;
	}
	return 0;
}

