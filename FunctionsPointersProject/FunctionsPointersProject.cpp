#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

int calc(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}

int (*getOperation(char type))(int a, int b)
{
    switch (type)
    {
    case '+': return sum;
    case '*': return mult;
    default:
        return nullptr;
    }
}


int main()
{
    int n = 10;
    int* ptr = new int[10];

    cout << &n << "\n";
    cout << ptr << "\n";

    int* iptr;
    double* dptr;

    /*int (*fptr)(int, int);
    fptr = sum;
    cout << fptr(20, 30) << "\n";

    fptr = mult;
    cout << fptr(20, 30) << "\n";*/

    cout << calc(20, 30, sum) << "\n";
    
    cout << calc(20, 30, mult) << "\n";


    int (*fptr)(int, int);
    fptr = getOperation('+');
    cout << fptr(20, 50) << "\n";
    fptr = getOperation('*');
    cout << fptr(20, 50) << "\n";

}
