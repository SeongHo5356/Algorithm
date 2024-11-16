#include <iostream>

using namespace std;

// struct 정의
struct Person {
    int age;
    string name;

    // 멤버 함수
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    bool operator==(Person other) {
    	return (age == other.age && name == other.name);
	}

};

int main() {
    // struct 객체 생성 및 초기화
    Person person = {25, "Alice"};

    // 멤버에 접근
    cout << "Name: " << person.name << endl; // Alice
    cout << "Age: " << person.age << endl;   // 25

    // 멤버 함수 호출
    person.display();
    
    // struct 객체 생성
    Person person1 = {25, "Alice"};
    Person person2 = {25, "Alice"};
    Person person3 = {30, "Bob"};

    // == 연산자 사용
    if (person1 == person2) {
        cout << "person1 is equal to person2" << endl;
    } else {
        cout << "person1 is not equal to person2" << endl;
    }

    if (person1 == person3) {
        cout << "person1 is equal to person3" << endl;
    } else {
        cout << "person1 is not equal to person3" << endl;
    }

    return 0;
}

