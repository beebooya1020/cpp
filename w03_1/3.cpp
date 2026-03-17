// **********************************************
// 제 목 : Sphere 작성
// 날 짜 : 2026년 03월 17일
// 작성자 : 2500014 김경원
// **********************************************

//소스코드
#include <iostream>
#define PI 3.14

using namespace std;

class Sphere {
public:
    int r, area , vol;
    double getArea();
    double getVol();
};
double Sphere::getArea() {
    return 4*r*r*PI;
}
double Sphere::getVol(){
    return r*r*r*(4.0/3.0)*PI;

}

int main() {
    Sphere test;
    test.r = 10;
    double vol = test.getVol();
    double area = test.getArea();
    cout << "원의 겉넓이는 " << area << endl;
    cout << "원의 부피는 " << vol << endl;
}