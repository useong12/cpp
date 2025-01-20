#include <iostream>
#include <string>
//#define main_0120
using namespace std;

#ifdef main_0120

//int sensor_cal(int sensor_val,int offset) {
//	
//	int result = 0;
//    
//	result = sensor_val - offset;
//
//	return result;
//
//}
//
//void motor_speed(int motor_num,int speed) {
//	
//	cout << motor_num << "번 모터의 속도 : " << speed <<" RPM"<< endl;
//	
//	return;
//}
//
//void main() {
//
//	cout << sensor_cal(50, 5)<<endl;
//	motor_speed(1, 50);
//
//	return;
//}

//void get_result(int a) {
//	if (a % 2 == 0) {
//		cout << "짝수"<<endl;
//	}
//	else {
//		cout << "홀수"<<endl;
//	}
//	return;
//}
//
//int get_result(int a,int b,int c) {
//	int big=0;
//	if (a > b) {
//		big = a;
//	}
//	else {
//		big = b;
//	}
//	if (big > c) {
//		big = big;
//	}
//	else {
//		big = c;
//	}
//	return big;
//}
//
//int main() {
//	get_result(3);
//	cout<<get_result(1, 2, 3)<<endl;
//	return 0;
//}

//int add(int a, int b) {
//	int result = a + b;
//	return result;
//}
//
//int sub(int a, int b) {
//	int result = 0;
//	if (a > b) {
//		result = a - b;
//	}
//	else {
//		result = b - a;
//	}
//	return result;
//}
//
//int mul(int a, int b) {
//	int result = 0;
//	result = a * b;
//	return result;
//}
//
//float devide(int a, int b) {
//	float result = 0;
//	float c = static_cast<float>(a);
//	float d = static_cast<float>(b);
//	result = c / d;
//	return result;
//}
//
//int main() {
//	cout << add(1, 1) << endl;
//	cout << sub(3, 1) << endl;
//	cout << mul(2, 1) << endl;
//	cout << devide(2, 3) << endl;
//	return 0;
//}

//class CalClass {
//private : 
//	int val;
//public : 
//	void set_val(int num) {
//		val = num;
//	}
//	void inc_val(int num);
//	void dec_val(int num) {
//		val = val - num;
//	}
//	void print_val() {
//		cout << "최종 출력값 : " << val << endl;
//	}
//};
//
//void CalClass::inc_val(int num) {
//	val = val + num;
//}
//
//void main() {
//	CalClass cc1, cc2;
//
//	cc1.set_val(3);
//	cc1.inc_val(3);
//	cc1.print_val();
//
//	cc2.set_val(2);
//	cc2.inc_val(3);
//	cc2.print_val();
//
//
//}

//class CalClass {
//
//private : 
//
//public :
//	int x;
//	int y;
//	char z;
//	
//	int add(int a, int b);
//	int sub(int a, int b);
//	int mul(int a, int b);
//	float devide(int a, int b);
//	CalClass(){
//		cout << "숫자1,연산자(+,-,*,/),숫자2를 입력하세요 : ";
//		cin >> x >> z >> y;
//		switch (z) {
//		case '+' :
//			cout<< add(x, y) <<endl;
//			break;
//		case '-':
//		    cout << sub(x, y) <<endl;
//			break;
//		case '*':
//			cout << mul(x, y) <<endl;
//			break;
//		case '/':
//			cout << devide(x, y) <<endl;
//			break;
//		}
//	}
//};
//
//int CalClass::add(int a, int b) {
//	int result = a + b;
//	return result;
//}
//
//int CalClass::sub(int a, int b) {
//	int result = 0;
//	if (a > b) {
//		result = a - b;
//	}
//	else {
//		result = b - a;
//	}
//	return result;
//}
//
//int CalClass::mul(int a, int b) {
//	int result = 0;
//	result = a * b;
//	return result;
//}
//
//float CalClass::devide(int a, int b) {
//	float result = 0;
//	float c = static_cast<float>(a);
//	float d = static_cast<float>(b);
//	result = c / d;
//	return result;
//}
//
//int main() {
//
//	CalClass cc1;
//	CalClass cc2;
//	CalClass cc3;
//
//	return 0;
//}

//class Test {
//private:
//public:
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	Test() {
//		cout << "생성자" << endl;
//		for (int i = 0; i < 10; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	~Test() {
//		cout << "소멸자" << endl;
//		for (int j = 9; j >= 0; j--) {
//			cout << arr[j] << " ";
//		}
//		cout << endl;
//	}
//};
//
//int main() {
//	Test test;
//	
//	return 0;
//}

class Bread {
private:
	string ingredient;
	int price;
	int quantity;

public:
	Bread() {
		cout << "붕어빵 만들기 시작!" << endl;
	}
	string set_ingredient();
	int set_price();
	int set_quantity();
	void info();
	~Bread() {
		cout << "붕어빵 만들기 끝!" << endl;
	}
};

string Bread::set_ingredient() {
	cout << "어떤 속을 넣을까요? " << endl;
	cin >> this->ingredient;
	return ingredient;
}

int Bread::set_price() {
	cout << "한 개의 가격은 얼마로 할까요? " << endl;
	cin >> this->price;
	return price;
}

int Bread::set_quantity() {
	cout << "몇 개를 만들까요? " << endl;
	cin >> this->quantity;
	return quantity;
}

void Bread::info() {
	cout << "붕어빵 정보" << endl;
	cout << "속재료 : " << this->ingredient << endl;
	cout << "개수 : " << this->quantity << endl;
	cout << "총가격 : " << this->price*this->quantity << endl;
}

int main() {

	Bread bread;
	bread.set_ingredient();
	bread.set_price();
	bread.set_quantity();
	bread.info();

	return 0;
}
#endif