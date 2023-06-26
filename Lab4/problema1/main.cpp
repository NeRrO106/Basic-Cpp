#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    int l,nrcif=0,nrlitmare=0,nrlitmica=0;
    cin>>l;
    char c[l];
    for(int i=0;i<l;i++) cin>>c[i];
    for(int i=0;i<l;i++){
        if(isupper(c[i])) c[i] = tolower(c[i]);
        else if(islower(c[i])) c[i] = toupper(c[i]);
    }
    for(int i=0;i<l;i++){
        if(isalpha(c[i])){
            if(isupper(c[i])) nrlitmare++;
            else nrlitmica++;
        }
        else nrcif++;
    }
    for(int i=0;i<l;i++) cout<<c[i];
    cout<<endl;
    cout<<nrlitmare<<" "<<nrlitmica<<" "<<nrcif<<endl;
    return 0;
}
