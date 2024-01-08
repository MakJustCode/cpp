#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>
#include <random>

void social(int A[], int size)
{
    int i,j,k;
    //std::cout << "Social: ";
    // 555454445
    for (i=0; i < size; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const int ELEVEN =11;

    srand(time(NULL));

    const int FOUR = 4, FIVE = 5, NINE = 9;

    int two = rand() % 3, three = rand() % 9, four = rand() % 9, five = rand() % 9, six = rand() % 9, seven = rand() % 9, eight = rand() % 9;

    int A[] = {NINE, FIVE, FOUR, two, three, four, five, six, seven, eight};

    int size = sizeof(A) / sizeof(A[0]);

    for(int i=0; i < 1; i++)
    {
        social(A, size);
    }


    return 0;
}