/*Задание 2. Калькулятор стоимости товара
Что нужно сделать:
Напишите калькулятор для расчёта полной стоимости товара. 
Она рассчитывается так: стоимость товара + стоимость доставки – скидка. 
Все значения сохраните в переменные и выводите в нужных местах, имитируя ввод 
данных (речь про cout).
*/
#include <iostream>

using namespace std;

int main() {
    
    int productPrice = 100;
    int delivery = 20;
    int discount = 15; 

    int fullPrice =  productPrice + delivery - discount;
    cout << fullPrice << endl;
    return 0;
}