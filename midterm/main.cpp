#include <iostream>
#include <vector>
#include "functions.h"

int main() {
    int count;

    std::cout << "�л� ���� �Է��ϼ���: ";
    std::cin >> count;
    std::cin.ignore();

    std::vector<Student_info> students;
    for (int i = 0; i < count; ++i) {
        std::cout << "\n== �л� " << i + 1 << " ==" << std::endl;
        Student_info student;

        if (read(std::cin, student)) {
            students.push_back(student);
        }
    }

    sort_name(students);

    std::cout << "\n--- ���� ��� (�̸� �� ����) ---\n" << std::endl;

    for (int i = 0; i < students.size(); ++i) {
        std::cout << students[i].name << ": " << students[i].average << std::endl;
    }

    return 0;
}