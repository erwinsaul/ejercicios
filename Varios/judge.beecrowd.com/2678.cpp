#include<iostream>
#include<cctype>

using namespace std;

bool is_number(char c){
    if(c>='0' && c<='9'){
        return true;
    }
    return false;
}

char buscar(char c){
    c = (char)toupper(c);
    if(c=='*' or c=='#'){
        return c;
    }
    if( c=='A' || c=='B' || c=='C'){
        return '2';
    }

    if( c=='D' || c=='E' || c=='F'){
        return '3';
    }

    if( c=='G' || c=='H' || c=='I'){
        return '4';
    }

    if( c=='J' || c=='K' || c=='L'){
        return '5';
    }

    if( c=='M' || c=='N' || c=='O'){
        return '6';
    }

    if( c=='T' || c=='U' || c=='V'){
        return '8';
    }

    if( c=='P' || c=='Q' || c=='R' || c=='S'){
        return '7';
    }

    if( c=='W' || c=='X' || c=='Y' || c=='Z'){
        return '9';
    }
    return '0';
}


int main(){
    string s, r;
    char c;
    while(getline(cin,s)){
        r = "";
        for(int i=0;i<(int)s.length();i++){
            if(is_number( s.at(i) )){
                r.push_back( s.at(i) );
            }
            else{
                if(buscar(s.at(i))!='0'){
                    r.push_back( buscar(s.at(i)) );
                }                
            }
        }
        cout<<r<<endl;
    }
    return 0;
}