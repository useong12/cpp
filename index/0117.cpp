#include <iostream>
#include <string>
//#define main_0117
using namespace std;

#ifdef main_0117
//int main() {
//	int exam[5][3] = { {10,20,30},
//					   {40,50,60},
//					   {70,80,90},
//	                   {80,70,60},
//		               {50,40,30} 
//	};
//		
//	for (int i = 0; i < 5; i++) {
//		cout << i + 1 << "�� �л��� ����,����,���� ������ : ";
//		for (int j = 0; j < 3; j++) {
//			cout << exam[i][j]<<" ";
//		}
//		cout << endl;
//	}
//
//}
//int main() {
//	struct Rectangle {
//		float width;
//		float height;
//	};
//	
//	Rectangle rectangle;
//
//	string str;
//	int val = 0;
//	int point = 0;
//
//	cout << "�簢���� ���̿� ���̸� �������ּ��� : ";
//	cin >> rectangle.width >> rectangle.height;
//
//	cout << "���̴� : " << rectangle.width * rectangle.height << endl;
//	
//}

int main() {
	struct Student {
		string name;
		float scores[3];
		float mean_value;
	};

	Student student[3];

	for (int student_number = 0; student_number <= 2; student_number++) {
		cout << student_number+1 << "�� �л��� �̸��� : ";
		cin >> student[student_number].name;

		cout << student[student_number].name << " �л��� 3���� ������ �Է��ϼ��� : ";
		cin >> student[student_number].scores[0] >> student[student_number].scores[1] >> student[student_number].scores[2];
	}
	
	for (int student_number = 0; student_number <= 2; student_number++) {
		float sum = 0;
		for (int subject_number = 0; subject_number <= 2; subject_number++) {
			sum = student[student_number].scores[subject_number] + sum;
		}
		student[student_number].mean_value = sum / 3;
	}
    
	for (int student_number = 0; student_number <= 2; student_number++) {
		cout << student[student_number].name << " �л��� 3���� ���� ��� : " << student[student_number].mean_value << endl;
	}

	int max = 0;
	int max_person_number = 0;

	for (int student_number = 0; student_number <= 2; student_number++) {
		if (max < student[student_number].mean_value) {
			max = student[student_number].mean_value;
			max_person_number = student_number;
		}
	}

	cout << "1�� : " << student[max_person_number].name << " (��� ���� : " << student[max_person_number].mean_value << " )" << endl;
	

}
#endif