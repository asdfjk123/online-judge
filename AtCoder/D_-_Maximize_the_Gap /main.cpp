#include <iostream>

using namespace std;

struct Cloth {
    int L;
    int R;
};

int N, K;
int min = -1;
int maximin = -1;
Cloth clothes[100000];

/*
 * 핵심 원리
 * 옷과 옷 사이의 거리의 값을 -1 부터 시작해서, 그 값이 있는지 찾는다.
 * 그 값이 있으면 그것을 최솟값으로 저장하고 종료, 없으면 +1
 * maximin 보다 min 이 더 크다면 그 값으로 업데이트한다.
 * K 개의 경우의 수만큼 반복한 후, maximin 을 출력 후 종료.
 */

// 옷과 옷 사이의 거리 계산
int score(Cloth a, Cloth b) {
    // TODO: 옷과 옷 사이의 가장 가까운 부분끼리의 좌표의 차이를 절댓값으로 계산
}

// 입력
void input() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> clothes[i].L >> clothes[i].R;
    }
}

// 처리
void process() {

}

// 출력
void output() {

}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    input();
    process();
    output();

    return 0;
}