// 1120313-01.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 絕對值

#include <iostream>
using namespace std;

int absolute(int var) {
    if (var < 0) var = -var;
    return var;
}

double absolute(double var) {
    if (var < 0) var = -var;
    return var;
}


int main()
{
    double n;
    cout << "輸入一個值： ";
    cin >> n;
    cout << n << "的絕對值為" << absolute(n) << endl;

}