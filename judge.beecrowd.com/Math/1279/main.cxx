/*  Problem: Leap Year or Not Leap Year and …
 *  Code: 1279
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Math - 2
 */
 
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool is_bisiesto(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
       return true;
    }
    else
    {
       return false;
    }
}
int main(int argc, char **argv)
{
	int n;
	bool b,h,u;
	while(cin>>n)
	{
		b=false;
		h=false;
		u=false;
		if(is_bisiesto(n))
		{
		   b=true;			   
		   if(n%55==0)
		      u=true;
		}
		if(n%15==0)
		   h=true;
        if(b)
          puts("This is leap year.");
        if(h)
          puts("This is huluculu festival year.");        
        if(u)
          puts("This is bulukulu festival year.");  
        if(!b&&!h&&!u)  
           puts("This is an ordinary year.");     
        
        putchar(10);
	}
	return 0;
}

