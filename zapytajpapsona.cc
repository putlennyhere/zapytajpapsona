#include <iostream>
#include <string>
#include <time.h>

std::string papajpyta;

using namespace std;
int main() {
	cout<<"Zadaj pytanie Papieżowi :3"<<endl;
	cout<<"Drogi Papieżu: ";
	getline(std::cin, papajpyta);
	srand (time(NULL));
  std::string papsonmowi [6] = {"coo","jeszcze jak", "z warkoczykami albo bez warkoczyków", "ja nie wiem bo mi nie dali nigdy", "jak mi dadzą to zjem", "a po maturze chodziliśmy na kremówki"};
  int kaszanka = rand() % 6;
  std::cout<<"████████████████████████"<<endl;
	if (papajpyta.empty()) {
    std::cout<<"████████"<<papsonmowi[kaszanka]<<"████████"<<endl;
	}
	else{
		std::cout<<"████████"<<papajpyta<<"████████"<<endl;
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
