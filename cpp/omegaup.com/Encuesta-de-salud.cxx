#include <iostream>
#include <iomanip>

using namespace std;

struct Persona{
    int id;
    string nombre;
    double peso;
    double altura;

    double calcularIMC(){
        return peso / (altura * altura);
    }
};

int main(){
    int t;
    cin >> t;
    Persona v[t];
    for(int i = 0; i < t; i++){
        Persona p;
        cin >> p.id;
        cin.ignore();
        getline(cin, p.nombre);        
        cin >> p.peso;
        cin >> p.altura;
        v[i] = p;
    }

    for(int i = t-1; i>=0; i--){
        double imc = v[i].calcularIMC();
        cout << v[i].id << " " << v[i].nombre << " ";
        cout<< fixed << setprecision(1) << imc << endl;
    }
    return 0;
}