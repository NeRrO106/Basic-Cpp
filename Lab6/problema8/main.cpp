#include <iostream>

using namespace std;

bool verificare_linii(int A[100][100],int l1,int l2,int c){
    for(int i=0;i<c;i++){
            l1--;l2--;
        if(A[l1][i]!=A[l2][i]) return true;
    }
    return false;
}

void citire(int A[100][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
}

void afisare(int A[100][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int A[100][100];
    int l,c,l1,l2;
    cin>>l>>c;
    citire(A,l,c);
    cin>>l1>>l2;
    if(verificare_linii(A,l1,l2,c))cout<<"Liniile sunt identice";
    else cout<< "Liniile sunt diferite";
    return 0;
}
