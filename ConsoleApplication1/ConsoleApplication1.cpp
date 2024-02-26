// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


int main() {
    int so1, so2, tong;
    cout << "CHUONG TRINH TINH TONG\N";
        cout << "nhap so thu nhat:";
    cin >> so1;
    cout << "nhap so thu hai:";
    cin >> so2;
    tong = so1 + so2;
    cout << so1 << "+" << so2 << "="
                              << tong
                              << endl;
    return 0;
}


