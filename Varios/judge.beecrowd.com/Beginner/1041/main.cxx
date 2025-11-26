/*  Problem: Coordinates of a Point 
 *  Code: 1041
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	double x, y;
	cin>>x>>y;
	if(x==0.0 && y==0.0)
	   cout<<"Origem"<<endl;
	else if(x==0.0 && y!=0.0)
	   cout<<"Eixo Y"<<endl;
	else if(y==0 && x!=0.0)
	   cout<<"Eixo X"<<endl;
	else if(x>0.0 && y >0.0)
	   cout<<"Q1"<<endl;
	else if(x<0.0 && y>0.0)
	   cout<<"Q2"<<endl;
	else if(x<0.0 && y <0.0)
	   cout<<"Q3"<<endl;
    else if(x>0.0 && y < 0.0)
	   cout<<"Q4"<<endl;
	
	
	return 0;
}

