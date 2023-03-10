#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(std::string, std::string);
std::vector<std::string> split_to_words(std::string input);
void start();
void work_with_users(); 
void work_with_tasks();
void work_with_projects();
int get_count_of_lines(std::string filename);
std::string getline_from_a_file(std::string filename, int line_number);
//std::vector<std::string> get_all_lines(std::string path); 
bool file_is_empty(std::string filename);
bool check_gmail(std::string path, std::string gmail);
int return_user_id(std::string path, std::string gmail);
