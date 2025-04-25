#include "functions.h"
#include <algorithm>
#include <numeric>
#include <sstream>

bool read(std::istream& in, Student_info& s) {
    std::cout << "�̸��� �Է��ϼ���: ";
    if (!std::getline(in, s.name)) return false;

    std::cout << "���� ������ �Է��ϼ��� (�ִ� 5��, ���ڰ� �ƴ� �� �Է� �� ����): ";
    std::string line, token;
    std::getline(in, line);
    std::istringstream iss(line);
    s.homework.clear();

    while (s.homework.size() < 5 && iss >> token) {
        if (!std::all_of(token.begin(), token.end(), ::isdigit)) break;
        s.homework.push_back(std::stoi(token));
    }

    s.average = calculate_average(s.homework);
    return true;
}

bool did_all_hw(const Student_info& s) {
    return s.homework.size() == 5;
}

double calculate_average(const std::vector<int>& scores) {
    if (scores.empty()) return 0.0;
    return static_cast<double>(std::accumulate(scores.begin(), scores.end(), 0)) / scores.size();
}

void sort_name(std::vector<Student_info>& students) {
    std::sort(students.begin(), students.end(), [](const Student_info& a, const Student_info& b) {
        return a.name < b.name;
        });
}