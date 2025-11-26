/* Problem: Baseball Simulation
 * Code: 0103
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Estructura de Datos - Pilas
 */    


#include <iostream>
#include <stack>
using namespace std;
int main(int argc, char **argv)
{
	int t,out, score;
	cin>>t;
	stack<int> s;
	string word;
	while(t--)
	{
		out=0;
		score=0;
		while(out<3)
		{
			cin>>word;
			if(word.compare("HIT")==0)
			{
				if(s.size()==3)
				{					
					score++;
				}
				else
				{
					s.push(1);
				}
			}
			else if(word.compare("OUT")==0)
			{
				out++;
			}
			else
			{
				score+=(int)s.size()+1;
				while(!s.empty())
				 {			
					s.pop();
			     }
				
			}
		}
		cout<<score<<endl;
		while(!s.empty())
				 {			
					s.pop();
			     }
		
	}
	return 0;
}

