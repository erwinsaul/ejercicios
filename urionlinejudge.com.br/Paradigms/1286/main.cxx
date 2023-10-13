/*  Problem: Motoboy
 *  Code: 1286
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Paradigms - knapsack
 */

#include <algorithm>
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

#define MAX_N 1010
#define MAX_W 100

int N, MW, V[MAX_N], W[MAX_N], memo[MAX_N][MAX_W];

int value(int id, int w) {
  if (id == N || w == 0) return 0;
  if (memo[id][w] != -1) return memo[id][w];
  if (W[id] > w)         return memo[id][w] = value(id + 1, w);
  return memo[id][w] = max(value(id + 1, w), V[id] + value(id + 1, w - W[id]));
}

int main(int argc, char **argv)
{
	int ans;
	while(1)
	{
		memset(memo, -1, sizeof memo);		
		cin>>N;
		if(N==0)
		  break;
		cin>>MW;
		for (int i = 0; i < N; i++)
           scanf("%d %d", &V[i], &W[i]);
        ans=value(0,MW);
        cout<<ans<<" min."<<endl;
	}
	return 0;
}

