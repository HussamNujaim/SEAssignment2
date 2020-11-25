#include <iostream>

using namespace std;
int Add(int n1, int n2)
{
    return n1+n2;
}
int Subtract(int n1, int n2)
{
    return n1-n2;
}
int Multiply(int n1, int n2)
{
    return n1*n2;
}
double Divide(int n1, int n2)
{
    return n1/n2;
}
int Modulus(int n1, int n2)
{
    return n1%n2;
}
int main()
{
    char cont='y';
    do{
    std::cout<<"-----------\n";
    std::cout<<"1. Add\n";
    std::cout<<"2. Subtract\n";
    std::cout<<"3. Multiply\n";
    std::cout<<"4. Divide\n";
    std::cout<<"5. Modulus\n";
    std::cout<<"-----------\n";
    std::cout<<"Enter Your Choice: ";
    int choice;
    std::cin>>choice;
    std::cout<<"Enter Your Two Numbers: ";
    int n1,n2;
    std::cin>>n1>>n2;

    switch (choice) {
    case 1: { // Add:
         std::cout<<"Result= "<<Add(n1,n2);
       break;
       }
    case 2: { // Subtract:
         std::cout<<"Result= "<<Subtract(n1,n2);
       break;
       }
    case 3: { // Multiply:
         std::cout<<"Result= "<<Multiply(n1,n2);
       break;
       }
    case 4: { // Divide:
         std::cout<<"Result= "<<Divide(n1,n2);
       break;
       }
    case 5: { // Modulus:
         std::cout<<"Result= "<<Modulus(n1,n2);
       break;
       }
    default:{

        break;}
    }
    std::cout<<std::endl<<"Continue? ";
    std::cin>>cont;
    }
    while(cont=='y');
}