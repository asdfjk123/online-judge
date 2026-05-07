#include <iostream>

using namespace std;

int n, answer[15];

void input() {
    cin >> n;
}

void calculate() {
    for (int i = 0; i < n; i++) {
        if (i == 0) answer[i] = 1;
        if (i == 1) answer[i] = 2;
        if (i == 2) answer[i] = 4;
        if (i > 2) {
            answer[i] = answer[i - 1] + answer[i - 2] + answer[i - 3];
        }
    }
}

void output() {
    cout << answer[n - 1] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    input();
    calculate();
    output();

    return 0;
}