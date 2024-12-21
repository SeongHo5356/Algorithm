#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
    string name;
    int kor, eng, math;
};

// 비교 함수: 정렬 기준 설정
bool cmp(const Person &u, const Person &v) {
    if (u.kor > v.kor) { // 국어 점수가 높은 순서
        return true;
    } else if (u.kor == v.kor) { // 국어 점수가 같으면
        if (u.eng < v.eng) { // 영어 점수가 낮은 순서
            return true;
        } else if (u.eng == v.eng) { // 영어 점수도 같으면
            if (u.math > v.math) { // 수학 점수가 높은 순서
                return true;
            } else if (u.math == v.math) { // 모든 점수가 같으면
                return u.name < v.name; // 이름이 사전순으로 앞서는 순서
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n; // 학생 수 입력

    vector<Person> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].math; // 학생 정보 입력
    }

    // 정렬 수행
    sort(a.begin(), a.end(), cmp);

    // 결과 출력
    for (int i = 0; i < n; i++) {
        cout << a[i].name << '\n';
    }

    return 0;
}

