#include <iostream>
#include <bitset> //класс, который представляет набор битов фиксированного размера
using namespace std;

// функция поразрядного сложения двоичных чисел
string addition(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); //преобразует двоичное число в int
    int n2 = bitset<8>(num2).to_ulong();

    return bitset<8>(n1 + n2).to_string(); //возвращаем сумму двух чисел в двоичном виде
}

//функция поразрядного вычитания двоичных чисел
string subtraction(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); //преобразует двоичное число в int
    int n2 = bitset<8>(num2).to_ulong();

    return bitset<8>(n1 - n2).to_string();//возвращаем разность двух чисел в двоичном виде
}

//функция поразрядного умножения двоичных чисел
string multiplication(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); //преобразует двоичное число в int
    int n2 = bitset<8>(num2).to_ulong();

    return bitset<8>(n1 * n2).to_string();//возвращаем произведение двух чисел в двоичном виде
}

//функция поразрядного деления двоичных чисел
string division(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); //преобразует двоичное число в int
    int n2 = bitset<8>(num2).to_ulong();

    return bitset<8>(n1 / n2).to_string(); //возвращаем частное двух чисел в двоичном виде
}


int main()
{
    string num1 = "1010000";
    string num2 = "1001111";

    cout << "Addition: " << addition(num1, num2) << endl;
    cout << "Subtraction: " << subtraction(num1, num2) << endl;
    cout << "Multiplication: " << multiplication(num1, num2) << endl;
    cout << "Division: " << division(num1, num2) << endl;

    return 0;

}
