#include<iostream>
#include<Windows.h>
#include<time.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int masiv[10];
	int shag = 0;
	double nacalo = 0;
	int cislo = 0;
	int sum = 0;
	int i;

	std::cout << "введите длину рандомма , первое число рандома и число сравнения\n";
	std::cin >> shag >> nacalo >> cislo;

	for (i = 0; i < 10; i += 1)
	{
		masiv[i] = rand() % shag + nacalo;
		std::cout << masiv[i] << " ";
		if (cislo > masiv[i])
		{
			sum += masiv[i];
		}
		


	}
	std::cout << "\n" << sum;


}