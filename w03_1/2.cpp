// **********************************************
// 제 목 : Triangle 작성
// 날 짜 : 2026년 03월 17일
// 작성자 : 2500014 김경원
// **********************************************

//소스코드
#include <iostream>

using namespace std;

class Triangle {
public:
    int x, y, area;
    double getArea();
};
double Triangle::getArea() {
    return x * y / 2;
}

int main() {
    Triangle test;
    test.x = 10;
    test.y = 20;
    double area = test.getArea();
    cout << "삼각형의 넓이는 " << area << endl;

    cout << sizeof(Triangle);
}