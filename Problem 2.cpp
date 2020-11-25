#include <iostream>
using namespace std;

int GetMax(int a[],int size)
{
    int max;
    max = a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]>max)
            max =a[i];
    }
    return max;
}

int GetMin(int a[],int size)
{
    int min;
    min = a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]<min)
            min =a[i];
    }
    return min;
}

int GetFrequent(int array[],int size)
{
    int frequent, maxCount, count;
    maxCount = INT_MIN;
    for(int i = 0; i< size; i++){
        count = 1;
        for(int j = i+1; j < size; j++){
            if(array[j] == array[i]){
                count++;
                if(count > maxCount){
                    maxCount = count;
                    frequent = array[j];
                }
            }
        }
    }
    return frequent;
}

int main()
{
    int size=10;
    int array[10];
    std::cout<<"Enter Ten Integer Values:\n";
    for(int i=0;i<size;i++)
    std::cin >> array[i];
    std::cout << "The MAX value is: " << GetMax(array,size) <<std::endl;
    std::cout << "The MIN value is: " << GetMin(array,size) <<std::endl;
    std::cout << "The FREQUENT value is: " << GetFrequent(array,size) <<std::endl;
    return 0;
}

