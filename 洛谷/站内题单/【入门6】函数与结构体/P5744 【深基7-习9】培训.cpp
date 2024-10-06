#include <iostream>
using namespace std;

struct Student {
	string name;
	int age, score;
};

Student training(Student s) {
	s.age++;
	s.score *= 1.2;
	if (s.score > 600) {
		s.score = 600;
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	Student stu[n];
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name >> stu[i].age >> stu[i].score;
		stu[i] = training(stu[i]);
		cout << stu[i].name << " " << stu[i].age << " " << stu[i].score << endl;
	}
	
	return 0;
}
