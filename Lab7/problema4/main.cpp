#include <iostream>
#include <stdlib.h>

using namespace std;

void citire(char s[], int n){
    for(int i = 0; i < n; i++)cin >> s[i];
}

void afisare(char s[], int n){
    for(int i = 0; i < n; i++)cout << s[i];
    cout << endl;
}

void concatenare(char a[], char b[], int n, int m){
    int j = 0;
    for(int i = n; i < n+m; i++){
        a[i] = b[j]; j++;
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    char *p = (char*)malloc(n*sizeof(char));
    char *q = (char*)malloc(m*sizeof(char));
    citire(p, n);
    citire(q, m);
    afisare(p, n);
    afisare(q, m);
    p = (char*)realloc(p, (n+m)*sizeof(char));
    concatenare(p, q, n, n+m);
    afisare(p, n+m);
    free(p);
    free(q);
    return 0;
}
