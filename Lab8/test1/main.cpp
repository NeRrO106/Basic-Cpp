#include <iostream>
using namespace std;

void functiaswitch(double v[],int n, int &rezultat){
    char c;
    cin>>c;
    switch(c){
        case 'a':{
            rezultat = 1;
            for(int i=0;i<n;i+=2){
                rezultat *=v[i];
            }
            break;
        }
        case 'b':{
            rezultat = 0;
            int i=0;
            do{
               rezultat +=v[i];
               i++;
            }
            while(i<n);
            break;
        }
        case 'c':{
            rezultat = 0;
            int i=0;
            while(i<n){
                if(v[i]==1) rezultat++;
                i++;
            }
            break;
        }
        default: rezultat = -1;

    }
}

int functienraparitii(double v[], int l, int &nr){
    int cnt;
    nr=0;
    for(int i = 0; i < l; i++){
        cnt = 1;
        for(int j = 0; j < l; j++)
            if(v[i] == v[j] && v[j] != -999 && i != j){
                cnt++; v[j] = -999;
            }
        v[i] = -999;

        if(cnt >= 3) nr++;
        }
}

int main()
{
    int l;
    cin>>l;
    double*v = (double*) malloc(l*sizeof(double));
    for(int i=0;i<l;i++) cin>>v[i];
    int rezultat,nraparitii = 0;
    functiaswitch(v,l,rezultat);
    cout<<rezultat<<endl;
    functienraparitii(v,l,nraparitii);
    cout<<nraparitii<<endl;
    int A[l][l] = {0};
    for(int i=0;i<l;i++){
        A[0][i] = v[i];
    }
    return 0;
}
