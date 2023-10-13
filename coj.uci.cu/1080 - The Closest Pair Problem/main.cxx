/*   Problem: 1080 - The Closest Pair Problem
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: string
 */

#include <bits/stdc++.h>

using namespace std;

#define EPS 1e-8

#define PI acos(-1)

#define Vector Point

struct Point

{
    double x, y;

    Point(){}

    Point(double a, double b) { x = a; y = b; }

    double mod2() { return x*x + y*y; }

    double mod()  { return sqrt(x*x + y*y); }

    double arg()  { return atan2(y, x); }

    Point ort()   { return Point(-y, x); }

    Point unit()  { double k = mod(); return Point(x/k, y/k); }

};

Point operator +(const Point &a, const Point &b) { return Point(a.x + b.x, a.y + b.y); }

Point operator -(const Point &a, const Point &b) { return Point(a.x - b.x, a.y - b.y); }

Point operator /(const Point &a, double k) { return Point(a.x/k, a.y/k); }

Point operator *(const Point &a, double k) { return Point(a.x*k, a.y*k); }

bool operator ==(const Point &a, const Point &b)

{

    return fabs(a.x - b.x) < EPS && fabs(a.y - b.y) < EPS;

}
bool operator !=(const Point &a, const Point &b)
{
    return !(a==b);
}

bool operator <(const Point &a, const Point &b)
{
    if(a.x != b.x) return a.x < b.x;
    return a.y < b.y;
}

double dist(const Point &A, const Point &B)    { return hypot(A.x - B.x, A.y - B.y); }

bool XYorder(Point P1, Point P2)

{

	if(P1.x != P2.x) return P1.x < P2.x;

	return P1.y < P2.y;

}

bool YXorder(Point P1, Point P2)

{

	if(P1.y != P2.y) return P1.y < P2.y;

	return P1.x < P2.x;

}

double closest_recursive(vector<Point> vx, vector<Point> vy)

{

	if(vx.size()==1) return 1e20;

	if(vx.size()==2) return dist(vx[0], vx[1]);

	

	Point cut = vx[vx.size()/2];

	

	vector <Point> vxL, vxR;

	for(int i=0; i<(int)vx.size(); i++)

		if(vx[i].x < cut.x || (vx[i].x == cut.x && vx[i].y <= cut.y))

			vxL.push_back(vx[i]);

		else vxR.push_back(vx[i]);

	

	vector <Point> vyL, vyR;

	for(int i=0; i<(int)vy.size(); i++)

		if(vy[i].x < cut.x || (vy[i].x == cut.x && vy[i].y <= cut.y))

			vyL.push_back(vy[i]);

		else vyR.push_back(vy[i]);

	

	double dL = closest_recursive(vxL, vyL);

	double dR = closest_recursive(vxR, vyR);

	double d = min(dL, dR);

	

	vector <Point> b;

	for(int i=0; i<(int)vy.size(); i++)

		if(abs(vy[i].x - cut.x) <= d)

			b.push_back(vy[i]);

	

	for(int i=0; i<(int)b.size(); i++)

		for(int j=i+1; j<(int)b.size() && (b[j].y - b[i].y) <= d; j++)

			d = min(d, dist(b[i], b[j]));

	

	return d;

}

double closest(vector <Point> points)

{

	vector<Point> vx = points;
	vector<Point> vy = points;

	sort(vx.begin(), vx.end(), XYorder);

	sort(vy.begin(), vy.end(), YXorder);

	

	for(int i=0; i+1<(int)vx.size(); i++)
	{
		if(vx[i] == vx[i+1])
			return 0.0;
    }
	

	return closest_recursive(vx,vy);

}

int main(int argc, char **argv)
{
	int n;
	vector<Point> v;
	Point t;
	double r;
	while(cin>>n && n)
	{
		for(int k=0;k<n;k++)
		{
			cin>>t.x;
			cin>>t.y;
			v.push_back(t);
		}
		r=closest(v);
		if(r<10000)
		  printf("%.4f\n",r);
	    else
	      cout<<"INFINITY"<<endl;
		v.clear();
	}
	
	return 0;
}

