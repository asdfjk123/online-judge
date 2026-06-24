/*
 * 세 자리의 자연수 N 이 있다.
 * 각 자리의 숫자가 모두 같은 수인지 찾아라.
 * e.g. 160(X) 444(O)
 */

#include <iostream>

using namespace std;

int N;
bool same;

// 입력
void input() {
    cin >> N;
}

// 계산
void process() {
    if ((N / 100) == ((N % 100) / 10) && ((N % 100) / 10) == N % 10) same = true;
    else same = false;
}

// 출력
void output() {
    same ? cout << "Yes" : cout << "No";
}

int main() {

    iostream::sync_with_stdio(false);
    cin.tie(NULL);

    input();
    process();
    output();

    return 0;
}