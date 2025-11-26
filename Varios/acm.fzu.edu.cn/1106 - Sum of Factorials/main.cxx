/* Problem: Sum of Factorials 
 * Code: 1106
 * Site: acm.fzu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc / Math
 */          


#include <iostream>
#include <cstdio>
using namespace std;
int f[10];
bool isTrue(int n)
{  
  
    int sum = n;  
    int i = 9;  
    while(i>=0)
    {  
        if(sum>=f[i])
        {  
            sum -= f[i];  
            if(sum==0)  
                return true;  
        }  
        i--;  
    }  
    return false;  
  
}  

int main(int argc, char **argv)
{
	int n; 
	int t=1;
	f[0]=1;
	for(int k=1;k<10;k++)
	{
		f[k]=k*t;
		t=f[k];
	}
	
	 while(cin>>n, n>=0)  
	{
	  if(isTrue(n))  
            printf("YES\n");  
      else  
            printf("NO\n");  
	}	
	return 0;
}

