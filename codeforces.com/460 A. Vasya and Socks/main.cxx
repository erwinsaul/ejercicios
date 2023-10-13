/* problem: A. Vasya and Socks
 * code: 460
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n, m, d;
    cin>>n>>m;
    d=1;
    while(1)
    {		
		n--;		
		if(n==0)
		{
			cout<<d<<endl;
			break;
		}
		d++;		
		if(d%m==0)
		{
			n++;
		}
	}	
	return 0;
}

