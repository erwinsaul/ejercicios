#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char *argv[]) {
    double x1,x2,x3,x4,x5,x6,x7,x8;
    double y1,y2,y3,y4,y5,y6,y7,y8;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    cin>>x5>>y5;
    cin>>x6>>y6;
    cin>>x7>>y7;
    cin>>x8>>y8;
    double areaA = 0.5 * abs((x1 * y2 - x2 * y1) + (x2 * y3 - x3 * y2) + (x3 * y4 - x4 * y3) + (x4 * y1 - x1 * y4));
    double areaB = 0.5 * abs((x5 * y6 - x6 * y5) + (x6 * y7 - x7 * y6) + (x7 * y8 - x8 * y7) + (x8 * y5 - x5 * y8));
    
    if(areaA>areaB){
        cout<<"terreno A"<<endl;
    }
    else{
        cout<<"terreno B"<<endl;
    }
    return 0;
}