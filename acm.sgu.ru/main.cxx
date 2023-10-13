/* Problem: Andrew's Troubles 
 * Code: 276
 * Site: http://acm.sgu.ru
 * Status: Pending
 * */        


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	int s, p;
	cin>>s>>p;
	int t=(p-s);
	if(t<=0)
	   cout<<"0";
	else if(t>0&&t<=60)
	   cout<<"1";   
	else if(t>60&&t<=5*60)
	   cout<<"2";
	else if(t>5*60&&t<15*60)
	   cout<<"3";
	else if(t>=30*60)
	   cout<<"4";
	return 0;
}

