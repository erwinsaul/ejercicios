/* Problem: A Point in a Triangle
 * Code: 0012
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Geometria
 */


#include <iostream>

using namespace std;

struct Point
{
	double x, y;
	Point(){}
	Point(double a, double b)
	{
		x=a;
		y=b;
	}
};

float Sign(Point p1, Point p2, Point p3)
{
  return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

bool IsPointInTri(Point pt, Point v1, Point v2, Point v3)
{
  bool b1, b2, b3;

  b1 = Sign(pt, v1, v2) < 0.0f;
  b2 = Sign(pt, v2, v3) < 0.0f;
  b3 = Sign(pt, v3, v1) < 0.0f;

  return ((b1 == b2) && (b2 == b3));
}

int main(int argc, char **argv)
{
	Point v1,v2,v3,p;
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp)
	{
		v1.x=x1;
		v1.y=y1;
		v2.x=x2;
		v2.y=y2;
		v3.x=x3;
		v3.y=y3;
		p.x=xp;
		p.y=yp;
		if(IsPointInTri(p,v1,v2,v3))
		   cout<<"YES"<<endl;
		else
		   cout<<"NO"<<endl;
	}
	
	return 0;
}

