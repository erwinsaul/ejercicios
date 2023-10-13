/* Problem: Sum of 4 Integers
 * Code: 0008
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n, t;
	while(cin>>n)
	{
		t=0;
		for(int a=0;a<=9;a++)
		{
			for(int b=0;b<=9;b++)
			{
				for(int c=0;c<=9;c++)
				{
					for(int d=0;d<=9;d++)
					{
						if((a+b+c+d)==n)
						   t++;
					}
				}
			}
		}
		cout<<t<<endl;
		
	}
	return 0;
}

