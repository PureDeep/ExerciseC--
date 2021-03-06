/*
 * @Author: PureDeep
 * @Date: 2020-10-28 11:42:32
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-28 13:26:23
 * @FilePath: \Exercise-CPlusPlus\127lamada.cpp
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void DisplayNums(vector<int> &DynArray)
{
    for_each(
        DynArray.begin(), DynArray.end(),
        [](int Element) { cout << Element << " "; });
    cout << endl;
}

int main()
{
    vector<int> MyNumbers;
    MyNumbers.push_back(501);
    MyNumbers.push_back(-1);
    MyNumbers.push_back(25);
    MyNumbers.push_back(-35);

    DisplayNums(MyNumbers);

    cout << "Sorting them in descending order" << endl;
    sort(
        MyNumbers.begin(), MyNumbers.end(),
        [](int Num1, int Num2) { return (Num2 < Num1); });

    DisplayNums(MyNumbers);
    return 0;
}