/*   Problem:  Broken Strings
 *   Code: 1840
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String
 */


#include <iostream>
#include <sstream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main(int argc, char **argv)
{
    char c;
    int t;
    string s;
    getline(cin,s);
    istringstream ss(s);
    ss>>t;
    int b,r,o,k,e,n;
    while(t--)
    {
	  b=r=o=k=e=n=0;
      while((c=getchar())!='\n')
      {
		switch(c)
		{
			case 'B':b++;break;
			case 'R':r++;break;
			case 'O':o++;break;
			case 'K':k++;break;
			case 'E':e++;break;
			case 'N':n++;break;
		}
	  }
	  if(b==r && r==o && o==k && k==e && e==n)
	      puts("No Secure");
	  else
	  	  puts("Secure");
    }	
	return 0;
}

