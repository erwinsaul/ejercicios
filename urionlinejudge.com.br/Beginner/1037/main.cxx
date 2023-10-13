/*  Problem: Interval
 *  Code: 1037
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	double n;
	cin>>n;
	if(n<0 && n>100.0000)
	   cout<<"Fora de intervalo"<<endl;
	else
	{
		if(n>=0.00000 && n<=25.0000000)
		   cout<<"Intervalo [0,25]"<<endl;
		else if(n>25.0000000 && n<=50.0000000)
		   cout<<"Intervalo (25,50]"<<endl;
	    else if(n>50.0000000 && n<=75.0000000)
		   cout<<"Intervalo (50,75]"<<endl;
		else if(n>75.0000000 && n<=100.0000000)
		   cout<<"Intervalo (75,100]"<<endl;
	}
	return 0;
}

