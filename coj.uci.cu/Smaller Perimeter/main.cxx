/*  Problem:  Smaller Perimeter
 *  Code: 1678
 *  Site: coj.uci.cu
 *  Type: Ad-Hoc / BigInteger
 *  Status : Pending
 */    


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,a,b,c,s,menor=999999;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		s=a+b+c;
		if(s<menor)
		   menor=s;
	}
	cout<<menor<<endl;
	return 0;
}

