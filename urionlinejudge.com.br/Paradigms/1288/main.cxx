/*  Problem: Destruction Cannon
 *  Code: 1288
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Paradigms
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
	int t, ans,resistencia;
	cin>>t;
	while(t--)
	{
		memset(memo, -1, sizeof memo);
		ans=0;
		cin>>N;
		for (int i = 0; i < N; i++)
           scanf("%d %d", &V[i], &W[i]);
        cin>>MW;
        cin>>resistencia;
        ans = value(0, MW);
        if(ans>=resistencia)
           puts("Missao completada com sucesso");
        else
           puts("Falha na missao");
	}
	return 0;
}

