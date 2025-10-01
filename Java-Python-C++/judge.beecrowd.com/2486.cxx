#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{	
	map<string, int> m;
	int t, r, c;
	string s, texto;
	istringstream ss;
	bool f;
	m["suco de laranja"] =	120;
	m["morango fresco"] =	85;
	m["mamao"] =	85;
	m["goiaba vermelha"] =	70;
	m["manga"] =	56;
	m["laranja"] =	50;
	m["brocolis"] =	34;
	while(1)
	{
		cin>>t;
		r = 0;
		if(t==0)
			break;
		getchar();
		for(int k=0;k<t;k++)
		{
			getline(cin,s);
			ss.str(s);
			ss>>c;
			texto = "";
			f = false;
			while(ss>>s)
			{
				if(f)
					texto = texto + " ";
				f = true;
				texto = texto + s;				
				
			}			
			r = r + c*m[texto];			
			ss.clear();
		}
		if(r<110)
			cout<<"Mais "<<(110 - r)<<" mg"<<endl;
		else if(r>130)
			cout<<"Menos "<<(r-130)<<" mg"<<endl;
		else
			cout<<r<<" mg"<<endl;		
	}	
	return 0;
}

