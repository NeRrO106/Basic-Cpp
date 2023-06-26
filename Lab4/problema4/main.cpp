#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char c[n-1], a[n-1];
    cin>>c;
    int k=0;
    for(int i=0; i<strlen(c); i++){
        char f=c[i];
        int cont=0;
        for(int j=0; j<strlen(c); j++){
            if(f==c[j])cont++;
        }
        if(cont==1){
            a[k] = f;
            k++;
        }
        cont=0;
    }
    for(int i=0;i<k;i++) cout<<a[i];
    return 0;
}
