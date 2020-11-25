#include <iostream>
using namespace std;

int main()
{
    int array[10];

    std::cout<<"Enter Ten Integer Values:\n";
    for(int i=0;i<10;i++){
        std::cin >> array[i];
    }
    int c=0; //temp variable
    for(int i=1;i<10;i++){
        for(int j=0;j<10-i;j++){
            if(array[j]>array[j+1]){
            c=array[j+1];
            array[j+1]=array[j];
            array[j]=c;
            }
        }
    }
 std::cout<<"The Sorted Numbers: ";
    for(int i=0;i<10;i++)
    {
        std::cout << array[i] << "\t";
    }
     std::cout<<std::endl;
    return 0;
}

