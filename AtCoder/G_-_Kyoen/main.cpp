#include <iostream>

/*
 * 원의 둘레 중 정수의 좌표를 가진 점을 998244353 이라는 값으로 나눈 나머지를 구하라.
 * 중심점은 (A/C, B/C) 이며 반지름은 root(N)/C 이다.
 * N = P^E 의 모든 곱
 */

/*
 * 문제 풀이 원리
 * 원을 둘러싸는 정사각형을 그린 다음, 정사각형과 인접한 원 둘레의 점만 조사해서 찾아내면 되지 않을까?
 */

using namespace std;

int A, B, C, M;
vector<pair<int, int>> PE;
int result;


void input() {
    cin >> A >> B >> C >> M;

    int P, E;

    for (int i = 0; i < M; i++) {
        cin >> P >> E;
        PE.emplace_back(P, E);
    }


}

void process() {

}

void output() {
    cout << result << endl;
}

int main() {

    iostream::sync_with_stdio(false);
    cin.tie(NULL);

    input();
    process();
    output();

    return 0;
}