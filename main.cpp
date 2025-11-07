#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//p5
/*
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element of matrix row " << i+1 << " col " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum=sum+matrix[i][j];
        }
        cout << sum << " ";
    }
    return 0;
} */




//p6
/*
int main() {
    int n;
    cout << "Enter the number of rows and columns : ";
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element of matrix row " << i+1 << " col " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum=sum+matrix[i][i];
    }
    cout << sum;
    return 0;
}
*/


//p7
/*
int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of cols: ";
    cin >>n;
    int a[m][n], b[n][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element of matrix row " << i+1 << " col " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}   */



//p8
/*
int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of cols: ";
    cin >>n;
    int a[n][m], b[n][m], c[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter element of matrix row " << i+1 << " col " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter element of matrix row " << i+1 << " col " << j+1 << ": ";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/


//p9
/*
int main() {
    int n;
    cout << "Enter the dimension of square matrix: ";
    cin >> n;
    int c[n][n];
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element of matrix row " << i+1 << " col " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
    int b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element of matrix row " << i+1 << " col " << j+1 << ": ";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             c[i][j]=0;
            for (int k = 0; k < n; k++) {
                c[i][j]=c[i][j]+ a[i][k] * b[k][j];
            }
        }
    }
    cout << "Resultant Matrix C:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

//p11
/*
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) {
        cout << v[i];
        if(i != n - 1) cout << " ";
    }
    cout << endl;
}       */


//p12
/*
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum=sum+v[i];
        }
        cout << sum << endl;

    }
}
*/

//p13
/*
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int maxElement = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] > maxElement) {
            maxElement = v[i];
        }
    }
    cout << maxElement << endl;
}
*/

//p14
/*
int main() {
    int n, a;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> a;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == a) {
            count++;
        }
    }
    cout << count << endl;
}
*/


//p15
/*
int main() {
    int n, a;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> a;
    for(int i = 0; i < n; i++) {
        if(v[i] != a) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
}
*/



//p16
/*
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
}
*/


//p17
/*
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int x, k;
    cin >> x >> k;
    v.insert(v.begin() + k, x);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

//p18
/*
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if(n > 0) {
        cout << v[0] << " ";
        for(int i = 1; i < n; i++) {
            if(v[i] != v[i-1]) {
                cout << v[i] << " ";
            }
        }
    }
    cout << endl;
}
*/

//p19
/*
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
*/




