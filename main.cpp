#include <iostream>
using namespace std;

//problem1
/*
int main() {
int arr[5]={10,20,30,40,50};
int *ptr=arr;
    for(int i=0;i<5;i++) {
        cout<<*(ptr+i)<<endl;
    }
}
*/




//problem2
/*
int main() {
    int arr[6]={2,4,6,8,10,12};
    int *ptr=arr;
    for(int i=0;i<6;i++) {
        *(ptr+i)=*(ptr+i)*3;
    }
    for(int i=0;i<6;i++) {
            cout<<*(ptr+i)<<endl;
        }
    }
    */

//problem3
/*
int main() {
    int arr[4]={5,10,15,20,};
        int *ptr=arr;
            cout<<ptr[2]<<endl;
            cout<<*(ptr+2)<<endl;
}*/



//problem4
/*
int main() {
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    for(int i=4;i>=0;i--) {
  cout<<*(ptr+i)<<endl;
    }
}
*/


//problem6
/*
int main() {
    int arr[4]={10,20,30,40};
    int *ptr=arr;
    for(int i=0;i<4;i++) {
        cout<<"value : "<<*(ptr+i)<<" adress : "<<(ptr+1)<<endl;
    }
}       */

//problem7
/*
int main() {
    int arr[7]={11,4,7,18,5,2,9};
    int *ptr=arr;
    cout<<"even elements : "<<endl;
    for(int i=0;i<6;i++) {
        if (*(ptr +i)%2==0) {
           cout<<*(ptr+i)<<" ";
        }
    }
}
*/


