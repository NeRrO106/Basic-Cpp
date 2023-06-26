#include <iostream>

using namespace std;

void incrementare(int &a, int &b, int &c){
    a++;
    b+=2;
    c+=5;
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    incrementare(x,y,z);
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
