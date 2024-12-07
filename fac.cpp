#include "fac.h"

double fac(double a){
    double multi{1};
    for(int i{2};i<=a;i++){
        multi*=i;
    }
    return multi;
}

double calc(double x){
    double sum{1};
    for(int i{2};i<=300;i+=4){
        sum-=(pow(x,i)/fac(i));

    }
    for(int i{4};i<=300;i+=4){
        sum+=(pow(x,i)/fac(i));
    }
    return sum;
}