#include <iostream>
#include <string>
//#define main_0116
using namespace std;

#ifdef main_0116

//int main() {
//
//	string str = "";
//	/*std::cin >> str; �����̽� ���� �� ���常 �Է� */
//
//	getline(cin, str); /*�����̽� ������ ������ ���� �Է�*/
//
//	cout << "���ڿ� : " << str << endl;
//
//	return 0;
//}

//int main() {
//
//	//string str1 = "coding";
//	//string str2 = "on";
//	//string str3("aaa");
//	//string str4("bbb");
//
//	///*char str_arr[] = { 'h','e','l','l','o','\0'};*/
//
//	//string str5("bbbbb");
//
//	//cout << "str1+2 : " << str1+str2 << endl;
//	//cout << "str1>str2 : " << (str1 > str2) << endl;
//	//cout << "str3 : " << str3 << endl;
//	//cout << "str4 : " << str4 << endl;
//	//cout << "str5 : " << str5 << endl;
//	return 0;
//}

//int main() {
//	while (true) {
//		string s1;
//		string s2;
//		int s3;
//		cout << "���ڿ�1 �Է� : ";
//		cin >> s1;
//		cout << "���ڿ�2 �Է� : ";
//		cin >> s2;
//	
//
//		for (int i = 0; i <= 100; i++) {
//			if (isdigit(s1[i]) == 0 or isdigit(s2[i]) == 0) {
//				cout << "���ڸ� �Է����ּ���" << endl;
//				break;
//			}
//			else {
//				s3 = stoi(s1) + stoi(s2);
//				cout << "�� ���ڿ� ��ġ�� : " << s1 + s2 << endl;
//				cout << "�� ���ڿ� ���ϱ� : " << s3 << endl;
//				break;
//			}
//
//		}
//		if (s1.compare("break") == 0) break;
//	}
//}

int main() {
	int grade[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "�� �л��� ������ �Է��ϼ��� : ";
		cin >> grade[i];
	}
    
	for (int i = 0; i < 5; i++) {
		sum = sum + grade[i];
	}

	cout << "���� ��� : " << sum / 5 << endl;
	
	
}
#endif