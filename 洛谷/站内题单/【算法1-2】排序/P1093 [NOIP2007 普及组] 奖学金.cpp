#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
	int id, score;
	int chinese, math, english;
	Student() {}
	Student(int id,int c, int m, int e, int s):id(id), chinese(c), math(m), english(e), score(s) {}
};

bool cmp(Student s1, Student s2) {
	if (s1.score == s2.score) {
		if (s1.chinese == s2.chinese) {
			return s1.id < s2.id;
		}
		return s1.chinese > s2.chinese;
	}
	return s1.score > s2.score;
}

int main() {
	int n, a, b, c;
	cin >> n;
	Student stu[n];
	for (int i = 0; i < n ; i++) {
		cin >> a >> b >> c;
		stu[i] = Student(i + 1, a, b, c, a + b + c);
	}
	sort(stu, stu + n, cmp);
	for (int i = 0; i < 5; i++) {
		cout << stu[i].id << " " << stu[i].score << endl;
	}
	
	return 0;
}
