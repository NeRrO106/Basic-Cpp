//problema 1
#include <iostream>

using namespace std;

int main(){

    int v1[50],v2[50];
    int d1,d2,s=0;
    cin>>d1>>d2;
    if(d1!=d2) cout<<"Nu se poate calcula";
    else{
        for(int i=0;i<d1;i++) cin>>v1[i]>>v2[i];
        for(int i=0;i<d1;i++){
            s=s+v1[i]*v2[i];
        }
    }
    cout<<s;
    return 0;
}


//problema2

#include <iostream>

using namespace std;

int main()
{
    int A[100];
    float B[100], C[200];
    int n, m, k = 0, gasit=0;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> A[i];

    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> B[i];

    int i = 0, j = 0;
    while(i < n && j < m){
        if(A[i] < B[j]){
            C[k] = A[i];
            k++;
            i++;
        }
        else{
            C[k] = B[j];
            k++;
            j++;
        }
    }

    if(i <= n){
        for(int p = i; p < n; p++){
            C[k] = A[p];
            k++;
        }
    }
    if(j <= m){
        for(int p = j; p < m; p++){
            C[k] = B[p];
            k++;
        }
    }

    for(int p = 0; p < k; p++) cout << C[p] << " ";
    for(int i=0;i<k;i++){
        if(C[i]==23.0){
            gasit =1;
            cout<<endl<<"23.0 a fost gasit";
        }
        if(gasit ==1) break;
    }
    return 0;
}



//problema 6
#include<iostream>
using namespace std;

int main(){
    int l1,c1,l2,c2,i,j,k;
    cin>>l1>>c1>>l2>>c2;
    int A[l1][c1],B[l2][c2];
    for(i=0;i<l1;i++){
        for(j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    for(i=0;i<l2;i++){
        for(j=0;j<c2;j++){
        cin>>B[i][j];
        }
    }
    if(l1==l2 && c1==c2){
        int C[l1][c1]={0};
        for(i=0;i<l1;i++){
            for(j=0;j<c1;j++){
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        for(int i=0;i<l1;i++){
            for(int j=0;j<c1;j++){
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"Matricile nu se pot aduna"<<endl;
    if(c1!=l2) cout<<"Matricile nu se pot inmulti";
    else{
        int C[l1][c2]={0};
        for(i=0;i<c1;i++){
            for(j=0;j<l1;j++){
            C[i][j]=0;
            for(k=0;k<c1;k++)C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
        for(int i=0;i<l1;i++){
            for(int j=0;j<c1;j++){
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }
return 0;

}

