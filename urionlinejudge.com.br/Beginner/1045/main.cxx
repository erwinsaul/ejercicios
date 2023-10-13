/*  Problem: The Greatest
 *  Code: 1045
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	int v[3];
	cin>>v[0]>>v[1]>>v[2];
	sort(v,v+3);
	int a=v[2]*v[2];
	int b=v[1]*v[1];
	int c=v[0]*v[0];
	if(v[2]>(v[1]+v[0]))
	    cout<<"NAO FORMA TRIANGULO"<<endl;
	else
	{
	 if(a==(b+c))
	    cout<<"TRIANGULO RETANGULO"<<endl;
	 if(a>(b+c))
	    cout<<"TRIANGULO OBTUSANGULO"<<endl;
	 if(a<(b+c))
	    cout<<"TRIANGULO ACUTANGULO"<<endl;
	 if(v[2]==v[1]&&v[1]==v[0])
	    cout<<"TRIANGULO EQUILATERO"<<endl;
	 if(v[2]==v[1] || v[1]==v[0] || v[2]==v[0])
	    cout<<"TRIANGULO ISOSCELES"<<endl;
	}
	return 0;
}

