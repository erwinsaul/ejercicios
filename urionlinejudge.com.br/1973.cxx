//accepted
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	long long int n,d;
	vector<long long int> v;
	vector<long long int> estado;
	long long int suma = 0;
	cin>>n;
	
	for(long int k=0;k<n;k++){
		cin>>d;
		suma = suma + d;
		v.push_back(d);
		estado.push_back(0);
	}
	
	long long int i = 0;	
	long long int g = 0;
	long long int r = 0;
	while(i>=0&&i<n){
		if(v[i]>0){
			estado[i]=1;
			r = r + 1;
			v[i]--;
			if((v[i]+1)%2==0){
				i--;
			}
			else{
				i++;
			}
		}
		else{
			break;
		}
	}
	for(long int k=0;k<n;k++)
	{
		g = g + estado[k];
	}
	cout<<g<<" "<<suma-r<<endl;
	return 0;
}

