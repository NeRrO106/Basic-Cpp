#include <iostream>
#include <stdlib.h>

using namespace std;

struct Complex{
    double parte_reala,parte_imaginara;
};

void citire(Complex **&M,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j].parte_reala;
            cin>>M[i][j].parte_imaginara;
        }
    }
}

void cautare(Complex **M,int n, Complex &C, int l){
    int ok = 0;
    for(int i=0;i<n;i++){
        if(M[l][i].parte_reala == C.parte_reala && M[l][i].parte_imaginara == C.parte_imaginara) ok=1;
    }
    if(ok==1) cout<<"Numar gasit";
    else cout<<"Numarul nu a fost gasit";
}

int main()
{
    int n;
    cin>>n;
    Complex **M =(Complex **)calloc(n,sizeof(Complex));
    citire(M,n);
    Complex C;
    cin>>C.parte_reala>>C.parte_imaginara;
    int l;
    cin>>l;
    cautare(M,n,C,l);
    return 0;
}
