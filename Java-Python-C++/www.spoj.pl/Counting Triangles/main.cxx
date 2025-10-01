 /*  Problem: Counting Triangles
 *   Code:	TRICOUNT	
 *   Site: spoj.pl
 *   Status: Accepted
 */
    #include <iostream>
    #include <math.h>
     
    using namespace std;
     
    unsigned long long int num(unsigned long long int n)
    {
        
        if(n%2==0)
        
			return (n*(n+2)*(2*n+1))/8;
	  return ((n*(n+2)*(2*n+1))-1)/8;
	}
     
    int main(int argc, char **argv)
    {
     long t;
     unsigned long long int n;
     cin>>t;
     while(t--)
     {
       cin>>n;
       cout<<num(n)<<endl;
     }
    return 0;
    } 
