#include <iostream>
#include <string>
#include <time.h>

std::string papajpyta;

int main() {
	std::cout<<"Zadaj pytanie Papieżowi :3"<<std::endl;
	std::cout<<"Drogi Papieżu: ";
	getline(std::cin, papajpyta);
	srand (time(NULL));
  std::string papsonmowi [6] = {"coo","jeszcze jak", "z warkoczykami albo bez warkoczyków", "ja nie wiem bo mi nie dali nigdy", "jak mi dadzą to zjem", "a po maturze chodziliśmy na kremówki"};
  int kaszanka = rand() % 6;
  std::cout<<"████████████████████████"<<std::endl;
	if (papajpyta.empty()) {
    std::cout<<"████████"<<papsonmowi[kaszanka]<<"████████"<<std::endl;
	}
	else{
		std::cout<<"████████"<<papajpyta<<"████████"<<std::endl;
	}
  std::cout<<"████████████████████████\n"
  "░░███░░░░░░░░░░░░░░░░\n"
	"░░░███░░░░░░░▄▄▀▀▀▀▀▀▄▄\n"
	"░░░░███░░░▄▄▀▄▄▄█████▄▄▀▄\n"
	"░░░░░██▄█▀▒▀▀▀█████████▄█▄\n"
	"░░░░░█▄██▒▒▒▒▒▒▒▒▀▒▀▒▀▄▒▀▒▀▄\n"
	"░░░░▄██▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▄\n"
	"░░░░██▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▌\n"
	"░░░▐██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐█\n"
	"░▄▄███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n"
	"▐▒▄▀██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐▌\n"
	"▌▒▒▌▒▀▒▒▒▒▒▒▄▀▀▄▄▒▒▒▒▒▒▒▒▒▒▒▒█▌\n"
	"▐▒▀▒▌▒▒▒▒▒▒▒▄▄▄▄▒▒▒▒▒▒▒▀▀▀▀▄▒▐\n"
	"░█▒▒▌▒▒▒▒▒▒▒▒▀▀▒▀▒▒▐▒▄▀██▀▒▒▒▌\n"
	"░░█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐▒▒▒▒▒▒▒▒█\n"
	"░░░▀▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▒▒▒▒▒▒▄▀\n"
	"░░░▐▒▒▒▒▒▒▒▒▒▄▀▐▒▒▒▒▒▐▒▒▒▒▄▀\n"
	"░░▄▌▒▒▒▒▒▒▒▄▀▒▒▒▀▄▄▒▒▒▌▒▒▒▐▀▀▀▄▄▄\n"
	"▄▀░▀▄▒▒▒▒▒▒▒▒▀▀▄▄▄▒▄▄▀▌▒▒▒▌░░░░░░\n"
	"▐▌░░░▀▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▀░░░░░░░\n"
	"░█░░░░░▀▄▄▒▒▒▒▒▒▒▒▒▒▒▒▄▀░█░░░░░░░\n"
	"░░█░░░░░░░▀▄▄▄▒▒▒▒▒▒▄▀░░░░█░░░░░░\n";
}
