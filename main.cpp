#include <iostream>
#include <fstream>
#include <string>

int main(){

	std::ifstream txt_1;
	txt_1.open("File1.txt");

	std::ofstream txt_2;
	txt_2.open("File2.txt");

	if (!txt_1.is_open()){
		std::cerr << "Error" << std::endl;
		exit(1);
	}
	
	while (txt_1.good()){
		std::string temp;
		std::getline(txt_1,temp);
		if (temp.find("Armenia") != std::string::npos){
			txt_2 << temp << std::endl;
		}
	}
	
	txt_1.close();
	txt_2.close();

	return 0;
}