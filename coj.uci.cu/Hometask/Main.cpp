//   Problem: Hometask
//   Site:coj.uci.cu   
//   Code: 1268


#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	unsigned long long int n, k, res=1, c=0;
			
	cin>>n;
	c=n*n;	
	
	for(k=1;k<=n;k++)  
	{
	    res=res*(k%c);
	}
	res=(res%c);
	cout<<res<<endl;
	if(res==0)
	    cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl;
	    
	return 0;
}
