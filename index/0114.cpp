#include <iostream>
# define main_0114

#ifdef main_0114
int main() {
	int score;

	std::cout << "���ڸ� �Է����ּ��� : ";
	std::cin >> score;

	(score%5) == 0 ? std::cout << score << "�� 5�� ����Դϴ�." : std::cout << score << "�� 5�� ����� �ƴϳ׿� �̤�";

 return 0;
}
#endif