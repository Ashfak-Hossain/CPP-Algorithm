#include <bits/stdc++.h>

using namespace std;

// swap function

void swap(int numbers[], int i, int j)
{
    int temp = numbers[i];
    numbers[i] = numbers[j]; // for swap two integers
    numbers[j] = temp;

    // numbers[a] ^= numbers[b];
    // numbers[b] ^= numbers[a];  // Another way For Swap two integers between (a and b)
    // numbers[a] ^= numbers[b];
}

// sorting function

void sort(int arr[], int size)
{
    for (int pass = 0; pass < size; pass++)
    {
        for (int i = 1; i < size; i++)
            if (arr[i] < arr[i - 1])
                swap(arr, i, i - 1);
    }
}

// main function

int main()
{
    int array[] = {8, 2, 4, 1, 3, 7, 4, 3, 9}; // given array of random number for sort

    sort(array, 5);

    for (int number : array) // for print sorted array
        cout << number << endl;

    return 0;
}
