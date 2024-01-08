#include <iostream>

void twoSum(int A[], int size, int K) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 1; j < size; j++) {
      if (A[i] + A[j] == K && A[i] != A[j]) {
        std::cout << "Pairs: " << A[i] << "," << A[j] << std::endl;
      }
    }
  }
}

int main() {
  int A[] = {3, 6, 9, 12, 15, 4, 2, 1, 30}; // target is 15
  int K;
  int size = sizeof(A) / sizeof(A[0]);

  std::cout << "Insert Target: ";
  std::cin >> K;

  twoSum(A, size, K);

  return 0;
}