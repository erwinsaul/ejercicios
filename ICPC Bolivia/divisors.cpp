//Accepted
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long sum=0;
		for(int i=1;i<=sqrt(n);i++)
		{			
			if(n%i==0){
				if(i%k!=0){
					sum = sum + i;
				}				
				if(i!=((n/i))&&(n/i)%k!=0)
					sum = sum + (n/i);
			}
		}
		cout<<sum<<endl;
    }
    return 0;
}