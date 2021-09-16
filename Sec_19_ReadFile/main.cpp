#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

int grade(std::string itemplate, std::string answers); 

struct Student {
	std::string name;
	int score;
};

int main() {
	std::ifstream in_file;
	in_file.open("responses.txt");
	
	if(!in_file) {
		std::cerr << "Failed to open the file" << std::endl;
		return 1;
	}
	
	std::string itemplate;
	in_file >> itemplate;
	
	std::vector <Student> students;
	
	std::string student_name;
	std::string answers;
	while(!in_file.eof()) {
		in_file >> student_name;
		in_file >> answers;
		Student new_student { student_name, grade(itemplate, answers)};
		students.push_back(new_student);
	}
	
	std::cout << std::setw(10) << std::left << "Student"
			  << std::setw(10) << std::right << "Score" << std::endl;
	std::cout << std::setfill('-') << std::setw(20) << "" << std::endl;
	std::cout << std::setfill(' ');
	
	double avg{0.0};
	int sum {0};
	
	for(auto s : students) {
		sum += s.score;
		std::cout << std::setw(15) << std::left << s.name
				  << std::setw(5) << std::right << s.score
				  << std::endl;
	}
	
	avg = static_cast<double> (sum) / students.size();
	
	std::cout << std::setfill('-') << std::setw(20) << "" << std::endl;
	std::cout << std::setfill(' ');
	
	std::cout << std::setw(15) << std::left << "Average score"
			  << std::setw(5) << std::right << std::setprecision(1) << std::fixed << avg
			  << std::endl;
}

int grade(std::string itemplate, std::string answers) {
	int test_grade {0};
	
	for(size_t i = 0 ; i < itemplate.length() ; i++) {
		test_grade += itemplate.at(i) == answers.at(i);
	}
	return test_grade;
}
