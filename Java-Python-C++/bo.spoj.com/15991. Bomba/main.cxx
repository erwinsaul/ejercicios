/*  Problem: 15991. Bomba
 *  Site: bo.spoj.com
 *  Status: Pending
 *  Type: String 
 */
#include <bits/stdc++.h>

using namespace std;

char ady[10][10];
bool visitado[10][10];
int xf,yf;

struct Estado{
    int x;  // Fila del estado
    int y;  // Columna del estado
    int d;  // Distancia del estado
    Estado(int x1 , int y1 , int d1) : x(x1), y(y1), d(d1){}  // Constructor
};

int BFSe(int x , int y, int h, int w)
{   //coordenadas de inicial "I" y dimensiones de laberinto

    Estado inicial(x,y,0) ; //Estado inicial, distancia = 0
    queue<Estado> Q;   //Cola de todos los posibles Estados por los que se pase para llegar al destino

    Q.push(inicial); //Insertamos el estado inicial en la Cola.
    memset(visitado, false, sizeof(visitado)); //marcamos como no visitado
    int dx[4] = {0, 0, 1, -1 };  //incremento en coordenada x
    int dy[4] = {1, -1, 0, 0 };  //incremento en coordanada y

    while( !Q.empty() )
    {                  //Mientras cola no este vacia
       Estado actual = Q.front();         //Obtengo de la cola el estado actual, en un comienzo será el inicial
       Q.pop();                           //Saco el elemento de la cola       
       if( ady[actual.x][actual.y]== 'e')
       { //Si se llego al destino (punto final)		   
         return actual.d;                 //Retornamos distancia recorrida hasta ese momento
       }
       visitado[actual.x][actual.y]=true; //Marco como visitado dicho estado para no volver a recorrerlo
       for( int i = 0; i < 4; i++)
       {       //Recorremos hasta 4 porque tenemos 4 posibles adyacentes
          int nx = dx[i] + actual.x;      //nx y ny tendran la coordenada adyacente
          int ny = dy[i] + actual.y;      //ejemplo en i=0 y actual (3,4) -> 3+dx[0]=3+0=3, 4+dy[0]=4+1=5, nueva coordenada (3,5)
          
          //aqui comprobamos que la coordenada adyacente no sobrepase las dimensiones del laberinto
          //ademas comprobamos que no sea pared "#" y no este visitado
          
          if(nx>=0 && nx<h && ny>=0 && ny<w && ady[nx][ny]!='x' && !visitado[nx][ny])
          {
             Estado adyacente(nx, ny, actual.d+1);  //Creamos estado adyacente aumento en 1 la distancia recorrida
             Q.push(adyacente);                     //Agregamos adyacente a la cola
          }
       }

    }
    return -1;
}

int BFSk(int x , int y, int h, int w)
{   //coordenadas de inicial "I" y dimensiones de laberinto

    Estado inicial(x,y,0) ; //Estado inicial, distancia = 0
    queue<Estado> Q;   //Cola de todos los posibles Estados por los que se pase para llegar al destino

    Q.push(inicial); //Insertamos el estado inicial en la Cola.
    memset(visitado, false, sizeof(visitado)); //marcamos como no visitado
    int dx[4] = {0, 0, 1, -1 };  //incremento en coordenada x
    int dy[4] = {1, -1, 0, 0 };  //incremento en coordanada y

    while( !Q.empty() )
    {                  //Mientras cola no este vacia
       Estado actual = Q.front();         //Obtengo de la cola el estado actual, en un comienzo será el inicial
       Q.pop();                           //Saco el elemento de la cola       
       if( ady[actual.x][actual.y]== 'k')
       { //Si se llego al destino (punto final)		
		  xf=actual.x;
		  yf=actual.y;   
         return actual.d;                 //Retornamos distancia recorrida hasta ese momento
       }
       visitado[actual.x][actual.y]=true; //Marco como visitado dicho estado para no volver a recorrerlo
       for( int i = 0; i < 4; i++)
       {       //Recorremos hasta 4 porque tenemos 4 posibles adyacentes
          int nx = dx[i] + actual.x;      //nx y ny tendran la coordenada adyacente
          int ny = dy[i] + actual.y;      //ejemplo en i=0 y actual (3,4) -> 3+dx[0]=3+0=3, 4+dy[0]=4+1=5, nueva coordenada (3,5)
          
          //aqui comprobamos que la coordenada adyacente no sobrepase las dimensiones del laberinto
          //ademas comprobamos que no sea pared "#" y no este visitado
          
          if(nx>=0 && nx<h && ny>=0 && ny<w && ady[nx][ny]!='x' && !visitado[nx][ny])
          {
             Estado adyacente(nx, ny, actual.d+1);  //Creamos estado adyacente aumento en 1 la distancia recorrida
             Q.push(adyacente);                     //Agregamos adyacente a la cola
          }
       }

    }
    return -1;
}

int main(int argc, char **argv)
{	
	for(int k=0;k<10;k++)
	{
		for(int j=0;j<10;j++)
		{
		  cin>>ady[k][j];
		  if(ady[k][j]=='m')
		  {
		    xf=k;
		    yf=j;
		  }
	    }
	}

	int r=BFSk(xf,yf,10,10);	
	r=r+BFSe(xf,yf,10,10);
	cout<<r<<endl;	
	return 0;
}

