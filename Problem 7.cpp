#include <iostream>

using namespace std;

int * sort(int * array, int size)
{
    int * a  = array;
    int temp;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
        {
          if(a[i]<array[j])
          {
              temp;=a[i];
              a[i]=array[j];
              array[j]=temp;;
          }
        }
    return a;
}
int main()
{
    int array [10];
    std::cout<<"Enter Ten Integer Values:\n";
    for(int i=0;i<10;i++)
    std::cin >> array[i];

    sort(array,10);
    for(int i=0;i<10;i++)
        std::cout<<array[i]<<" ";
    return 0;
}