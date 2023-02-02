#include <iostream>

using namespace std;

enum Seasons {WINTER, SPRING = 3, SUMMER, AUTUNM, ONE};
//enum {ONE = 1, TWO, FOUR = 4};
enum Menu {INPUT = 1, OUTPUT, EXIT};

/*auto minF() {
    auto a = 20;
    auto b = 10;
    if (a < b) return a + 10.05;
    return "b";
}*/


int f() {
    int a = 10;
    return a + 5;
}
//auto f() -> int {}

auto myF(double x, int y) -> double {
    return x + y;
}

int (*myFunc(int arr[][5], int n))[5] {
    return &arr[n];
}


int(*(*pFunc)(int arr[][5], int n))[5];
/*auto myFunc(int arr[][5], int n) -> int(*)[5] {
    return &arr[n];
}*/

int(*(*myFunc2())(int arr[][5], int n))[5] {
    return myFunc;
}

/*auto myFunc2() -> int(*(*)(int arr[][5], int n))[5] {
    return myFunc;
}*/

auto myFunc3(float a, int b, int c) -> decltype ((a + b) / c) {
    return (a + b) / c;
}

auto myFunc4(float a, int b, int c, int d) ->
                decltype(myFunc3(a, b, c) / d) {
    return myFunc3(a, b, c) / d;
}


int myFunc5() {
    return 7;
}

int main()
{

    /*int row = 5, col = 5;
    int k = col;
    int** pArr = new int* [row];

    for (int i = 0; i < row; i++, k--) {
        pArr[i] = new int[k];
    }
    for (int i = 0, m2 = 5; i < row; i++, m2--) {
        for (int j = 0; j < m2; j++) {
            pArr[i][j] = 5;
            cout << pArr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++) {
        delete[]pArr[i];
    }
    delete[]pArr;*/

    /*int*** pArr = new int** [5];
    for (int i = 0; i < 5; i++) {
        pArr[i] = new int* [10];
        for (int j = 0; j < 10; j++) {
            pArr[i][j] = new int[50];
        }
    }
    pArr[2][0][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            delete[]pArr[i][j];
        }
        delete[]pArr[i];
    }
    delete[]pArr;*/
    
    /*int choice;
    do {
        cout << "1 - Input\n"
            << "2 - Output\n"
            << "3 - Exit\n\n";
        cin >> choice;

        switch (choice)
        {
        case INPUT:
            cout << "input\n";
            break;
        case OUTPUT:
            cout << "output\n";
            break;
        case EXIT:
            cout << "exit\n";
            break;
        default:
            break;
        }
    }*/

    /*double Var = 0.01;
    auto Var2 = 7 + 3;
    auto pVar = &Var2;

    auto myMin = minF();*/

    /*decltype (expression) variable_name;

    int x = 1.2;
    decltype (x) j;

    auto y = x;

    auto a1 = 0; // int
    decltype (a1) a2 = a1; // auto a2 = a1;
    typedef decltype (a1) ATYPE;
    ATYPE a3 = 5;

    typedef auto ATYPE2 = a1;*/

    /*int y = 10;
    int& r = y;
    auto x = r;
    decltype(r) var = r;

    int y = 10;
    const int& r = y;
    auto x = r;

    decltype(f()) varF = 5;*/

    //trailing return type (trail return type)
    //хвостовой возваращаемый тип

    cout << &myFunc5;

    int (*pFunc) ();

    pFunc = myFunc5;

    pFunc();

    pFunc = f;
    pFunc();

    int (*pFunc2[2])() { myFunc5, f };
    pFunc2[0]();
}

