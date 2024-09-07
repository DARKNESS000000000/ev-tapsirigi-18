#include <iostream>
#include <ctime>   
#include <iostream> 
using namespace std;
void findMax(int* a, int* b) {
    if (*a > *b) {
        cout << "Max: " << *a << endl;
    }
    else {
        cout << "Max: " << *b << endl;
    }
}
void findSign(int* num) {
    if (*num > 0) {
        cout << "Positive" << endl;
    }
    else if (*num < 0) {
        cout << "Negative" << endl;
    }
    else {
        cout << "Zero" << endl;
    }
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void calculate(int* a, int* b, char* op) {
    switch (*op) {
    case '+': cout << (*a + *b) << endl; break;
    case '-': cout << (*a - *b) << endl; break;
    case '*': cout << (*a * *b) << endl; break;
    case '/':
        if (*b != 0)
            cout << (*a / *b) << endl;
        else
            cout << "Division by zero!" << endl;
        break;
    default: cout << "Invalid operator" << endl;
    }
}

int main() {
    cout <<"--------------------------------------1------------------------------------------------------------------";
    int x = 10, y = 20;
    findMax(&x, &y);
    cout << "--------------------------------------2------------------------------------------------------------------";
   
    cout << "--------------------------------------3------------------------------------------------------------------";

    cout << "--------------------------------------4------------------------------------------------------------------";

    cout << "--------------------------------------5------------------------------------------------------------------";


















    return 0;
}