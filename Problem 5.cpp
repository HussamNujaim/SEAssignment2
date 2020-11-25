#include <iostream>

using namespace std;

int * GetMax(int array[], int size)
{
    int *max=array;
    for(int i=0;i<size;i++)
      //  for(int j=0;j<10;j++)
        {
          if(*max<array[i])
          {
              *max=array[i];
          }
        }
    return max;
}
int main()
{
    int size=1;
    std::cout << "Enter number of data values: \n";
    std::cin >>size;
    int myarray[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter value "<<i+1<<" :";
        std::cin >> myarray[i];
    }
    int *max = GetMax(myarray,10);
    std::cout<<"The max value is: "<<*max;
    return 0;
}