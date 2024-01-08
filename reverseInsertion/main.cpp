#include <iostream>

void REVERSE_INSERTION_SORT(int A[], int n)
{
    int i, key;
    for (int j = n-2; j >=0; j--)
    {
        key = A[j];
        i = j + 1;

        while (i < n && A[i] < key)
        {
            A[i - 1] = A[i];
            i = i + 1;
        }

        A[i - 1] = key;
    }
}

void printA(int A[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << A[i] << " | ";
    std::cout << std::endl;
}

int main()
{
    int A[] = { 13, 15, 8, 4, 10, 2, 15, 9, 14, 6};
    int n = sizeof(A) / sizeof(A[0]);

    REVERSE_INSERTION_SORT(A, n);
    printA(A, n);

    return 0;
}