#include <iostream>

using namespace std;

int maxim(int a, int b, int c){
    int maxi = -9999;
    if(maxi<a) maxi = a;
    if(maxi<b) maxi = b;
    if(maxi<c) maxi = c;
 return maxi;
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int w = maxim(x,y,z);
    cout<<w;
    return 0;
}
