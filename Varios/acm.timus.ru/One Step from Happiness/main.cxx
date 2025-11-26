/*  Problem:  One Step from Happiness
 *  Code: 1493
 *  Site: acm.timus.ru
 *  Type: Ad-Hoc / Simulacion
 *  Status : Wrong Answer
 */       


#include <iostream>
#include <cmath>
using namespace std;
int Digit(int number, int digit)
{
	 double dies=10;
     return ((number / (int)pow(dies, digit)) % 10);
}

bool solve(int number)
{
   return Digit(number, 0) + Digit(number, 1) + Digit(number, 2)== Digit(number, 3) + Digit(number, 4) + Digit(number, 5);
}

int main(int argc, char **argv)
{
	int n;
	cin>>n;
	if(solve(n-1)||solve(n+1))
	   cout<<"YES";
	else
	   cout<<"NO";
	return 0;
}

