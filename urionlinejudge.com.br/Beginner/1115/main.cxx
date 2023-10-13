/*  Problem: Quadrant
 *  Code: 1115
 *  Site: www.urionlinejudge.com.br
 *  Status: pending
 *  Type: Beginner - 1
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int x,y;
	while(1)
	{
		cin>>x>>y;
		if(x==0 || y==0)
		   break;
	    if(x>0&&y>0)
	      cout<<"primeiro"<<endl;
	    if(x>0&&y<0)
	      cout<<"quarto"<<endl;  
	    if(x<0&&y<0)
	      cout<<"terceiro"<<endl;     
	    if(x<0&&y>0)
	      cout<<"segundo"<<endl;     
	}
	return 0;
}

