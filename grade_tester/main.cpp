#include <iostream>
#include <list>
#include <limits>

int main() {
    int students = 0;
    int  grade = 0;
    int highest = 0;
    int lowest = 100;
    double average = 0.0;

    std::list<int> grades;

    while (students <= 0) {
        std::cout << "Please enter the amount of students greater than 0: ";

        if (!(std::cin >> students)|| !(std::cin.get() == '\n')) {
            std::cout << "Error: please enter a valid integer \n";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        } // end of if

    } // end of while

    for (int i = 0; i < students; i++) {

        while (true) {
            std::cout << "Student" << i + 1 << " Grade: ";

            if (!(std::cin >> grade)|| !(std::cin.get() == '\n')) {
                std::cout << "Error: please enter a valid integer \n";

                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;

            } // end of if

            if (grade < 0 ||| grade > 100) {
                std::cout << "Error: please enter a valid grade:";
                continue;

            } // end of if
            break;

        } // end of while


        // set highest
        if (grade > highest)
            highest = grade;

        //set lowest
        if (grade < lowest)
            lowest = grade;

        // add up for average
        average += grade;

        // add to list
        grades.push_back(grade);

    } // end of for

    // set average
    average /= students;

    // outputs
    std::cout << "Data: \n";
    std::cout << "Lowest grade: " << lowest << "\n";
    std::cout << "Highest grade: " << highest << "\n";
    std::cout << "Average grade: " << average << "\n";

    return 0;
} // end of main

