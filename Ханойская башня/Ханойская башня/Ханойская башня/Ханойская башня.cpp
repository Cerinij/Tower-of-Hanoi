#include <iostream>
#include <clocale>
using namespace std;

int step = 0;

void Han(int n, int start, int point, int temp)
{
    if (n > 0)
    {
        Han(n - 1, start, temp, point);
        cout << "Шаг " << ++step << ": " << start << " => " << point << endl;
        Han(n - 1, temp, point, start);
    }
    return;
}

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите количество дисков: ";
    int n;
    cin >> n;
    int start = 1;
    int temp = 2;
    int point = 3;

    Han(n, start, point, temp);

    return 0;
}
