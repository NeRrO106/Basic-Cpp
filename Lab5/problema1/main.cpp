#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

int main()
{
    char s[50];
    char *p;
    cin>>s;
    p=&s[0];
    for(int i=0;i<strlen(s);i++){
        cout<<*p<<" ";
        p++;
    }
    return 0;
}
