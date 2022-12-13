#include <bits/stdc++.h>
using namespace std;

int main()
{

    int array[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    int numberOfArray = 25;
    int find = 22; // you have to find this number
    int midNumber;
    int leftNumber = 0;
    int rightNumber = numberOfArray - 1;

    while (leftNumber <= rightNumber)
    {
        midNumber = (leftNumber + rightNumber) / 2;

        if (array[midNumber] == find)
        {
            break;
        }
        if (array[midNumber] < find)
        {
            leftNumber = midNumber + 1;
        }
        else
        {
            rightNumber = midNumber - 1;
        }
    }

    cout << midNumber; // print the index number of finding number

    return 0;
}