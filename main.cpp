/*  #include <iostream>
using namespace std;
//problem1
int main() {
int a;
    cout << "Enter a number: ";
    cin >> a;
    if(a < 0) {cout << a << "is a negative number"<< endl; }
    else { cout << a << " is a positive number"<< endl; }
    return 0;

} */

//problem2
/*
#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << a << " is" ;
    if(a < 0) {cout  << " negative"; }
    else { cout << " positive"; }
if (a % 2 == 0) {cout << " and odd number"<< endl; }

    else { cout  << " and even number"<< endl; }

    return 0;
} */


//problem3
/*#include <iostream>
using namespace std;
int main() {
    int a, b, c;
cout << "Please enter 3 numbers : " << endl;
    cin >>a>>b>>c;
    int largest;
    if (a >= b && a >= c) {cout << a << " is the largest " ;}
    else if (b >= a && b >= c) {cout << b << " is the largest " ;}
    else   {cout << c << " is the largest " ;}
} */

//problem4
/* #include <iostream>
using namespace std;
int main() {
cout << "Enter two integer numbers : " << endl;
    int a,b;
    cin >>a>>b;
    if (a % b == 0){cout << a<<" is divisible by " <<b<<endl;}
    else cout << a<<" is not divisible by " <<b<<endl;
    return 0;
} */


//problem5
 /* #include <iostream>
using namespace std;
int main() {
    int a;
    cout << "input a year : " << endl;
cin >>a;
    if (a%4==0 && a%100!=0 && a%400==0)
    {cout <<a<<" is a leap year";}
    else {cout <<a<<" is not a leap year";}
    return 0;
} */


//problem6
/* #include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a speed of the vehicle: ";
    cin >> a;
    if (a<20){cout << "too slow" << endl;}
    else if (a>60){cout << "too fast" << endl;}
    else {cout <<"just right"<<endl;}

    return 0;
} */



//problem7
/*  #include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a>=50) {
        cout <<"Pass"<<endl;
    }
        else {cout <<"Fail"<<endl;}
    return 0;

     }    */


//problem8
 /* #include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a<0){cout <<"negative number";}
    else if (a>0){cout <<"positive number";}
    else {cout <<"zero";}
    return 0;
} */


//problem10
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    cout << "Enter traffic light color: ";
    char a= _getch();
    switch (toupper(a)) {
        case 'G': cout << "Go!" << endl; break;
        case 'Y': cout << "Get ready!" << endl; break;
        case 'R': cout << "Stop!" << endl; break;
        default: cout << "Invalid input!" << endl;
    }

    return 0;
}

