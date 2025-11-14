#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


//p1
/*
int findMax(int *arr, int size) {
    int maxVal = *arr;
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        if (*(ptr + i) > maxVal) {
            maxVal = *(ptr + i);
        }
    }
    return maxVal;
}
int main() {
    int heights[] = {150, 165, 172, 160, 180};
    int size = 5;
    int maxHeight = findMax(heights, size);
    cout <<maxHeight<< endl;
    return 0;
}          */



//p2
/*
int main() {
    int a, b;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    int* ptrA = &a;
    int* ptrB = &b;
    cout << "Value of a using pointer: " << *ptrA << endl;
    cout << "Value of b using pointer: " << *ptrB << endl;
    return 0;
}
*/



//p3
/*
int* findMax(int *arr, int size) {
    int *maxPtr = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i;
        }
    }
    return maxPtr;
}
int main() {
    int size;
    cout << "Enter number of data values: ";
    cin >> size;
    int *data = new int[size];
    cout << "Enter the values:\n";
    for (int i = 0; i < size; i++) {
        cin >> *(data + i);
    }
    int *maxPointer = findMax(data, size);
    cout << "Maximum value: " << *maxPointer << endl;
    cout << "Pointer to max value (address): " << maxPointer << endl;
    delete[] data;

    return 0;
}
*/



//p7
/*
float calculateAverage(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return (float)sum / size;
}
int main() {
    int scores[] = {88, 76, 90, 85, 92};
    int size = 5;
    float average = calculateAverage(scores, size);
    cout << fixed << setprecision(2);
    cout << "Average Score: " << average << endl;
    return 0;
}

*/
