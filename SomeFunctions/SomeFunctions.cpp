#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "console/console.h"


using namespace app::console;

const HANDLE handle = GetStdHandle(STD_INPUT_HANDLE);

void set_cursor(int x, int y)
{
	COORD coord{ x, y };

	SetConsoleCursorPosition(handle, coord);
}

int main()
{

	set_cursor(5, 3);


	std::cout << "Hello";

	/*char c = '@';

	coord x = 0;
	coord y = 0;

	while (true)
	{
		key k = io.readk();
		
		coord cur_x;
		coord cur_y;

		switch (k)
		{
			case key::W:
			case key::w:
				io.mvup();
				io.gcpos(&cur_x, &cur_y);
				io.scpos(cur_x - 1, cur_y);

				break;
			case key::A:
			case key::a:
				io.mvleft();
				
				io.gcpos(&cur_x, &cur_y);
				io.scpos(cur_x - 1, cur_y);

				break;
			
			case key::S:
			case key::s:
				io.mvdown();

				io.gcpos(&cur_x, &cur_y);
				io.scpos(cur_x - 1, cur_y);

				break;
			
			case key::D:
			case key::d:
				io.mvright();

				io.gcpos(&cur_x, &cur_y);
				io.scpos(cur_x - 1, cur_y);

				break;
		}
		
		io << c;
	}*/

	/*while (true)
	{
		char s = _getch();

		std::cout << s;
	}*/
	
}