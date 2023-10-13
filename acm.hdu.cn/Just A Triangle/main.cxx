/* Problem: Just A Triangle
 * Code: 20
 * Site: acm.hdu.edu.cn
 * Status: Pending
 * Type: Ad-Hoc - Math / Geometria 
 */


#include <iostream>
#include <algorithm>
using namespace std;

bool is_rectangle(int a, int b, int c)
{
	return ((a*a)+(b*b))==(c*c);
}

bool is_isosceles(int a, int b, int c)
{
	if(a==b || a==c || b==c)
	  return true;
    return false;
     
}
int main(int argc, char **argv)
{
	int t, v[3];
	cin>>t;
	while(t--)
	{
		cin>>v[0]>>v[1]>>v[2];
		sort(v,v+3);
		if(is_rectangle(v[0], v[1], v[2]))
		   cout<<"good"<<endl;
		else if(is_isosceles(v[0], v[1], v[2]))
		   cout<<"perfect"<<endl;
		else
		   cout<<"just a triangle"<<endl;
		
	}
	
	return 0;
}

