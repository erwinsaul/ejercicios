#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n, s, b, a, s1, b1, a1, st, bt, at, sj, bj, aj;
	double ps, pb, pa;
	string nombre;
	cin>>n;
	st = 0;
	bt = 0;
	at = 0;
	sj = 0;
	bj = 0;
	aj = 0;
	while(n--){
		cin>>nombre;
		cin>>s>>b>>a;
		st = st + s;
		bt = bt + b;
		at = at + a;
		cin>>s1>>b1>>a1;
		sj = sj + s1;
		bj = bj + b1;
		aj = aj + a1;		
	}
	ps = (sj*100.0)/st;
	pb = (bj*100.0)/bt;
	pa = (aj*100.0)/at;
	printf("Pontos de Saque: %.2f %%.\n",ps);
	printf("Pontos de Bloqueio: %.2f %%.\n",pb);
	printf("Pontos de Ataque: %.2f %%.\n",pa);
	return 0;
}

