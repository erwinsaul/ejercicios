//   Problem: Skew Binary

//   Site: coj.uci.cu   
//   Code: 1189

#include <iostream>
#include <string>
#include <math.h>

using namespace std;
long solve(string c)
{
	int tam=c.length(),k;
	long sol=0;
	//cout<<"tam"<<tam<<endl;
	for(k=0;k<tam;k++)
	{
		//cout<<c[k]-'0'<<" "<<(long)pow(2,tam-k)<<endl;
		sol=sol+((c[k]-'0')*(long)(pow(2,tam-k)-1));
	}
	return sol;
}

int main(int argc, char** argv)
{
	string n;
	while(1)
	{
		cin>>n;
		if(n[0]=='0')
		   break;
		cout<<solve(n)<<endl;
	}
	return 0;
}
