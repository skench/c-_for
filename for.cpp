// for.cpp: определяет точку входа для консольного приложения.
 
#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    for (int counter = 0; counter < 15; counter ++ ) // начало цикла
         cout << " " << counter; // тело цикла
    cout << endl;
    system("pause");
    return 0;
}