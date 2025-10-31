#include <iostream>
using namespace std;

//problem 6
/*
int main() {
    int numberofletters[26] = {0};
    char ch;
    cout << "Enter any input, if you want to stop, enter 0 ; ";
    while (true) {
        cin >> ch;
        if (ch == '0')
            break;
        if (ch >= 'a' && ch <= 'z')
            numberofletters[ch - 'a']++;
    }
    cout << "\n number of lowercase letters;\n";
    for (int i = 0; i < 26; i++) {
        if (numberofletters[i] > 0)
            cout << char('a' + i) << " ; " << numberofletters[i] << endl;
    }
    return 0;
}
*/





//problem9
/*
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int n;
    cout << "Enter number of integers; ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers; ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray(arr, 0, n - 1);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
*/



/*
//problem10
int main() {
    int n;
    cout << "Enter number of integers ; ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers ; ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool order = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            order = false;
            break;
        }
    }
    if (order)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
*/










