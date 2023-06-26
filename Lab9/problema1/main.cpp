#include <iostream>

using namespace std;

int main()
{
    int l,c;
    cin>>l>>c;
    int **p;
    p = (int**)malloc(l*sizeof(int*));
    for(int i=0;i<l;i++){
        p[i] = (int*)malloc(c*sizeof(int));
    }
    return 0;
}
