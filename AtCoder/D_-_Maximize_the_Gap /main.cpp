#include <iostream>
#include <set>

using namespace std;

struct Cloth {
    int L;
    int R;

    // set 에서 사용할 정렬 함수
    bool operator<(const Cloth& other) const {
        return L < other.L; // 왼쪽 좌표를 기준으로 비교
    }
};

int N, K;
int maximin_value = -1;
Cloth clothes[100000];
vector<set<Cloth>> Set;

/*
 * 핵심 원리
 * 옷과 옷 사이의 거리의 값을 -1 부터 시작해서, 그 값이 있는지 찾는다.
 * 그 값이 있으면 그것을 최솟값으로 저장하고 종료, 없으면 +1
 * maximin_value 보다 min_value 이 더 크다면 그 값으로 업데이트한다.
 * K 개의 경우의 수만큼 반복한 후, maximin 을 출력 후 종료.
 */

// 옷과 옷 사이의 거리 계산
// 절대 거리가 a < b 라고 가정
int score(Cloth a, Cloth b) {
    // TODO: 옷과 옷 사이의 가장 가까운 부분끼리의 좌표의 차이를 절댓값으로 계산
    return b.L - a.R;
}

// 옷 오름차순 정렬
void sort_clothes_in_ascending_order() {
    // TODO: 정렬 함수 사용
}

// K 개의 겹치지 않는 옷 집합들 찾기
void find_K_non_overlapping_clothes_sets() {

    // NOTE: 옷 집합 찾을 때는 재귀적이므로 아마 DP?

    // TODO: 비교하는 옷 a, b 가 겹치지 않는 경우, b 를 집합에 포함 (a 는 이미 집합에 포함된 옷)
    if (1) {

    }
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
    sort_clothes_in_ascending_order();
    find_K_non_overlapping_clothes_sets();
    for (const set<Cloth>& s : Set) {
        bool found = false; // min_value 와 일치하는 걸 찾았는가?
        int min_value = -1;
        while (1) {
            auto a = s.begin(); // 비교할 옷 a
            auto b = next(a); // 비교할 다음 옷 b

            // 옷 끼리 비교
            while (b != s.end()) {
                const Cloth& current_cloth = *a;
                const Cloth& next_cloth = *b;

                int dist = score(current_cloth, next_cloth); // 거리 계산
                if (min_value == dist) { // min_value 와 일치하면 찾았으므로 종료
                    found = true;
                    break;
                }

                // 다음으로
                a++;
                b++;
            }
            if (found) break;
            min_value++; // 다음 최솟값 조사하기 위해 ++
        }
        if (maximin_value < min_value) maximin_value = min_value; // 최솟값 중 최댓값 업데이트
    }
}

// 출력
void output() {
    cout << maximin_value << endl;
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    input();
    process();
    output();

    return 0;
}