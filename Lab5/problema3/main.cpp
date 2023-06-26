#include <iostream>

using namespace std;

int main()
{
    int n,v[50];
    int *p;
    cin>>n;
    p=&v[0];
    for(int i=0;i<n;i++){
        cin>>p[i];
        p++;
    }
    p=&v[0];
    for(int i=0;i<n;i++){
        if(p%2==0) cout<<p<<" ";
        p++;
    }
    return 0;
}
