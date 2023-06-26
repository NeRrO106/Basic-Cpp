#include <iostream>

using namespace std;

void sortare(int v[],int l){
    int aux,i,j;
    for(i =0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(v[i]>v[j]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
}

void citire(int v[],int l){
    int i;
    for(i=0;i<l;i++)
        cin>>v[i];
}
void afisare(int v[],int l){
    int i;
    for(i=0;i<l;i++)
        cout<<v[i]<<" ";
}
int main()
{
    int v[50],n;
    cin>>n;
    citire(v,n);
    sortare(v,n);
    afisare(v,n);
    return 0;
}
