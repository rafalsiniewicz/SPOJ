#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdio>
using namespace std;
double area(const double& r,const double& d){
    const double pi = 3.141592654;
    double p;
    p = pi*(r*r-(d/2)*(d/2));
    return p;
}
int main(){
    double r,d;
    cin >> r >> d;
    printf("%.2f",area(r,d));

    return 0;
}
