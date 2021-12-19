
#include <iostream>  ////найти номер; последнего элемента, который меньше коли - чества положительных элементов.
using namespace std;


void fillArray(int* mass, int length);
float findNum(int* mass, int length);

int main()
{
    setlocale(0, "");
    int* data;
    int n;
    cout << "Длинна массива: ";
    cin >> n;
    data = new int[n];

    fillArray(data, n);
    cout << endl << findNum(data, n);

    delete[]data;
    return 0;
}

void fillArray(int* mass, int length)
{
    cout << "Введите сам массив: ";

    for (int i = 0; i < length; i++)
    {
        cin >> mass[i];
    }
}




float findNum(int* mass, int length)
{
    int count = 0;
    float result = 0;
    for (int i = 0; i < length; i++)
    {
        if (mass[i] > 0)
        {
            count++;
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (mass[i] < count)
        {
            result = i + 1;
        }
    }
    cout << endl << "Номер элемента < длинны массива: ";

    return result;
}
