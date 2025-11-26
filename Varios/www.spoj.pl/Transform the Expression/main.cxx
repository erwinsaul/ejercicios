/* Problem: Transform the Expression
 * Code: ONP
 * Site: www.spoj.pl
 * Status: Accepted / Revisar
 */ 
     


#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool signo(char c)
{
	return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}

bool numero(char c)
{
	return (c>='a' && c<='z');
}

int prioridad(char c)
{
	switch (c)
	{
		case '+': return 1;break;
		case '-': return 2;break;
		case '*': return 3;break;
		case '/': return 4;break;
		case '^': return 5;break;		
	}
	return 0;
}

int main(int argc, char **argv)
{
    stack<char> pila;
    string	s;
    int t;
    cin>>t;
    while(t--)
    {
		cin>>s;
		for(int k=0;k<(int)s.length();k++)
		{
			if(numero(s.at(k)))
			{
				cout<<s.at(k);
			}
			
			else
			{
				if(signo(s.at(k)))
				{
					while(!pila.empty() && prioridad(pila.top())>=prioridad(s.at(k)))
					{
						cout<<s.at(k)<<endl;
						cout<<pila.top();
						pila.pop();
					}
					pila.push(s.at(k));
				}
				else if(s.at(k)=='(')
				{
					pila.push(s.at(k));
				}
				else if(s.at(k)==')')
				{
					while(!pila.empty() && pila.top()!='(')
					{
						cout<<pila.top();
						pila.pop();
					}
					pila.pop();
				}
			   
			}
			
		}
		while(!pila.empty())
	    {
				cout<<pila.top();
				pila.pop();
		}
		cout<<endl;
	}
	return 0;
}

