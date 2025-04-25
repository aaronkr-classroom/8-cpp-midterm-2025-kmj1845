#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <string>
#include <iostream>

struct Student_info {
    std::string name;
    std::vector<int> homework;
    double average = 0.0;
};

bool read(std::istream& in, Student_info& s);
bool did_all_hw(const Student_info& s);
double calculate_average(const std::vector<int>& scores);
void sort_name(std::vector<Student_info>& students);

#endif