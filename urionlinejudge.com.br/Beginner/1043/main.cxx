/*  Problem: Triangle
 *  Code: 1043
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	float v[3], a[3];
	cin>>v[0]>>v[1]>>v[2];
	a[0]=v[0];
	a[1]=v[1];
	a[2]=v[2];
	sort(v,v+3);
	cout.precision(1);
    cout.setf(ios::fixed);   
	if(v[0]+v[1]>v[2])
	{
		cout<<"Perimetro = "<<(v[0]+v[1]+v[2])<<endl;
	}
	else
	{
		cout<<"Area = "<<((a[0]+a[1])/2.0)*a[2]<<endl;
	}
	return 0;
}

