#include <iostream>

using namespace std;

int main()
{
    int A[50][50],l,c;
    int *p,*q;
    cin>>l>>c;
    for(int i =0;i<l;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }

    p=&A[0][0];
    q=&A[0][0];
    cout<<"Suma de pe linia 1: ";
    int s=0;
    for(int i=0;i<c;i++){
        p=A[i];
        s+=*p;
    }
    cout<<s<<endl;
    cout<<"Suma de pe coloana 1: ";
    s=0;
    for(int i=0;i<c;i++){
        p=A[i];
        s+=*p;
    }
    cout<<s<<endl;
    int minim=99999,maxim=-99999;
    if(l==c){
        for(int i=0;i<l;i++){
            p=A[i]+i;
            if(*p<minim) minim=*p;
            if(*p>maxim) maxim=*p;
        }
        cout<<minim<<" "<<maxim<<endl;
    }
    int vlin[l],vcol[c];
    int l2,c2;
    cout<<"Introdu linia dorita ";cin>>l2;
    cout<<"Introdu coloana dorita ";cin>>c2;
    if(l2!=0){
        *q=A[l2][0];
        for(int i=0;i<c;i++){
            q = A[i]+(c2-1);
            vlin[i]=*q;
        }
    }
    for(int i=0;i<l;i++) cout<<vlin[i]<<" ";
    return 0;
}
