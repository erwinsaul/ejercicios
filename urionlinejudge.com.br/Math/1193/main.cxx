/*  Problem: Base Conversion
 *  Code: 1193
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#define MAXDGT 200 
using namespace std;
char num[MAXDGT];


void revstr(char *str)
{
	int i=0,l=strlen(str);
	while(i<l)
    swap(str[i++],str[--l]);
}
char *itob(long int n,int b=10)
{
	int j,sign,i=0;
	if( (sign=n) <0 )
    n= -n;
	do 
	{
		j=n%b;
		num[i++]=(j<10) ? (j+'0'): ('A'+j-10);
	}while((n/=b)!=0);
	if(sign < 0) 
    num[i++]='-';
	num[i]='\0';
	revstr(num);
	return num;
}
int main(int argc, char **argv)
{
	int n;
	string s,c;
	cin>>n;		
	long int f;
	for(int k=1;k<=n;k++)
	{
		cin>>s>>c;
		cout<<"Case "<<k<<":"<<endl;
		stringstream ss(s);
		ss>>f;
		if(c.compare("bin")==0)
		{
			cout<<itob(f,10)<<" dec"<<endl;
			cout<<itob(f,16)<<" hex"<<endl;
		}
		if(c.compare("dec")==0)
		{
			cout<<itob(f,16)<<" hex"<<endl;
			cout<<itob(f,2)<<" bin"<<endl;
		}		
		if(c.compare("hex")==0)
		{
			s="0x"+s;
			stringstream ss(s);
		    ss>>f;
		    cout<<itob(f,2)<<" bin"<<endl;
			cout<<itob(f,10)<<" dec"<<endl;
		}
	}	
	return 0;
}

