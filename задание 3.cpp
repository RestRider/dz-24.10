#include<iostream>
#include<Windows.h>
#include<time.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int masiv[12];
	int nacalo = 0;
	int conac = 0;
	int min = 99999999;
	int por_min = 0;
	int max = 0;
	int por_max = 0;
	int i;

	std::cout << "введите по очерёдно прибыль в этом году начиная с 1 января  \n";
	for (i = 0; i < 12; i += 1)
	{
		std::cin >> masiv[i];
	}
	std::cout << "введите начало диапозона и конец \n";
	std::cin >> nacalo >> conac;
	for (i = nacalo - 1; i < conac; i += 1)
	{
		if (min > masiv[i])
		{
			min = masiv[i];
			por_min = i;
		}
		if (max < masiv[i])
		{
			max = masiv[i];
			por_max = i;
		}

	}
	std::cout << por_min + 1 << " "<< por_max + 1;
}