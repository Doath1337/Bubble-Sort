

#include <iostream>
#include <vector>

int main()
{
	int NumOfElements;
	std::cin >> NumOfElements;
	std::vector<int> array(NumOfElements);
	for (int i = 0; i < array.size(); ++i) {
		int  num;
		std::cin >> num;
		array[i] = num;
	}

	for (int j = 0; j < array.size(); ++j)
	{
		
		for (int n = 0; n < array.size()-1;++n) {
			if (array[n] > array[n + 1]) {
				std::swap(array[n], array[n + 1]);

			}

		}
	}
	for (int i = 0; i < array.size(); ++i) {
		std::cout << array[i] << std::endl;
	}
}
