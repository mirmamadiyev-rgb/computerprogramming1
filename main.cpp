#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;



//problem1
/*
int product(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Product = " << product(num1, num2) << endl;
    return 0;
} */


//problem2
/*
double acceleration(double v1, double v2, double t) {
    if (t == 0) {
        cout << "Time cannot be zero!" << endl;
        return 0;
    }
    return (v2 - v1) / t;
}

int main() {
    double v1, v2, t;
    cout << "Enter initial velocity (v1): ";
    cin >> v1;
    cout << "Enter final velocity (v2): ";
    cin >> v2;
    cout << "Enter time (t): ";
    cin >> t;

    cout << "Acceleration = " << acceleration(v1, v2, t) << endl;
    return 0;
} */


//problem3
/*
void fun(double r) {
    double circumference = 2 * M_PI * r;
    double area = M_PI * r * r;
    cout << "Circumference = " << circumference << endl;
    cout << "Area = " << area << endl;
}

int main() {
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;

    fun(radius);
    return 0;
} */




//p4
/*
void fun(double a, double b) {
    double perimeter = 2 * (a + b);
    double area = a * b;
    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
}

int main() {
    double a, b;
    cout << "Enter sides of rectangle: ";
    cin >> a >> b;

    fun(a, b);
    return 0;
}*/


//problem6
/*
int Factorial(int n = 1) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num == 0) {
        cout << "Factorial is = " << Factorial() << endl;
    } else {
        cout << "Factorial(" << num << ") = " << Factorial(num) << endl;
    }

    return 0;
  }     */



//p7
/*
int ged(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "ged of " << a << " and " << b << " = " << ged(a, b) << endl;
    return 0;

}    */



//problem8
/*
int maximum(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int minimum(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}
int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "Maximum: " << maximum(x, y, z) << endl;
    cout << "Minimum: " << minimum(x, y, z) << endl;

    return 0;
}  */


//problem16
/*
void printMatrix(int n) {
    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = rand() % 1001;
            cout << setw(5) << num;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter n for the n x n matrix: ";
    cin >> n;

    cout << "\nGenerated Matrix:\n";
    printMatrix(n);

    return 0;
} */

//problem17
/*
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}
int main() {
    int count = 0, number = 2;

    cout << "First 50 Even Palindrome Numbers:\n";

    while (count < 50) {
        if (number % 2 == 0 && isPalindrome(number)) {
            cout << setw(8) << number;
            count++;
            if (count % 5 == 0) cout << endl;
        }
        number++;
    }

    return 0;
}  */


//problem19
/*
void displaySortedNumbers(double a, double b, double c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << "Numbers in increasing order: "
         << a << " " << b << " " << c << endl;
}
int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    displaySortedNumbers(n1, n2, n3);
    displaySortedNumbers(10.0, 20.1, 40.2);

    return 0;
}   */

//problem20
/*
string converting(long millis) {
    long totalSeconds = millis / 1000;
    long seconds = totalSeconds % 60;
    long totalMinutes = totalSeconds / 60;
    long minutes = totalMinutes % 60;
    long hours = totalMinutes / 60;
    return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}
int main() {
    long millis;
    cout << "Enter milliseconds: ";
    cin >> millis;
    cout << "Converted time: " << converting(millis) << endl;
    return 0;
}    */

//problem21
/*
int main() {
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "The current date and time is: " << dt << endl;
    return 0;
}   */




//problem22
/*
double area(int n, double side) {
    const double PI = acos(-1);
    return (n * side * side) / (4 * tan(PI / n));
}
int main() {
    int n;
    double side;
    cout << "Enter the number of sides: ";
    cin >> n;
    cout << "Enter the side: ";
    cin >> side;
    double result = area(n, side);
    cout << "The area of the polygon is " << result << endl;
    return 0;
}   */

//problem11
/*
void displayEven(int number) {
    bool found = false;
    string result = "";
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            result = char(digit + '0') + result;
            found = true;
        }
        number /= 10;
    }
    if (found)
        cout << "Even digits: " << result << endl;
    else
        cout << "No even digits found." << endl;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    displayEven(num);
    return 0;
}  */




//problem9
/*
double sum(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double product(double a, double b) {
    return a * b;
}
double division(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}
int main() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "\nResults:\n";
    cout << "Sum = " << sum(num1, num2) << endl;
    cout << "Subtract = " << subtract(num1, num2) << endl;
    cout << "Product = " << product(num1, num2) << endl;
    cout << "Division = " << division(num1, num2) << endl;
    return 0;
}    */



