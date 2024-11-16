#include <iostream>

using namespace std;

// struct ����
struct Person {
    int age;
    string name;

    // ��� �Լ�
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    bool operator==(Person other) {
    	return (age == other.age && name == other.name);
	}

};

int main() {
    // struct ��ü ���� �� �ʱ�ȭ
    Person person = {25, "Alice"};

    // ����� ����
    cout << "Name: " << person.name << endl; // Alice
    cout << "Age: " << person.age << endl;   // 25

    // ��� �Լ� ȣ��
    person.display();
    
    // struct ��ü ����
    Person person1 = {25, "Alice"};
    Person person2 = {25, "Alice"};
    Person person3 = {30, "Bob"};

    // == ������ ���
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

