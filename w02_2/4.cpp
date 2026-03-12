// **********************************************
// 제 목 : 실수를 입력받아 양수만 합하여 출력하시오.
// 날 짜 : 26.03.12.
// 작성자 : 2500014 김경원
// **********************************************

//소스코드 

#include <iostream>

using namespace std;

int main() {
    double num;
    double sum = 0;

    cout << "실수 5개를 입력하시오: ";

    for (int i = 0; i < 5; i++) {
        cin >> num;

        if (num > 0) {
            sum += num;
        }
    }

    cout << "양수의 합: " << sum << endl;

    return 0;
}