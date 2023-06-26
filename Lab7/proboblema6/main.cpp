#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void eliminare(char s[], char c){
    int l = strlen(s);

    for(int i = 0; i < l; i++){
        while(s[i] == c){
            for(int j = i; j < l; j++){
                s[j] = s[j+1];
            }
            l--;
        }
    }

    s = (char*)realloc(s, l*sizeof(char));
}

int main(){
    int n; cin >> n;
    char c;
    char *p = (char*)malloc(n*sizeof(char));
    cin >> p >> c;
    eliminare(p, c);
    cout << p;
}
