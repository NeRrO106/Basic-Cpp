#include <iostream>

using namespace std;

struct Produs
{ char cod[6];
   int pret;
};

int fsize(FILE *fis){
    fseek(fis,0,SEEK_END);
    int sz = ftell(fis);
    fseek(fis,0,SEEK_SET);
    return sz;
}

void sortare(Produs *p, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i].pret>p[j].pret){
                swap(p[j],p[i]);
            }
            else if(p[i].cod>p[j].cod) swap(p[j],p[i]);
        }
    }
}

int main(){
    FILE *q = fopen("produse.dat","wb");
    int n;
    cin>>n;
    Produs *p = (Produs*)malloc(n*sizeof(Produs));
    for(int i=0;i<n;i++){
        cin>>p[i].cod;
        cin>>p[i].pret;
    }
    fwrite(&p,sizeof(Produs),n,q);
    fclose(q);

    FILE *f = fopen("produse.dat","rb");
    Produs *g = (Produs*)malloc(n*sizeof(Produs));
    int nrinreg = fsize(f)/sizeof(Produs);
    fclose(f);
    sortare(g,nrinreg);

    FILE *f2 = fopen("pretmare.txt","wt);
    for(int i=0;i<inreg;i++){
        if(g[i].pret>100) fwrite(&q[i],sizeof(Produs),1,f2);
    }
    fclose(f2);
    return 0;
}
