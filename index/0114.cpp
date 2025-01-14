#include <iostream>
# define main_0114

#ifdef main_0114
int main() {
	int score;

	std::cout << "숫자를 입력해주세요 : ";
	std::cin >> score;

	(score%5) == 0 ? std::cout << score << "는 5의 배수입니다." : std::cout << score << "는 5의 배수가 아니네요 ㅜㅜ";

 return 0;
}
#endif