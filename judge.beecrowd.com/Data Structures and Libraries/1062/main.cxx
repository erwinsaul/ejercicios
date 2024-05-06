/*  Problem: Train Swapping
 *  Code: 1062
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Data
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int bubblesort(int a[], int l)
{
    int i, j;
    int t=0;
    for (i = l - 2; i >= 0; i--)
        for (j = i; j < l - 1 && a[j] > a[j + 1]; j++)
        {
            swap(a[j], a[j+1]);
            t++;
         }
    return t;
}

int main(int argc, char **argv)
{
	int t,n;
	int v[50];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int k=0;k<n;k++)
		{
			cin>>v[k];
		}
		cout<<"Optimal train swapping takes "<<bubblesort(v,n)<<" swaps."<<endl;
	}
	return 0;
}

