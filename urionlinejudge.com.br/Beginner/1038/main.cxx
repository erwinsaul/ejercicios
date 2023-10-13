/*  Problem: Snack
 *  Code: 1038
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x,y;
	double total=0.0;
	cin>>x>>y;
	switch(x)
	{
		case 1:
		{
			total=y*4.00;
			break;
		}
		case 2:
		{
			total=y*4.50;
			break;
		}
		case 3:
		{
			total=y*5.00;
			break;
		}
		case 4:
		{
			total=y*2.00;
			break;
		}
		case 5:
		{
			total=y*1.50;
			break;			
		}	
	}
	cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"Total: R$ "<<total<<endl;
	return 0;
}

