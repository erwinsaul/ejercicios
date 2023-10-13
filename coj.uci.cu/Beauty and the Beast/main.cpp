/*   Problem: Beauty and the Beast
 *   Code: 1616
 *   Site: coj.uci.cu
 *   Status: Accepted
 */


#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;
int main(int argc, char** argv)
{
	string c="";
	while(cin>>c)
	{
		  string str1=c.substr (0,2); // "generalities"
          string str2=c.substr (3,4); // "generalities" 
		  int a=(str1.at(0)-48)*10+(str1.at(1)-48);
		  int b=(str2.at(0)-48)*10+(str2.at(1)-48);
		  a=a>12?a-12:a;
		  float h=(float)(a*30+b*0.5);
		  float m=b*6;
		  h=h>=360?h-360:h; 
		  printf("%.1f %.1f\n",h,m);
		  
		  
	}
	return 0;
}
