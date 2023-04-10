#include <iostream>
#include <random>

const size_t ROWS = 3;
const size_t COLS = 3;

enum Cell
{
	CROSS = 1, // X
	EMPTY = 0, // ...
	CIRCLE = -1 // 0
};

enum class Player
{
	FIRST,
	SECOND
};

enum class GameStatus
{
	FIRST_WIN,
	SECOND_WIN,
	DRAW,
	CONTINUE,
};

void render(Cell** matrix)
{
	std::cout << "   ";
	for (size_t i = 0; i < ROWS; ++i)
	{
		std::cout << " " << i + 1 << " ";
	}

	std::cout << '\n';

	for (size_t i = 0; i < ROWS; ++i)
	{
		std::cout << ' ' << i + 1 << ' ';

		for (size_t j = 0; j < COLS; ++j)
		{
			std::cout << '[';
			switch (matrix[i][j])
			{
				case CROSS:
				{
					std::cout << 'X';

					break;
				}
				case EMPTY:
				{
					std::cout << ' ';

					break;
				}
				case CIRCLE:
				{
					std::cout << 'O';
				}
			}
			std::cout << ']';
		}

		std::cout << '\n';
	}
}

bool set_Cell(Cell** matrix, Player player, size_t x, size_t y)
{
	if (x >= ROWS || y >= COLS || matrix[x][y] != EMPTY)
	{
		return false;
	}

	switch (player)
	{
		case Player::FIRST:
			matrix[x][y] = CROSS;
			break;
		case Player::SECOND:
			matrix[x][y] = CIRCLE;
			break;
	}

	return true;
}

Cell** create_matrix()
{
	Cell** matrix = new Cell*[ROWS] {};

	for (size_t i = 0; i < ROWS; ++i)
	{
		matrix[i] = new Cell[COLS]{};
	}

	return matrix;
}

void free_matrix(Cell** matrix)
{
	for (size_t i = 0; i < ROWS; ++i)
	{
		delete matrix[i];
	}

	delete[] matrix;
}

GameStatus is_win(Cell** matrix)
{
	// ROWS (horizontal)
	for (size_t i = 0; i < ROWS; ++i)
	{
		size_t first_counter = 0;
		size_t second_counter = 0;

		for (size_t j = 0; j < COLS; ++j)
		{
			if (matrix[i][j] == EMPTY)
			{
				break;
			}

			if (matrix[i][j] == CROSS)
			{
				++first_counter;
			}
			
			if (matrix[i][j] == CIRCLE)
			{
				++second_counter;
			}
		}

		if (first_counter == 3)
		{
			return GameStatus::FIRST_WIN;
		}

		if (second_counter == 3)
		{
			return GameStatus::SECOND_WIN;
		}
	}
	
	// COLS (vertical)
	for (size_t i = 0; i < COLS; ++i)
	{
		size_t first_counter = 0;
		size_t second_counter = 0;

		for (size_t j = 0; j < ROWS; ++j)
		{
			if (matrix[j][i] == EMPTY)
			{
				break;
			}

			if (matrix[j][i] == CROSS)
			{
				++first_counter;
			}

			if (matrix[j][i] == CIRCLE)
			{
				++second_counter;
			}
		}

		if (first_counter == 3)
		{
			return GameStatus::FIRST_WIN;
		}

		if (second_counter == 3)
		{
			return GameStatus::SECOND_WIN;
		}
	}
	// Primary giagonal
	{
		size_t first_counter = 0;
		size_t second_counter = 0;

		for (size_t i = 0; i < ROWS; ++i)
		{
			if (matrix[i][i] == EMPTY)
			{
				break;
			}

			if (matrix[i][i] == CROSS)
			{
				++first_counter;
			}

			if (matrix[i][i] == CIRCLE)
			{
				++second_counter;
			}
		}

		if (first_counter == 3)
		{
			return GameStatus::FIRST_WIN;
		}

		if (second_counter == 3)
		{
			return GameStatus::SECOND_WIN;
		}
	}
	
	// Secondary giagonal
	{
		size_t first_counter = 0;
		size_t second_counter = 0;

		for (size_t i = 0, j = COLS; i < ROWS && j-- > 0; ++i)
		{
			if (matrix[i][j] == EMPTY)
			{
				break;
			}

			if (matrix[i][j] == CROSS)
			{
				++first_counter;
			}

			if (matrix[i][j] == CIRCLE)
			{
				++second_counter;
			}
		}

		if (first_counter == 3)
		{
			return GameStatus::FIRST_WIN;
		}

		if (second_counter == 3)
		{
			return GameStatus::SECOND_WIN;
		}
	}

	for (size_t i = 0; i < ROWS; ++i)
	{
		for (size_t j = 0; j < COLS; ++j)
		{
			if (matrix[i][j] == EMPTY)
			{
				return GameStatus::CONTINUE;
			}
		}
	}

	return GameStatus::DRAW;
}

void run()
{
	Cell** matrix = create_matrix();
	Player player = Player::FIRST;
	bool flag = true;

	while (flag)
	{
		system("cls");
		render(matrix);

		size_t x;
		size_t y;

		switch (player)
		{
			case Player::FIRST:
			{
				std::cout << "First player:" << '\n';
				break;
			}
				
			case Player::SECOND:
			{
				std::cout << "Second player:" << '\n';
				break;
			}
			default:
				break;
		}

		std::cout << "Enter x -> ";
		std::cin >> x;
		
		std::cout << "Enter y -> ";
		std::cin >> y;

		if (!set_Cell(matrix, player, x - 1, y - 1))
		{
			std::cout << "Incorrect input" << '\n';

			continue;
		}

		GameStatus status = is_win(matrix);

		switch (status)
		{
			case GameStatus::FIRST_WIN:
			{
				system("cls");
				render(matrix);
				std::cout << "First player win!" << '\n';
				flag = false;
				break;
			}
			case GameStatus::SECOND_WIN:
			{
				system("cls");
				render(matrix);
				std::cout << "Second player win!" << '\n';
				flag = false;

				break;
			}

			case GameStatus::DRAW:
			{
				system("cls");
				render(matrix);
				std::cout << "Draw!" << '\n';
				flag = false;

				break;
			}
		}

		if (player == Player::FIRST)
		{
			player = Player::SECOND;
		}
		else
		{
			player = Player::FIRST;
		}
	}

	free_matrix(matrix);
}

int main()
{
	
	run();
	/*set_Cell(matrix, Player::FIRST, 0, 1);
	set_Cell(matrix, Player::FIRST, 1, 1);

	render(matrix);

	std::cout << (int)is_win(matrix);*/

	/*{
		{1, 1, 0},
		{0, -1, 0},
		{0, -1, 0},
	}*/
	// [X][X][X]
	// [ ][ ][ ]
	// [ ][ ][ ]



	// render(matrix);
}