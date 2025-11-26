//     Site: coj.uci.cu
//     Problem:Abc 

#include <iostream>
#include <string.h>
#include <map>

using namespace std;
int main(int argc, char** argv)
{
	map<char,int> letras;
	int a,b,c, men,may,med;
	char cad[3];
	cin>>a>>b>>c;
	cin>>cad;
	may=a;
	men=a;
	if(b>may)
	   may=b;
	if(c>may)
	   may=c;
    if(b<men)
	   men=b;
	if(c<men)
	   men=c;
	med=a+b+c-men-may;
	letras['A']=men;
	letras['B']=med;
	letras['C']=may;
	cout<<letras[cad[0]]<<" "<<letras[cad[1]]<<" "<<letras[cad[2]]<<endl;
	return 0;
}
