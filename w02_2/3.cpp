// **********************************************
// 제 목 : 학번 이름 주소를 입력받고 입력받은 값을 출력하는 프로그램을 작성하여라.
// 날 짜 : 26.03.12.
// 작성자 : 2500014 김경원
// **********************************************

//소스코드 


#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int student_id;
    char name[50];
    char address[100];

    cout << "학번을 입력하시오: ";
    cin >> student_id;

    cin.ignore();  // 버퍼에 남아있는 엔터 제거

    cout << "이름을 입력하시오: ";
    cin.getline(name, 50);

    cout << "주소를 입력하시오: ";
    cin.getline(address, 100);

    cout << "1.학번:" << student_id << endl;
    cout << "2.이름:" << name << endl;
    cout << "3.주소:" << address << endl;

    return 0;
}