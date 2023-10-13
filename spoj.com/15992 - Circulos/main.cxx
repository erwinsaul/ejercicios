/* problem: Circulos
 * code: 15992
 * site: bo.spoj.com
 * status: Accepted
 */
#include <bits/stdc++.h>
#include <stdint.h>

using namespace std;

struct Point
{
  int x, y;
  Point(int a, int b) { x = a; y = b; }
};

uint64_t abs(uint64_t x)
{
	if(x<0)
	  return -x;
	return x;
}

uint64_t gcd(uint64_t x, uint64_t y)
{
	return y?gcd(y, x%y):abs(x);
}

string radio(Point a, Point b, Point c)
{
	string s1,s2;
	uint64_t den;
	uint64_t num;	
	uint64_t g;
	den=((b.x - a.x)*(b.x - a.x)+(b.y-a.y)*(b.y-a.y));
	den=den*((b.x - c.x)*(b.x - c.x)+(b.y-c.y)*(b.y-c.y));
	den=den*((c.x - a.x)*(c.x - a.x)+(c.y-a.y)*(c.y-a.y));
	num= 2*abs(a.x*b.y + b.x*c.y + c.x*a.y - a.x*c.y - b.x*a.y - c.x*b.y);
	num=num*num;
	g=gcd(num,den);
	num = num / g;
	den = den / g;
	stringstream ss;
	ss<<num;
	s1 = ss.str();
	ss.clear();
	ss<<den;
	s2 = ss.str();
	return s1+"/"+s2;	
}

int main(int argc, char **argv)
{
	int n, x1,x2,x3,y1,y2,y3;
	map<string, int> m;
	string s;
	int mayor = INT_MIN;
	cin>>n;
	while(n--)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		Point a(x1,y1);
		Point b(x2,y2);
        Point c(x3,y3);
        s=radio(a,b,c);
        //cout<<s<<endl;
        m[s]++;
        mayor = max(m[s], mayor);
	}
	cout<<mayor;
	return 0;
}

