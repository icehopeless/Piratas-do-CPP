#include "menu.hpp"


int main() {
	srand(time(NULL));
	GeneralGame *generalgame = new GeneralGame();
	generalgame->run_menu();
	delete generalgame;
	generalgame = nullptr;
	return EXIT_SUCCESS;
}
