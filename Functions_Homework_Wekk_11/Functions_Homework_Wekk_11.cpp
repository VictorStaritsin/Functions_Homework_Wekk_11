//#include <iostream>
//using namespace std;
///*
//Задание 1. Написать функцию, которая принимает два
//параметра: основание степени и показатель степени, и
//вычисляет степень числа на основе полученных данных.
//*/
//
//float degreeFunction(int foundation, int exponent)
//{
//    float result = 1;
//    //проверяем корректность введенных данных
//    if (foundation == 0 && exponent <= 0)
//    {
//        cout << "Введенные данные неверны" << endl;
//        return NULL;
//    }
//    //возведение в степень
//    if (exponent >= 0)
//    {
//        for (int i = exponent; i > 0; i--)
//        {
//            result *= foundation;
//        }
//    }
//    else
//    {
//        for (int i = exponent; i < 0; i++)
//        {
//            result /= foundation;
//        }
//    }
//    return result;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    int userFoundation;
//    int userExponent;
//    float result;
//
//    cout << "Программа степени X^Y" << endl <<
//        "Введите X (основа): ";
//    cin >> userFoundation;
//    cout << "Введите Y (Степень): ";
//    cin >> userExponent;
//    result = degreeFunction(userFoundation, userExponent);
//    //если не добавить "userExponent <= 0", то 0^1 тоже попадает под это условие
//    if (result == NULL && userExponent <= 0)
//    {
//        return 1;
//    }
//
//    cout << "Результат " << userFoundation << "^"
//        << userExponent << " = " << result << endl;
//    return 0;
//}


//******************************************************************//
//******************************************************************//
//******************************************************************//


//#include <iostream>
//using namespace std;
///*
//Задание 2. Написать функцию, которая получает в качестве
//параметров 2 целых числа и возвращает сумму чисел
//из диапазона между ними
//*/
//void range(int a, int b)
//{
//
//    int sum = 0;
//    if (a < b)
//    {
//        int i = a + 1;
//        while (i < b)
//        {
//            sum += i;
//            i++;
//        }
//        cout << "Сумаа =  " << sum << endl;
//    }
//    else if (a > b)
//    {
//        int i = b + 1;
//        while (i < a)
//        {
//            sum += i;
//            i++;
//        }
//        cout << "Сумаа = " << sum << endl;
//    }
//    else
//    {
//        cout << "Сумаа =  " << sum << endl;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    cout << "Программа считает сумму между двумя введеными целыми числами." << endl;
//    int c;
//    int d;
//    cout << "Введите первое число: ";
//    cin >> c;
//    cout << "Введите второе число ";
//    cin >> d;
//    range(c, d);
//    return 0;
//}


//******************************************************************//
//******************************************************************//
//******************************************************************//

//#include <iostream>
//using namespace std;
///*
//Задание 3. Число называется совершенным, если сумма
//всех его делителей равна ему самому. Напишите функцию
//поиска таких чисел во введенном интервале.
//*/
//int perfect(int x, int y)
//{
//    for (int i = x; i < y; i++)
//    {
//        int result = 0;
//        for (int j = 1; j < i; j++)
//        {
//            if ((i % j) == 0)
//            {
//                result += j;
//            }
//        }
//        if (result == i && result)
//        {
//            cout << result << " \n";
//        }
//    }
//    return 0;
//}
//void main()
//{
//    int res = perfect(0, 9000);
//}


//******************************************************************//
//******************************************************************//
//******************************************************************//

//#include <iostream>
//#include<iomanip>
//using namespace std;
///*
//Задание 4. Написать функцию, выводящую на экран
//переданную ей игральную карту.
//*/
//void showCard(int _suit, int _num)
//{
//	int filler = 6;  // заполнение пробелов setw()
//	char upLeftCorner = 218, upRightCorner = 191, horizontalLine = 196, vertivalLine = 179, downLeftCorner = 192, downRightCorner = 217; //символы контура карты
//	char  charCard[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
//	_suit += 2;
//
//	system("cls");
//	cout << upLeftCorner << setfill(horizontalLine) << setw(8) << upRightCorner << endl;             //верхняя линия
//	if (_num == 10)                               // карта Десятка
//	{
//		filler--;
//		cout << vertivalLine << "1" << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << vertivalLine << endl;
//	}
//	else
//		cout << vertivalLine << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << vertivalLine << endl;
//	cout << vertivalLine << setw(8) << vertivalLine << endl;
//	cout << vertivalLine << setw(8) << vertivalLine << endl;
//	cout << vertivalLine << setw(8) << vertivalLine << endl;
//	cout << vertivalLine << setw(8) << vertivalLine << endl;
//	cout << vertivalLine << setw(8) << vertivalLine << endl;
//	cout << vertivalLine << setw(8) << vertivalLine << endl;
//	if (_num == 10)
//		cout << vertivalLine << setfill(' ') << setw(filler) << "1" << charCard[_num - 1] << (char)_suit << vertivalLine << endl;
//	else
//		cout << vertivalLine << setfill(' ') << setw(filler) << charCard[_num - 1] << (char)_suit << vertivalLine << endl;
//	cout << downLeftCorner << setfill(horizontalLine) << setw(8) << downRightCorner << endl;            //нижняя линия
//
//}
//
//int main()
//{
//
//
//	int suit, num;  //масть и номер карты
//	while (1)
//	{
//		system("cls");
//		cout << "Please enter suit\n1 - Hearts\n2 - Diamonds\n3 - Clubs\n4 - Spades" << endl;
//		cin >> suit;
//		if (suit < 1 || suit > 4)
//		{
//			cout << "ERROR: Incorrect suit\n";
//			system("pause");
//			exit(1);
//		}
//		system("cls");
//		cout << "Enter card\n1 - Ace \n2 - Two\n3 - Three\n4 - Four\n5 - Five\n6 - Six\n7 - Seven\n8 - Eight\n9 - Nine\n10 - Ten\n11 - Jacket\n12 - Quin\n13 - King" << endl;
//		cin >> num;
//		if (num < 1 || num > 13)
//		{
//			cout << "ERROR: Incorrect card\n";
//			system("pause");
//			exit(2);
//		}
//		showCard(suit, num);
//
//		system("pause");                             //пауза перед повтором циклу
//	}
//	return 0;
//}


//******************************************************************//
//******************************************************************//
//******************************************************************//

#include <iostream>
#include <Windows.h>
using namespace std;
/*
Задание 5. Написать функцию, которая определяет,
является ли «счастливым» шестизначное число.
*/
bool searchLuckyNumber(int number)
{
    ;
    int sum6_4 = 0;
    int sum3_1 = 0;

    sum6_4 = number / 100000 + number / 10000 % 10 + number / 1000 % 10;
    sum3_1 = number / 100 % 10 + number / 10 % 10 + number % 10;

    if (sum6_4 == sum3_1)
    {
        return true;
    }

    return false;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int userNumber;

    cout << "Программа определяет, является ли число счастливым" << endl <<
        "Введите 6-значное целое число: ";
    cin >> userNumber;

    if (userNumber < 100000 || userNumber > 999999)
    {
        cout << "Введено не правильное число:" << endl;
        return 1;
    }

    cout << userNumber << (searchLuckyNumber(userNumber) ? " ДА СЧАСТЛИВОЕ" : " НЕ СЧАСТЛИВОЕ") << endl;
}