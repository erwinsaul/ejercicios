/*  Problem: Flavious Josephus legend
 *  Code: 1030
 *  Site: www.urionlinejudge.com.br
 *  Status: Acceptado
 *  Type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int josephus(int n, int k, int startingPoint)
{
        if(n == 1)
                return 1;
        int newSp = (startingPoint + k - 2) % n + 1;

        int survivor = josephus(n - 1, k, newSp);
        if (survivor < newSp) {
                return survivor;
        } else
                return survivor + 1;
}

int jos(int n, int k)
{
      return josephus(n, k, 1);
}



int main(int argc, char **argv)
{
    int t,n,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
	  cin>>n>>k;
	  printf("Case %d: %d\n",i,jos(n,k));
	}    	
	return 0;
}

