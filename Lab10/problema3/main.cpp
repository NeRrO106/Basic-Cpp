#include <iostream>
#include <cmath>

using namespace std;

struct punct{
    double x;
    double y;
};

void citire(punct &w){
    cin>>w.x>>w.y;
}
void afisare(punct &w){
    cout<<"Coord pe x este: "<<w.x<<" "<<"Coord pe y este: "<<w.y<<endl;
}

void distanta(punct a, punct b, double &d){
    d = sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}
int main()
{
    punct a,b;
    double d;
    citire(a);
    citire(b);
    distanta(a,b,d);
    cout<<d<<endl;
    int n;
    cin>>n;
    punct *p = (punct*)malloc(n*sizeof(punct));
    for(int i=0;i<n;i++){
        citire(p[i]);
    }
    for(int i=0;i<n-1;i++){
        double x = 0;
        distanta(p[i],p[i+1],x);
        cout<<"Distanta dintre punctele "<<"("<<p[i].x<<","<<p[i].y<<")"<<"si punctul "<<"("<<p[i+1].x<<","<<p[i+1].y<<")"<<"este de: "<<x<<endl;
    }
    for(int i=0;i<n;i++){
        afisare(p[i]);
    }
    return 0;
}
