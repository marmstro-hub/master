#include <cmath>
#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;

double fut_annu_ord(double rate, double flow_per, double period) {
       return flow_per*((pow(1+rate,period)-1)/rate);
}

double pres_annu_ord(double rate, double flow_per, double period) {
       return flow_per*((1-pow(1+rate,-period))/rate);
}

double fut_annu_due(double rate, double flow_per, double period) {
       return fut_annu_due(rate,flow_per,period)*(1+rate);
}

double pres_annu_due(double rate, double flow_per, double period) {
       return pres_annu_due(rate,flow_per,period)*(1+rate);
}

double pres_annu_perp(double rate, double flow_per) {
       return flow_per/rate;
}

int main() {}

