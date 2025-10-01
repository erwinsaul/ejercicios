#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	string u[]={"","I","II","III","IV","V", "VI", "VII", "VIII", "IX"};
	string d[]={"","X","XX","XXX","XL","L", "LX", "LXX", "LXXX", "XC"};
	string c[]={"","C","CC","CCC","CD","D", "DC", "DCC", "DCCC", "CM"};
	int n;
	cin>>n;
	int a,b;
	a = n / 100;
	n = n % 100;
	b = n / 10;
	n = n % 10;
	cout<<c[a]<<d[b]<<u[n]<<endl;
	return 0;
}

