#include <iostream>
using namespace std;

class Triangle {
public:
	Triangle();
	Triangle(int width, int height);
	void setWidth(int Width);
    void setHeight(int Height);
    int getWidth();
    int getHeight();
    double getArea();
private:
	int width, height;
};
Triangle::Triangle() {width = 1; height = 1;}
Triangle::Triangle(int x, int y) {width = x; height  =y;}
void Triangle::setWidth(int x) {width = x;}
void Triangle::setHeight(int y){height = y;}
int Triangle::getHeight() {return height;}
int Triangle::getWidth() {return width;}

int main() {
    Triangle tri;
    tri.setWidth(3);
    tri.setHeight(5);
    cout << "삼각형의 폭은 " << tri.getWidth() << endl;
    cout << "삼각형의 높이는 " << tri.getHeight() << endl;
    cout << "삼각형의 높이는 " << tri.getArea() << endl;
    return 0;
}
