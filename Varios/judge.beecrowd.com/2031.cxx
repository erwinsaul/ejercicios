#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	string a, b;
	while(n--){
		cin>>a>>b;
		if(a=="ataque"){
			if(b=="pedra"){
				cout<<"Jogador 1 venceu"<<endl;
			}
			else if(b=="papel"){
				cout<<"Jogador 1 venceu"<<endl;
			}
			else{
				cout<<"Aniquilacao mutua"<<endl;
			}
		}
		else if(a=="pedra"){
			if(b=="pedra"){
				cout<<"Sem ganhador"<<endl;
			}
			else if(b=="papel"){
				cout<<"Jogador 1 venceu"<<endl;
			}
			else{
				cout<<"Jogador 2 venceu"<<endl;
			}
		}
		else{
			if(b=="pedra"){
				cout<<"Jogador 2 venceu"<<endl;
			}
			else if(b=="papel"){
				cout<<"Ambos venceram"<<endl;
			}
			else{
				cout<<"Jogador 2 venceu"<<endl;
			}
		}
	}
	return 0;
}

