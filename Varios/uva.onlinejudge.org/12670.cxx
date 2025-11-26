#include<iostream>

using namespace std;

//funcion para contar la cantidad de 1s hasta n
long long contar(long long n){
    long long r=0, c=0;
    //trataremos de contar todos los 1 mas representativos 
    //hasta n 60 bits porque 10^16 es menos de 64 bits
    for(long long i=60;i>=0;i--){
        //buscamos el bit menos significativo hacia la derecha
        //si el bit esta encendido
        if((n>>i)&1){            
            //tenemos un 1 entonces podemos buscar otros unos a partir de aqui
            //tengo que calcular si no estoy en el ultimo bit
            if(i>0){
                //voy contando los 1 desde este punto hacia la derecha
                r = r + i*(1ll<<(i-1));
            }

            //aumentare los 1 que hay antes de este punto
            r = r + c*(1ll<<i);
            //queremos saber cuantos 1 tenemos antes que esta posicion
            //si tengo un 1 me servira para calcular cuantos 1 tengo a partir de ahi
            //segun la posicion
            c = c + 1;
        }

    }
    return r;
}

int main(){
    long long a, b;
    while(cin>>a>>b){                
        cout<<contar(b+1)-contar(a)<<endl;
    }
    return 0;
}