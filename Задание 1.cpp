#include<iostream>
#include<Windows.h>
#include<time.h>


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	srand(time(NULL));

	int masiv[10];
	int min = 0;
	int max = 0;
	int i;

	for ( i = 0; i < 10; i+=1)
	{
		 masiv[i] = rand() % 10;
		std::cout << masiv[i] << " ";
		if (max < masiv[i])
		{
			max = masiv[i];
		}
		if (min > masiv[i])
		{
			min = masiv[i];
		}


	}
	std::cout << "\n" << max << "\n" << min;


}

