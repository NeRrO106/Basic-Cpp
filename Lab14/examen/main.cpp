#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>

using namespace std;

ofstream g("parcare.txt");

struct Masina{
    char* marca;
    int pret;
    char numar[8];

};

void citire(Masina &m){
    int pr; char nr[8], mrc[101];
    cin>>mrc>>pr>>nr;
    m.marca = (char*)malloc((strlen(mrc)+1)*sizeof(char));
    strcpy(m.marca, mrc);
    m.pret = pr;
    strcpy(m.numar,nr);
}
void scriere(Masina &m){
    g<<m.marca<<" "<<m.pret<<" "<<m.numar<<'\n';
}

void setare(Masina &m1, char marcanoua[]){
    free(m1.marca);
    m1.marca = (char*)malloc((strlen(marcanoua)+1)*sizeof(char));
    strcpy(m1.marca,marcanoua);
}

void copie(Masina &m1, Masina &m2){
    strcpy(m2.numar,m1.numar);
    m2.pret = m1.pret;
    setare(m2,m1.marca);
}

int suma(Masina** &m,int l, int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=m[l][i].pret;
    }
    return sum;
}

int main()
{
    int n;cin>>n;
    Masina** m = (Masina**)malloc(n*sizeof(Masina));
    for(int i=0;i<n;i++) m[i] = (Masina*)malloc(n*sizeof(Masina));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            citire(m[i][j]);
            scriere(m[i][j]);
        }
    }
    int l;cin>>l;cout<<suma(m,l,n)<<endl;
    Masina v[n];
    for(int i=0;i<n;i++){
        copie(m[i][i],v[i]);
        scriere(v[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((m[i][j].numar[0]=='b'||m[i][j].numar[0]=='B') && m[i][j].numar[1]>='0'&&m[i][j].numar[1]<='9') cnt++;
        }
    }
    cout<<cnt;
    g.close();
    return 0;
}
