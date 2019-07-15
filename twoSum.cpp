#include <iostream>

int main()
{
	bool notFound = true;
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int target = 5;

	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
			if (notFound == true)
				if (numbers[i] + numbers[j] == target)
				{
					std::cout << numbers[i] << ", " << numbers[j];
					notFound = false;
				}

	return 0;
}