#include <iostream>

int main()
{
	//{
	//    const int rows = 3;
	//    const int cols = 3;

	//    int arr[rows][cols]
	//    {
	//        //  0   1   2
	//           {10, 42, 12}, // row 0
	//           {99, 13, 15}, // row 1
	//           {90, 44, 51}  // row 2
	//    };

	//    // show row
	//    for (int j = 0; j < cols; ++j)
	//    {
	//        std::cout << arr[1][j] << '\n';
	//    }

	//    std::cout << "---------------\n";

	//    for (int i = 0; i < rows; ++i)
	//    {
	//        std::cout << arr[i][1] << '\n';
	//    }

	//    for (int i = 0; i < rows; ++i)
	//    {
	//        std::cout << "{ ";
	//        for (int j = 0; j < cols; ++j)
	//        {
	//            std::cout << arr[i][j];

	//            if (j != cols - 1)
	//            {
	//                std::cout << ", ";
	//            }
	//        }
	//        std::cout << " } \n";
	//    }
	//}

	
	/*{
		char square[5][5]{
		   {' ', '*', '*', '*', ' '},
		   {'*', '*', '*', '*', '*'},
		   {'*', '*', ' ', '*', '*'},
		   {'*', '*', '*', '*', '*'},
		   {' ', '*', '*', '*', ' '},
		};

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				std::cout << square[i][j] << ' ';
			}

			std::cout << '\n';
		}
	}*/

	//{
	//	const int rows = 3;
	//	const int cols = 3;

	//	int arr[rows][cols]
	//	{
	//		 // 0   1   2
	//		   {10, 42, 12}, // 0
	//		   {99, 13, 15}, // 1
	//		   {90, 44, 51}  // 2
	//	};

	//	for (int i = 0; i < rows * cols; ++i)
	//	{
	//		std::cout << arr[0][i] << '\n';
	//	}
	//}

	{
		srand(time(nullptr));
		int md_arr[3][3];

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				md_arr[i][j] = rand() % 100;
			}
		}

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				std::cout << md_arr[i][j] << '\n';
			}
		}
	}
}