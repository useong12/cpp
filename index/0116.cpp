#include <iostream>
#include <string>
//#define main_0116
using namespace std;

#ifdef main_0116

//int main() {
//
//	string str = "";
//	/*std::cin >> str; 스페이스 공간 전 문장만 입력 */
//
//	getline(cin, str); /*스페이스 공백을 포함한 문장 입력*/
//
//	cout << "문자열 : " << str << endl;
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
//		cout << "문자열1 입력 : ";
//		cin >> s1;
//		cout << "문자열2 입력 : ";
//		cin >> s2;
//	
//
//		for (int i = 0; i <= 100; i++) {
//			if (isdigit(s1[i]) == 0 or isdigit(s2[i]) == 0) {
//				cout << "숫자를 입력해주세요" << endl;
//				break;
//			}
//			else {
//				s3 = stoi(s1) + stoi(s2);
//				cout << "두 문자열 합치기 : " << s1 + s2 << endl;
//				cout << "두 문자열 더하기 : " << s3 << endl;
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
		cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
		cin >> grade[i];
	}
    
	for (int i = 0; i < 5; i++) {
		sum = sum + grade[i];
	}

	cout << "성적 평균 : " << sum / 5 << endl;
	
	
}
#endif