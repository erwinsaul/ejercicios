/* problem:  Classifying Triangles
 * code: 2799
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	 int a,b,c;
	 cin>>a>>b>>c;
	 if(a<=0 || b<=0 || c<=0)
	   cout<<"Error";
	 else if ((a+b+c)!=180)
	   cout<<"Error";
	 else if(a==60 && b==60 && c==60)
	 {
		 cout<<"Equilateral";
	 }
	 else if((a==b) || (b==c) || (a==c))
	     cout<<"Isosceles";
	 else if(a!=b && a!=c && b!=c)
	 {
		 cout<<"Scalene";
	 }
	 else
	 {
		 cout<<"Error";
	 }
	return 0;
}

