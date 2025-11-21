#include <iostream>
using namespace std;

//problem9
/*
int main() {
int a=7,b=14,c=21;
int *ptrs[3]={&a,&b,&c};
    for(int i=0;i<3;i++) {
        cout<<ptrs[i]<<endl;
    }
}
*/


//problem10
/*
int main() {
    int arr[5]={9,3,7,1,6};
    int *p=arr;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5-i-1;j++) {
            int *ptr1=p+j;
            int *ptr2=p+j+1;
            if(*ptr1>*ptr2) {
                int temp=*ptr1;
                *ptr1=*ptr2;
                *ptr2=temp;
            }
        }
    }
    for(int i=0;i<5;i++) {
        cout;
    }
}
*/


//problem11
/*
int main() {
const char* suit[4]={"hearts","diamonds","clubs","spades"};
    for(int i=0;i<4;i++) {
        cout << suit[i] << endl;
    }
}
*/



//problem12
/*
int main() {
    const char* days[3]={"mon","tue","wed"};
    for(int i=0;i<3;i++) {
        const char *p=*(days +i) ;
        cout << *(p+1)<< endl;
    }
}
*/

//problem15
/*
void greet() {
    printf("hello from greet()\n");
}
void bye() {
    printf("goodbye from bye()\n");
}

int main() {
    void (*fptr)();
    fptr = greet;
    fptr();
    fptr=bye;
    fptr();

}
*/




//problem16
/*
int add(int a, int b) {
    return a + b;
}
int multiply(int a, int b) {
    return a * b;
}
int main() {
    int (*fptr)(int,int);
    int x=3,y=4;
    fptr=add;
    printf("adding  %d\n",fptr(x,y));
fptr=multiply;
    printf("multiplying  %d\n",fptr(x,y));
}
*/




//problem15

int main () {
    int deck[4][13]={0};
    deck[2][0]=1;
    deck[3][1]=1;
    const char *ranks[13]={
        "ace","two","three","four","five","six","seven", "eight","nine","ten","jack","queen","king"
    };
    const char *suits[4]={
      "club","diamond","heart","spade"
    };
    for (int suit=0;suit<4;suit++) {
        for (int rank=0;rank<13;rank++) {
            if (deck[suit][rank]==1) {
                printf("%s of %s\n ",ranks[rank],suits[suit]);
            }
        }
    }

}