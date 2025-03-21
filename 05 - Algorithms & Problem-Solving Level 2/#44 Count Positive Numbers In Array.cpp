// Problem: Count Postive Numbers In Array
// Coded By: @X99099 

#include <iostream>
using namespace std;

int generateNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int getNumber(string message)
{
    int number = 0;

    cout << message;
    cin >> number;

    return number;
}

void fillArray(int arr[], int length)
{
    for (int i = 0; i < length; i++) {
        arr[i] = generateNumber(-100, 100);
    }
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++) {

        cout << arr[i] << " ";

    }

    cout << endl;
}

int countPostiveNumbersInArray(const int arr[], int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] > 0) count++;
    }
    return count;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int length = getNumber("Please Enter Array Length: ");    
    cout << "\n";

    fillArray(arr, length);
    printArray(arr, length);

    cout << "Postive Numbers In The Array Is " << countPostiveNumbersInArray(arr, length) << endl;

    return 0;
}
