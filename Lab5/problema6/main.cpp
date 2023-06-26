#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char s[256];
    cin.get(s,256);
    char*p;
    p=strtok(s," ");
    while(p!=NULL){
        if(strcmp(p,"gata")){
            cout<<"Cuvantul "<<p<<" are "<<strlen(p)<<" litere"<<endl;
        }
        p=strtok(NULL," ");
    }
    return 0;
}
