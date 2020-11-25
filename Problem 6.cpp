#include <iostream>

using namespace std;

int main()
{

    int *array = nullptr;
    std::cout << "Enter 5 numbers: ";

    array = new int[5];

    //Increment pointer AFTER entering the value and assigning it
    for (int i = 0; i < 5; i++)
    {
        std::cin >> *(array++);
    }
    std::cout << "The numbers are: ";
    array = array-(5+1);
    for (int i = 0; i < 5; i++)
    {
        std::cout<< * ++array;
    }
    return 0;
}