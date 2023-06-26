#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    int n;
    cin>>n;
    char c[n+1];
    cin>>c;
    for(int i=0;i<strlen(c);i++){
        char f=c[i];
        int cont=0;
        for(int j=0;j<strlen(c);j++){
            if(f==c[j]&&f!='?'){
                c[j]='?';
                cont++;
            }
        }
        if(cont){
            cout<<"Caracterul "<<f<<" apare de "<<cont<<" ori"<<endl;
        }
    }
    return 0;
}
