#include <iostream>

using namespace std;

typedef struct Space {
    bool up_lined = false, down_lined = false, left_lined = false, right_lined = false; // 정사각형 공간의 4개의 면의 선이 그려졌는지 여부
    bool is_checked; // 해당 면은 이미 조사가 완료되었는지의 여부
};

int N, x_input, y_input, result;
int dots[10000][10000];
Space spaces[9999][9999];

void input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x_input >> y_input;
        // TODO: dots 에 반영
        // TODO: Spaces 에 선이 그어진 여부 반영
    }
}

void calculate() {

}

void output() {
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    input();
    calculate();
    output();

    return 0;
}