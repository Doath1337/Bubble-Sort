

#include <iostream>
#include <vector>

int main()
{
	int NumOfElements;
	std::cout << "Enter number of variables: ";
	std::cin >> NumOfElements;
	std::vector<int> array(NumOfElements);
	std::cout << "Enter " << NumOfElements << " numbers separated by a SPACE: " << std::endl;
	for (int i = 0; i < array.size(); ++i) {
		int  num;
		std::cin >> num;
		array[i] = num;
	}

	for (int j = 0; j < array.size(); ++j)
	{

		for (int n = 0; n < array.size() - 1; ++n) {
			if (array[n] > array[n + 1]) {
				std::swap(array[n], array[n + 1]);

			}

		}
	}

	std::cout << std::endl;
	std::cout << "ARRAY HAS BEEN SORTED SUCCESSFULLY" << std::endl;
	for (int i = 0; i < array.size(); ++i) {
		std::cout << array[i] << std::endl;
	}
}
