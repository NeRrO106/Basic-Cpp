#include <iostream>
#include <cstring>

using namespace std;

enum Categorie{
    aliment,imbracaminte,jucarie
};

struct Produs{
    unsigned int pret: 10;
    char *marca;
    Categorie categ;
};

void citire(Produs &p){
    unsigned int aux;
    cout<<"Citire pret produs "<<endl;
    cin>>aux;
    p.pret = aux;
    char aux2[100];
    cout<<"Citire marca produs "<<endl;
    cin>>aux2;
    int l = strlen(aux2);
    p.marca=(char*)malloc(sizeof(char*)*(l+1));
    strcpy(p.marca,aux2);

    int cat;
    cout<<"Citire categorie produs "<<endl;
    cin>>cat;
    p.categ = (Categorie )cat;
}

void afisare(Produs p){
    cout<<p.pret<<endl<<p.marca<<endl<<p.categ<<endl;
}

void schimbpret(Produs &p, unsigned int aux){
    p.pret = aux;
}

void schimbmarca(Produs &p, char* aux){
    free(p.marca);
    int l = strlen(aux);
    p.marca=(char*)malloc(sizeof(char*)*(l+1));
    strcpy(p.marca,aux);
}

void schimbcateg(Produs &p, int cat){
    p.categ = (Categorie)cat;
}

int main()
{
    Produs a;
    unsigned int pretn;
    char* marcan;
    int categorian;
    cout<<"Citire produs "<<endl;
    citire(a);
    cout<<"Afisare produs "<<endl;
    afisare(a);
    cout<<"Noul pret "<<endl;cin>>pretn;
    schimbpret(a,pretn);
    cout<<"Noua marca "<<endl;cin>>marcan;
    schimbmarca(a,marcan);
    cout<<"Noua categorie "<<endl;cin>>categorian;
    schimbcateg(a,categorian);
    afisare(a);
    int numarproduse;
    cin>>numarproduse;
    Produs *v = (Produs*)malloc(numarproduse*sizeof(Produs));
    for(int i=0;i<numarproduse;i++){
        citire(v[i]);
    }
    for(int i = 0; i<numarproduse;i++){
        for(int j=0;j<numarproduse;j++){
            if(strcmp(v[i].marca,v[j].marca)<0) swap(v[i],v[j]);
        }
    }
    for(int i=0;i<numarproduse;i++){
        schimbpret(v[i],v[i].pret*0.9);
    }
    Produs *q = (Produs*)malloc(numarproduse*sizeof(Produs));
    for(int j=0;j<numarproduse;j++){
        schimbpret(q[j],v[j].pret);
        schimbmarca(q[j],v[j].marca);
        schimbcateg(q[j],v[j].categ);
    }
    for(int i=0;i<numarproduse;i++){
        afisare(v[i]);
    }
    return 0;
}
