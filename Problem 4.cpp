#include <iostream>

int main()
{
    int size;
    std::cout << "Enter the size of the triangle: ";
    std::cin>> size;
    int array[5][5];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
            {
                array[i][j] = 1;
            }
            else
            {
                array[i][j] = array[i - 1][j - 1] +
                array[i - 1][j];
            }
            std::cout << array[i][j] << " \t";
        }
        std::cout << "\n\n";
    }
    return 0;

}
