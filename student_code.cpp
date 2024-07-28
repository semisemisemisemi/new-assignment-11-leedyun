#include <iostream>
#include <limits>

using namespace std;

int main() {
    int sum = 0;
    
    // 사용자에게 다섯 번 정수를 입력하도록 요청하고 그 합을 계산합니다.
    for (int i = 0; i < 5; i++) {
        int num;
        cout << i + 1 << "번째 정수 입력: ";
        
        // 입력이 정수인지 확인합니다. 그렇지 않으면 다시 요청합니다.
        while (!(cin >> num)) {	
            cout << "정수를 다시 입력해주세요: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
        sum += num;
    }
    // 합계를 출력합니다.
    cout << "합계: " << sum << endl;

    return 0;
}
