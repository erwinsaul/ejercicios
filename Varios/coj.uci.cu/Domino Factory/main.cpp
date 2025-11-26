//    Problem: Domino Factory
//    Site: coj.uci.cu  
//    Code: 1273

#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
	int t;
	unsigned int n,l,w, aux;
	cin>>t;
	while(t--)
	{
		cin>>n>>l>>w;
		n++;
		aux=n*(n + 1) / 2;
		cout<<aux*l*w<<endl;
	}
	return 0;
}
