#include <iostream>
#include <string>
using namespace std;
int main() {
    int score = 0;
    char answer;
    cout << "------------------------------------------" << endl;
    cout << "       Welcome to the Simple Quiz!       " << endl;
    cout << "------------------------------------------" << endl;
    cout << "\n1. What is the correct extension of a C++ source file?" << endl;
    cout << "A. .c\nB. .cpp\nC. .class\nD. .py" << endl;
    cout << "Your answer (A/B/C/D): ";
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is B (.cpp)." << endl;
    }
    cout << "\n2. Which of the following is used for a single-line comment in C++?" << endl;
    cout << "A. //\nB. /*\nC. #\nD. <!--" << endl;
    cout << "Your answer (A/B/C/D): ";
    cin >> answer;
    if (answer == 'A' || answer == 'a') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is A (//)." << endl;
    }
    cout << "\n3. Which data type is used to store text/words in C++?" << endl;
    cout << "A. int\nB. float\nC. char\nD. string" << endl;
    cout << "Your answer (A/B/C/D): ";
    cin >> answer;
    if (answer == 'D' || answer == 'd') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is D (string)." << endl;
    }
    cout << "\n------------------------------------------" << endl;
    cout << "Quiz Finished!" << endl;
    cout << "Your Total Score: " << score << " out of 3" << endl;
    cout << "------------------------------------------" << endl;
    return 0;
}