/* Problem: Carvans
 * Code: Cook26-Carvans
 * Site: codechef.com
 * Status: Wrong Answer
 * Type: Simulacion
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int t, n, v,s,ant;
    cin>>t;  
    while(t--)
    {
		cin>>n;
		s=0;
		ant=9999999;
		while(n--)
		{
			cin>>v;
			if(ant>=v)
			{
				s++;
			}
			ant=v;
		}
		cout<<s<<endl;
	}	
	return 0;
}

