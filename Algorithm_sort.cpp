#include<iostream>
#include<algorithm>

using namespace std;

class Student{
public:
	string name;
	int score;
	Student(string name, int score){
		this -> name = name;
		this -> score = score;
	}
	// 정렬 기준 '점수가 작은 순서'
	bool operator <(Student &student){
		return this -> score > student.score;
	}
};

int main(void){
	Student students[] = {
		Student("JSH", 99),
		Student("LHJ", 95),
		Student("KMJ", 97),
		Student("HMS", 91),
		Student("OHJ", 93)
	};
	sort(students, students+5);
	for(int i =0; i<5; i++){
		cout << students[i].name << ' ';
	}
}