#include <cstdint>
#include <iostream>
#include <windows.h>
#include <string>
#include <experimental/filesystem>
#include <fstream>
#include <filesystem>
#include <sstream>
using namespace std;
int loc;
int hp;
int maxhp;
namespace fs = std::experimental::filesystem::v1;
bool intro;
int main()
{
	cout << "█ACOT█" << endl;
	cout << "THE REALM OF THE GUARDIANS." << endl;
	char cont;
	cout << "New game(n) or continue?(c)" << endl;
	if (fs::exists("C:\ProgramData\ACOTSTUD\TROTG\sav.txt")) {
		do {
			cin.get(cont);
			if (cont == 'c') {
				intro = false;
			}
			else {
				intro = true;
			}
		} while ((cont != 'n') && (cont != 'c'));
	}
	else {
		do {
			cin.get(cont);
			if (cont == 'c') {
				cout << "Save not detected. Please start a new game." << endl;
			}
			else if (cont == 'n') {
				intro = false;
			}
		} while (cont != 'n');
	}
	if (intro == false) {
		std::cout << "???: long, long ago...\n";
		hp = 20;
		maxhp = 20;
		Sleep(2000);
		std::cout << "     there was a GODDESS.\n";
		Sleep(2000);
		std::cout << "     that GODDESS used her own life force to create two new beings,\n";
		Sleep(2000);
		std::cout << "     and she called them the GUARDIANS.\n";
		Sleep(2000);
		std::cout << "     the GODDESS, with the GUARDIANS' help, created all the life you see today.\n";
		Sleep(2000);
		std::cout << "     the GODDESS, seeing that her work was done, retreated to the heavens.\n";
		Sleep(2000);
		std::cout << "     but then...\n";
		Sleep(2000);
		std::cout << "     the GUARDIANS began fighting. and they identified as LIGHT and DARK.\n";
		Sleep(2000);
		std::cout << "     they created an army to fight against each other, and they were taught MAGIC.\n";
		Sleep(2000);
		std::cout << "     so begins the age of MAGIC.\n";
		Sleep(2000);
		std::cout << "     the GODDESS returned, and with her, the GUARDIANS stopped fighting.\n";
		Sleep(2000);
		std::cout << "     The GUARDIANS were frightened by her, and so they ceased the first WAR.\n";
		Sleep(2000);
		std::cout << "     but lately, tensions have rearisen, and the GODDESS is nowhere to be found...\n";
	}
	while (true) {
		if (loc = 0) {

		}
	}
}
void fancytext(std::string text) {
	for (int i = 0; i < size(text) - 1; i++) {
		cout << text[i];
		if (text[i] != ' ') {
			Sleep(250);
		}
	}
}void introtext(std::string text) {
	cout << text;
	Sleep(400);
}
void save() {

	fs::path filedir{ "C:\\ProgramData\\ACOTSTUD\\TROTG\\" };
	filedir /= "sav.txt";
	fs::create_directories(filedir.parent_path());
	ofstream file(filedir);
	file << loc << "\n";
	file << hp << "\n";
	file << maxhp << "\n";
}
