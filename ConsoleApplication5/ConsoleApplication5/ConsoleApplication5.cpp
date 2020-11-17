#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

int main() {
	std::ifstream in_file("in.json");
	json j;
	in_file >> j;
	
	json j2 = json::array();
	j2.push_back({ {"userId", 1}, {"task_completed" , 10} });
	j2.push_back({ {"userId", 1}, {"task_completed" , 10} });
	j2.push_back({ {"userId", 1}, {"task_completed" , 10} });

	std::cout << j2.dump(2);
}