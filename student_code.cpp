#include<iostream>

int main()
{
	int num;
	int sum = 1;

	for (int i = 1; i <= 5; i++)
	{
		std::cout << i;
		std::cin >> num;
		sum += num;
	}
	std::cout << "합계: " << sum << std::endl;

	return 0;
}
