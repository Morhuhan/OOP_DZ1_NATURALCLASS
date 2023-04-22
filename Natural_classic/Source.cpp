#include "nat.h" 

using namespace std;

int main() {

    Natural n1;
    Natural n2(3);
    Natural n3((string)"123");

    // Тест конструктора строки
    cout << "" << n1.get_value() << endl << n2.get_value() << endl << n3.get_value() << endl;
    
    printf("---------------------\n");

    // Тест конструктора копии
    n1 = 123;
    n2 = n1; 
    n1.set_value(n1.get_value() + 1);
    n1.print(); // 124
    n2.print(); // 123
    printf("---------------------\n");

    // Тест оператора присваивания
    n1 = 123;
    n2 = 456;
    n2 = n1; 
    n1.set_value(n1.get_value() + 1);
    n1.print(); // 124
    n2.print(); // 123 
    printf("---------------------\n");

    // Тест операторов приведения
    int result1 = n2;
    printf("%d\n", result1); 

    n1 = 123;
     string result2 = n1; 
    printf("%s\n", result2.c_str()); 

    n1 = 123;
    double result3 = n1; 
    printf("%f\n", result3);
    printf("---------------------\n");

    // Тест перегрузки арифметических операций + - * / % 
    n1 = 10;
    n2 = 5;


    n3 = n1 + n2 + n1 + n2;
    cout << "n1 + n2 = " << n3.get_value() << endl;

    n3 = n1 - n2;
    cout << "n1 - n2 = " << n3.get_value() << endl;

    n3 = n1 * n2;
    cout << "n1 * n2 = " << n3.get_value() << endl;

    n3 = n1 / n2;
    cout << "n1 / n2 = " << n3.get_value() << endl;

    n3 = n1 % n2;
    cout << "n1 % n2 = " << n3.get_value() << endl;

    n3 = n1.operator+(5);
    cout << "n1 + 5 = " << n3.get_value() << endl;
    printf("---------------------\n");


    // Тест операторов сравнения
    n1 = 10;
    n2 = 20;
    n3 = 30;

    if (n1 < n2) {
        cout << "n1 is less than n2" << endl;
    }
    else {
        cout << "n1 is not less than n2" << endl;
    }

    if (n2 > n1) {
        cout << "n2 is greater than n1" << endl;
    }
    else {
        cout << "n2 is not greater than n1" << endl;
    }

    if (n2 <= n3) {
        cout << "n2 is less than or equal to n3" << endl;
    }
    else {
        cout << "n2 is not less than or equal to n3" << endl;
    }

    if (n2 >= n3) {
        cout << "n2 is greater than or equal to n3" << endl;
    }
    else {
        cout << "n2 is not greater than or equal to n3" << endl;
    }

    if (n1 == n2) {
        cout << "n1 is equal to n2" << endl;
    }
    else {
        cout << "n1 is not equal to n2" << endl;
    }

    if (n2 != n3) {
        cout << "n2 is not equal to n3" << endl;
    }
    else {
        cout << "n2 is equal to n3" << endl;
    }

    if (n2 != 3) {
        cout << "n2 is not equal to n3" << endl;
    }
    else {
        cout << "n2 is equal to n3" << endl;
    }

    if (n2 != (unsigned int)3) {
        cout << "n2 is not equal to n3" << endl;
    }
    else {
        cout << "n2 is equal to n3" << endl;
    }

    if (n2 != n3) {
        cout << "n2 is not equal to n3" << endl;
    }
    else {
        cout << "n2 is equal to n3" << endl;
    }

    printf("---------------------\n");

    //Тест оператора индексирования

    n1 = 2323232;

    cout << "num: " << n1[3] << endl;

    return 0;
}

