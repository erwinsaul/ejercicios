/*  Problem: Positives and Average
 *  Code: 1064
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int p=0;
	double n;
	double sum=0.0;
	for(int k=0;k<6;k++)
	{
		cin>>n;
		if(n>0.0)
		{
		  p++;
		  sum=sum+n;
		}
	}
	cout<<p<<" valores positivos"<<endl;
	cout.precision(1);
    cout.setf(ios::fixed);
	cout<<sum/(double)p<<endl;
	return 0;
}

