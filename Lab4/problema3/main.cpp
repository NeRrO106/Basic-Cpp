#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int l,k,nr=0;
    cin>>l>>k;
    char c[l],sec[k];
    for(int i=0;i<l;i++) cin>>c[i];
    for(int i=0;i<k;i++) cin>>sec[k];
    for(int i=0;i<l;i++){
        int cont = 0;
        for(int j=0;i<k;j++){
            if(c[i]==sec[j]){
                cont++;
                if(cont==k){
                    nr++;
                    cont=0;
                }
            }
        }
    }
    cout<<nr;
    return 0;
}
