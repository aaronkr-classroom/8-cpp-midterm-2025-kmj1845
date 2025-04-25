#include <iostream>
#include <vector>
#include "functions.h"

int main() {
    int count;

    std::cout << "학생 수를 입력하세요: ";
    std::cin >> count;
    std::cin.ignore();

    std::vector<Student_info> students;
    for (int i = 0; i < count; ++i) {
        std::cout << "\n== 학생 " << i + 1 << " ==" << std::endl;
        Student_info student;

        if (read(std::cin, student)) {
            students.push_back(student);
        }
    }

    sort_name(students);

    std::cout << "\n--- 성적 요약 (이름 순 정렬) ---\n" << std::endl;

    for (int i = 0; i < students.size(); ++i) {
        std::cout << students[i].name << ": " << students[i].average << std::endl;
    }

    return 0;
}