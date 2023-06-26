#include <iostream>

using namespace std;

void citire(int** a,int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}

void afisare(int** a,int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void alocarematrice(int** &a, int n, int m){
    a = (int**)calloc(n,sizeof(int*));
    for(int i=0;i<n;i++){
        a[i] = (int*)calloc(m ,sizeof(int));
    }
}

void adunare(int** a,int** b,int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = a[i][j]+b[i][j];
        }
    }
    afisare(a,n,m);
}

void inmultire(int** a, int** b, int n, int m, int c, int d){
        int** rezultat;
        alocarematrice(rezultat, n, m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                rezultat[i][j] = 0;

                for(int k = 0; k < c; k++)
                    rezultat[i][j] += a[i][j] * b[i][j];
            }
        }
        cout << "Produsul matricelor este: " << endl;
        afisare(rezultat, m, c);
}

void sortarevector(int v[], int n){
    int aux;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]<v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main()
{
    int l,c;
    cin>>l>>c;
    int **p;
    alocarematrice(p,l,c);
    citire(p,l,c);
    afisare(p,l,c);
    int l2,c2;
    int **q;
    cin>>l2>>c2;
    alocarematrice(q,l2,c2);
    citire(q,l2,c2);
    afisare(q,l2,c2);
    cout<<"Suma: "<<endl;
    if(l==l2&&c==c2){
        adunare(p,q,l,c);
    }
    cout<<"Inmultirea: "<<endl;
    if(c != l2){
        cout << "Matricele nu se pot inmulti!!!" << endl;
    }
    else inmultire(p,q,l,c,l2,c2);

    for(int i=0;i<l;i++){
        free(p[i]);
    }
    free(p);
    for(int i=0;i<l2;i++){
        free(q[i]);
    }
    free(p);

    int n;
    cin>>n;
    alocarematrice(p,n,n);
    citire(p,n,n);
    int *v;
    v=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        v[i] = p[i][i];
    }
    sortarevector(v,n);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}
