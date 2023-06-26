#include <iostream>
#include <stdlib.h>

using namespace std;

void citire(int v[], int n){
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
}
void afisare(int v[], int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int concatenare(int a[],int b[],int c, int d){
    int j=0;
    for(int i = c;i<c+d;i++){
        a[i] = b[j];j++;
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    int *p = (int*)malloc(n*sizeof(int));
    int *q = (int*)malloc(m*sizeof(int));
    citire(p,n);
    citire(q,m);
    afisare(p,n);
    afisare(q,m);
    p = (int*)realloc(p, (n+m)*sizeof(int));
    concatenare(p,q,n,m);
    afisare(p,n+m);
    free(p);
    free(q);
    return 0;
}
