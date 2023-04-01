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
    /*int n = 10;
    int* ptr = new int[10];

    cout << &n << "\n";
    cout << ptr << "\n";

    int* iptr;
    double* dptr;*/

    /*int (*fptr)(int, int);
    fptr = sum;
    cout << fptr(20, 30) << "\n";

    fptr = mult;
    cout << fptr(20, 30) << "\n";*/

    /*cout << calc(20, 30, sum) << "\n";
    
    cout << calc(20, 30, mult) << "\n";*/




    //int (*fptr)(int, int);
    /*auto fptr = getOperation('+');
    cout << fptr(20, 50) << "\n";
    fptr = getOperation('*');
    cout << fptr(20, 50) << "\n";

    auto foper = [](auto a, auto b) { 
        return a - b; 
    };

    cout << calc(30, 20, foper) << "\n";

    cout << foper(50, 30) << "\n";
    cout << foper(50.50, 30.45) << "\n";
    cout << foper('A', 'P') << "\n";

    cout << calc(30, 20, [](int a, int b) {
            return a - b;
        }) << "\n";*/


    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    auto func1 = [&](auto a) {
        a += var1;
        return a;
    };

    cout << func1(30) << "\n";

    var1 = 100;

    cout << func1(30) << "\n";

    /*auto func2 = [=](auto a) {
        a += var1;
        return a;
    };

    cout << func2(30) << "\n";*/

    

    

}
