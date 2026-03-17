// **********************************************
// 제 목 : 실습과제 4번 기능추가 
// 날 짜 : 2026년 03월 17일
// 작성자 : 2500014 김경원
// **********************************************

//소스코드
#include <iostream>
using namespace std;

class Rectangle {
public:
    int x, y;
    int width;
    int height;

    int getArea();
    int length();
    void getRightBottom();
};

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::length() {
    return 2 * (width + height);
}

void Rectangle::getRightBottom() {
    int rightX = x + width;
    int rightY = y - height;
    cout << "사각형의 우측하단의 좌표는 (" 
         << rightX << ", " << rightY << ")" << endl;
}

int main() {
    Rectangle rect;

    cout << "사각형의 좌측상단좌표(x,y) : ";
    cin >> rect.x >> rect.y;

    cout << "사각형의 폭과 높이(width,height) : ";
    cin >> rect.width >> rect.height;

    cout << "사각형의 면적은 " << rect.getArea() << endl;
    cout << "사각형의 둘레길이는 " << rect.length() << endl;
    rect.getRightBottom();

    return 0;
}