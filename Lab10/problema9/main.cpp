#include <iostream>

using namespace std;

struct ceas{
    int h, m, s;
};

void citire(ceas &a){
    cin >> a.h >> a.m >> a.s;
}

void afisare(ceas a){
    cout << a.h << " " << a.m << " " << a.s<< endl;
}

ceas timp(ceas a, ceas b){
    ceas x;
    if(a.h > b.h){
        x.h = a.h - b.h;
        x.m = a.m - b.m;
        if( x.m < 0 ){ x.m += 60; x.h--; }
        x.s = a.s - b.s;
        if( x.s < 0 ){ x.s += 60; x.m--; }
    }
    else{
        x.h = b.h - a.h;
        x.m = b.m - a.m;
        if( x.m < 0 ){ x.m += 60; x.h--; }
        x.s = b.s - a.s;
        if( x.s < 0 ){ x.s += 60; x.m--; }
    }
    return x;
}

int main(){
    ceas a, b;
    citire(a);
    citire(b);
    afisare(a);
    afisare(b);
    cout <<"Diferenta de ";
    afisare(timp(a, b));

    return 0;
}
