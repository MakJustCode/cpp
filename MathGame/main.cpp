#include <iomanip>
#include <iostream>
#include <random>

void mathGame() {
  srand(time(NULL));
  int first = rand() % 12;
  int second = rand() % 12;
  int answer, cCount = 0;
  std::string answerS = "Correct ";

  for (int i = 0; i < 1; i++) {

    std::cout << "\n\n" << first << " * " << second << " = ";
    std::cin >> answer;

    if (first * second == answer) {
      std::cout << "Correct ";
    }

    else if (first * second != answer) {
      std::cout << "Wrong ";
      answer = first * second;
      std::cout << "The correct answer is: " << answer << std::endl;
    }
  }
}

int main() {

  int problems, probCount = 1;

  std::cout << "Welcome to the multiplication math game" << std::endl
            << std::endl;

  std::cout << "Enter amount of problems : ";
  std::cin >> problems;

  for (int i = 0; i < problems; i++) {

    std::cout << "\n\nProblem " << probCount++;
    mathGame();
  }

  return 0;
}