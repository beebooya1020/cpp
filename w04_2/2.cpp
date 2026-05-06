#include <iostream>
using namespace std;

class Circle {
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	int getRadius();
private:
	int radius;
};
Circle::Circle() { radius = 1; }
Circle::Circle(int r) { radius = r; }
void Circle::setRadius(int r) { radius = r; }
int Circle::getRadius() { return radius; }
int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은" << waffle.getRadius() << endl;
	return 0;
}