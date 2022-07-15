#include <iostream>

int main()
{
	int scores[10];
	int rank[10]{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int value;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Input Score : ";
		std::cin >> scores[i];
	}


	for (int i = 0; i < 10; i++)
	{
		value = scores[i];

		for (int j = 0; j < 10; j++)
		{
			if (value < scores[j])
			{
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << scores[i] << " : " << rank[i] << "µî" << std::endl;
	}
}