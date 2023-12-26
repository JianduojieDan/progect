#include<iostream>
using namespace std;

const int COLOUM_SIZE = 4;

int sum (const int a[][COLOUM_SIZE] , int rowSize){
    int total = 0;
    for (int row = 0 ; row < rowSize ;row++ ){
        for (int coloum = 0 ; coloum < COLOUM_SIZE ; coloum++){
            total += a[row][coloum];
        }
    }
    return total;
}


int main(){
    const int ROW_SIZE = 3;
    int m[ROW_SIZE][COLOUM_SIZE];
    cout << "Enter " << ROW_SIZE << " rows and " << COLOUM_SIZE << " columns: " << endl;
    for(int i = 0; i < ROW_SIZE;i++){
        for(int j = 0; j < COLOUM_SIZE ; j++){
            cin >> m[i][j];
        }
    }
    cout << "\nSum of all elements is " << sum(m, ROW_SIZE) << endl;
    return 0;
}