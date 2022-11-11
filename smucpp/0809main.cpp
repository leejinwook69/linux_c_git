#include<iostream>
using namespace std;
 
#include"0809.h"
 
int main() {
    AirlineBook *air = new AirlineBook();
    cout << "***** 한성항공에 오신것을 환영합니다 *****\n\n";
    air->start();
    delete air;
}
