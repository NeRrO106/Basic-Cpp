#include <iostream>
#include <stdlib.h>

using namespace std;

struct Cutie{
    char tip[20];
    int v[3];
};

int FSIZE(FILE *fp){
    fseek(fp,0,SEEK_END);
    int sz = ftell(fp);
    fseek(fp,0,SEEK_SET);
    return sz;
}

void sortare(Cutie *a, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int vol_i=a[i].v[0]*a[i].v[1]*a[i].v[2];
            int vol_j=a[j].v[0]*a[j].v[1]*a[j].v[2];
            if(vol_i>vol_j) swap(a[i],a[j]);
        }
    }
}

void afisare(Cutie *a, int n){
    for(int i=0;i<n;i++){
        int vol = a[i].v[0]*a[i].v[1]*a[i].v[2];
        if(vol<10) cout<<a[i].tip << " " << a[i].v[0] << " " << a[i].v[1] << " " << a[i].v[2]<<endl;
    }
}

int main()
{
    FILE *f = fopen("cutii.dat","rb");
    int sizef = FSIZE(f)/sizeof(Cutie);
    Cutie *cutievect = (Cutie*) malloc(sizef*sizeof(Cutie));
    fread(cutievect,sizeof(Cutie),sizef,f);
    sortare(cutievect,sizef);
    afisare(cutievect,sizef);
    fclose(f);
    return 0;
}
