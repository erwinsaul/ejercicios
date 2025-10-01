/* Problem: Number lengths 
 * Code: 1050
 * Site: acm.fzu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc / Math
 */     


#include <iostream>
#include <cmath>
#define ull unsigned long long
using namespace std;

 ull factorial_digits(int n)
 {
	 double p=0;
	 int i;
	 for(i=2;i<=n;i++)
	     p+=log10(i);
	 return (long)p+1;	 
 }
 
int main(int argc, char **argv)
{
    int n;
    while(cin>>n)
    {
		cout<<factorial_digits(n)<<endl;
	}	
	return 0;
}

