#include <iostream>

int main()
{
	const size_t len = 7;


	int arr[len]{ 10, 90, 42, 13, -10, -15, 13 };


	//{
	//    // Print values
	//    for (int i = 0; i < len; ++i)
	//    {
	//        std::cout << arr[i] << '\t';
	//    }

	//    std::cout << '\n';

	//    // Bubble sort O(N^2)
	//    for (int i = 0; i < len - 1; i++)
	//    {
	//        for (int j = 0; j < len - i - 1; ++j)
	//        {
	//            if (arr[j] < arr[j + 1])
	//            {
	//                int temp = arr[j];

	//                arr[j] = arr[j + 1];
	//                arr[j + 1] = temp;
	//            }
	//        }
	//    }

	//    // Print values
	//    for (int i = 0; i < len; ++i)
	//    {
	//        std::cout << arr[i] << '\t';
	//    }

	//    std::cout << '\n';
	//}


	//{
	//    // Print values
	//    for (int i = 0; i < len; ++i)
	//    {
	//        std::cout << arr[i] << '\t';
	//    }
	//    
	//    std::cout << '\n';

	//    // Selection sort O(N^2)
	//    for (int i = 0; i < len - 1; ++i)
	//    {
	//        int minI = i;

	//        for (int j = i + 1; j < len; ++j)
	//        {
	//            if (arr[j] < arr[minI])
	//            {
	//                minI = j;
	//            }
	//        }

	//        int temp = arr[i];
	//        
	//        arr[i] = arr[minI];
	//        arr[minI] = temp;
	//    }

	//    // Print values
	//    for (int i = 0; i < len; ++i)
	//    {
	//        std::cout << arr[i] << '\t';
	//    }

	//    std::cout << '\n';
	//}



	//{

	//	// Print values
	//	for (int i = 0; i < len; ++i)
	//	{
	//	    std::cout << arr[i] << '\t';
	//	}

	//	std::cout << '\n';
	//	
	//	// Insertion sort O(N^2)
	//	for (int i = 1; i < len; i++)
	//	{
	//		int key = arr[i];
	//		int j = i - 1;

	//		while (j >= 0 && arr[j] < key)
	//		{
	//			arr[j + 1] = arr[j];
	//			j = j - 1;
	//		}
	//		arr[j + 1] = key;
	//	}

	//	// Print values
	//	for (int i = 0; i < len; ++i)
	//	{
	//		std::cout << arr[i] << '\t';
	//	}

	//	std::cout << '\n';
	//}


	// Linear search
	//{
	//	const size_t len = 6;
	//	int arr[len]{ 29, 12, 15, 90, 15, 90 };
	//	int target;
	//	int index = -1;

	//	// print values
	//	for (int i = 0; i < len; ++i)
	//	{
	//		std::cout << arr[i] << '\t';
	//	}

	//	std::cout << '\n';

	//	std::cout << "Enter value to find -> ";
	//	std::cin >> target;

	//	for (int i = 0; i < len; ++i)
	//	{
	//		if (arr[i] == target)
	//		{
	//			index = i;
	//			break;
	//		}
	//	}

	//	if (index == -1)
	//	{
	//		std::cout << "Element not found" << '\n';
	//	}
	//	else
	//	{
	//		std::cout << "Index of element = " << index << '\n';
	//	}

	//	
	//}


	//{
	//	const size_t len = 6;
	//	int arr[len]{ 29, 12, 15, 90, 15, 90 };
	//	int target;
	//	int index = -1;

	//	// print values
	//	for (int i = 0; i < len; ++i)
	//	{
	//		std::cout << arr[i] << '\t';
	//	}

	//	std::cout << '\n';

	//	std::cout << "Enter value to find -> ";
	//	std::cin >> target;

	//	for (int i = 0, j = len - 1; i < j; ++i, --j)
	//	{
	//		/*if (arr[i] == target || arr[j] == target)
	//		{
	//			index = i;
	//		}*/

	//		if (arr[i] == target)
	//		{
	//			index = i;

	//			break;
	//		}

	//		if (arr[j] == target)
	//		{
	//			index = j;

	//			break;
	//		}
	//	}

	//	if (index == -1)
	//	{
	//		std::cout << "Element not found" << '\n';
	//	}
	//	else
	//	{
	//		std::cout << "Index of element = " << index << '\n';
	//	}


	//	int count = 0;

	//	for (int i = 0; i < len; ++i)
	//	{
	//		if (arr[i] == target)
	//		{
	//			count++;
	//		}
	//	}


	//	std::cout << "Count = " << count << '\n';
	//}

	{

		srand(time(nullptr));
		const size_t len = 10000;

		int arr[len];

		// Generate random numbers
		for (size_t i = 0; i < len; ++i)
		{
			arr[i] = rand() % 10000;
		}


		// Sort them

		for (size_t i = 0; i < len - 1; i++)
		{
			for (int j = 0; j < len - i - 1; ++j)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];

					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}

		for (size_t i = 0; i < len; ++i)
		{
			std::cout << arr[i] << '\n';
		}

		int target;

		std::cout << "Enter value to find -> ";
		std::cin >> target;

		int iterations = 0;
		int low = 0, high = len - 1;
		int index = -1;


		while (low <= high)
		{
			iterations++;

			int mid = (low + high) / 2;

			if (arr[mid] == target)
			{
				index = mid;

				break;
			}
			else if (target < arr[mid])
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}

		if (index != -1)
		{
			std::cout << "Element found at " << index << " index" << '\n';
		}
		else
		{
			std::cout << "Element not found" << '\n';
		}

		std::cout << "Iterations: " << iterations << '\n';
	}
}