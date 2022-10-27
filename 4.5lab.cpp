// 4.5lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
    double R, x, y,i;
    cout << "R? ";cin >> R;
    for (i = 0;i <= 10;i++ )
    {
        cout << "x? ";cin >> x;
        cout << "y? ";cin >> y;
                
        if ((y <= 0 && x <= 0 && y >= -x - R) ||
            (y * y + x * x <= R * R && y >= 0 && x >= 0))
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    }
    for (i = 0;i <= 10;i ++)
    {
        x = R + rand() * (-R - R) / RAND_MAX;
        y = R + rand() * (-R - R) / RAND_MAX;
        cout << "tochka(" << x << ";" << y << ")";
        cout<<setw(5);

        if ((y <= 0 && x <= 0 && y >= -x - R) ||
            (y * y + x * x <= R * R && y >= 0 && x >= 0))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
        return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
