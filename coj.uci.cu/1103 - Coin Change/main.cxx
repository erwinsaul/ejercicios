/*   Problem:  1103 - Coin Change
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: string
 */


#include <bits/stdc++.h>

using namespace std;

int N = 5, V, coinValue[5] = {1, 5, 10, 25, 50}, memo[6][7500];

int ways(int type, int value) {
  if (value == 0)              return 1;
  if (value < 0 || type == N)  return 0;
  if (memo[type][value] != -1) return memo[type][value];
  return memo[type][value] = ways(type + 1, value) + ways(type, value - coinValue[type]);
}

int main(int argc, char **argv)
{
	int n;
	memset(memo, -1, sizeof memo); 
    while(cin>>n)
    {
	  printf("%d\n", ways(0,n));
	}
    
	return 0;
}

