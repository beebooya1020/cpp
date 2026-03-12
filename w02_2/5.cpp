#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char text[100];

    cout << "문자열을 입력하시오: ";
    cin >> text;   

    for (int i = 0; i < strlen(text); i++) {
        cout << text[i] << " ";
    }

    return 0;
}