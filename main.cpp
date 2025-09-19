#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
//problem12
/*
int main() {
    double a, b, c;
cout << "Please enter the 3 angles of triangle: ";
    cin >> a >> b >> c;
    if (a + b + c == 180) {cout << "The triangle is valid "<< endl;}
    else {cout << "The triangle is not valid "<< endl;}
return 0;

}     */

//problem13
/*
int main() {
    double a, b, c, delta,x1,x2;
    cout << "Please enter values of a , b , c of the quadratic formula: ";
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if (delta < 0) {cout <<"there is no rational root of this equation"<<endl;}
    else {cout <<"the roots of the equation are:"<<x1<<" and "<<x2<<endl;}
    return 0;
}    */


//problem14
/*
int main() {
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase alphabet" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase alphabet" << endl;
    }
    else {
        cout << "Not an alphabet" << endl;
    }

    return 0;
}          */


//problem15
/*
int main() {
    double a,b,c,d,p1,p2;
    cout << "first enter the weight and price of the first package,and then second one's: ";
    cin>>a>>b>>c>>d;
    p1=a*b;
    p2=c*d;
    if (p1<0 || p2<0) {cout <<"vaues can not be negative!"<<endl;}
else if (p1>p2){cout <<"First package is cheaper than the second one"<<endl;}
    else {cout<<"The second package is cheaper than the first one "<<endl;}
    return 0;
}    */

//problem16
/*
int main() {
    int num;
    cout << "Enter a three-digit integer: ";
    cin >> num;

    // Ensure positive for digit extraction
    int absNum = (num < 0) ? -num : num;

    if (absNum < 100 || absNum > 999) {
        cout << "Not a three-digit number!" << endl;
        return 0;
    }

    int firstDigit = absNum / 100;
    int lastDigit = absNum % 10;

    if (firstDigit == lastDigit) {
        cout << num << " is a palindrome" << endl;
    } else {
        cout << num << " is not a palindrome" << endl;
    }
return 0;
}  */


//problem17
/*
int main() {
    cout << "Please enter the letter (u for Uzbek, e for English , r for Russian , g for German) :" << endl;
    char ch = getchar();
switch (ch) {
    case 'u':cout<<"Salom"<<endl; break;
        case 'e':cout<<"hello"<<endl; break;
        case 'r':cout<<"Privet"<<endl; break;
        case 'g':cout<<"Hallo"<<endl; break;
default:cout<<"I do not know this language"<<endl; break;
}
    return 0;
}       */

//problem18
/*
int main() {
    double a,b,d;
    cout << "Enter x and y :";
    cin >> a >> b;
    d=sqrt((a*a)+(b*b));
    if (d<10){cout<<"This point lies inside the circle "<<endl;}
    else {cout<<"This point does not lie inside the circle"<<endl;}
return 0;
}        */


