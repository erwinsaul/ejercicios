/*  Problem: Game Time with Minutes
 *  Code: 1047
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int h1,m1,h2,m2;
	int h,m,hf;
	cin>>h1>>m1>>h2>>m2;
    if(h1>=h2)
    {
		h=(24-h1)+h2;		
		
	}
	else 
	{
		h=h2-h1;
	}
	if(m1>m2)
	{
		m=(60-m1)+m2;
		h--;
	}
	else
	   m=m2-m1;   
	   	
	hf=((h*60)+m)/60;
	m=((h*60)+m)%60;
	cout<<"O JOGO DUROU "<<hf<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
	return 0;
}

