#include <iostream>
#include <cmath>

using namespace std;

struct nr_complex{
    double p_real;
    double p_img;
};

void citire(nr_complex &w){
    cin>>w.p_real>>w.p_img;
}
void afisare(nr_complex &w){
    cout<<w.p_real<<"."<<w.p_img<<endl;
}

void adunare(nr_complex c1, nr_complex c2, nr_complex &a){
    a.p_real = c1.p_real+c2.p_real;
    a.p_img = c1.p_img+c2.p_img;
}

void scadere(nr_complex c1, nr_complex c2, nr_complex &s){
    s.p_real = c1.p_real-c2.p_real;
    s.p_img = c1.p_img-c2.p_img;
}

void inmultire(nr_complex c1, nr_complex c2, nr_complex &p){
    p.p_real = (c1.p_real*c2.p_real-c1.p_img*c2.p_img);
    p.p_img = (c1.p_real*c2.p_real+c1.p_img*c2.p_img);
}

void modul(nr_complex&w){
    w.p_real = sqrt(w.p_real*w.p_real+w.p_img*w.p_img);
}

int main(){
    nr_complex c1,c2,a,p,s,mod;
    citire(c1);
    citire(c2);
    adunare(c1,c2,a);
    cout<<"Adunare: "<<endl;
    afisare(a);
    scadere(c1,c2,s);
    cout<<"Scadere: "<<endl;
    afisare(s);
    inmultire(c1,c2,p);
    cout<<"Produs: "<<endl;
    afisare(p);
    modul(c1);
    cout<<"Modulul lui c1: "<<endl;
    cout<<c1.p_real;
    return 0;
}
