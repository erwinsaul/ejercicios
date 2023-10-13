//   Problem: Heating Main
//   Site: acm.timu.ru
//   Code:1457

#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
	double sum, a;
	int n,k;
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin>>a;
		sum+=a;
	}
	sum=sum/(double)n;
	cout.precision( 6 );
    cout << fixed << sum<<endl; 
	
	return 0;
}
