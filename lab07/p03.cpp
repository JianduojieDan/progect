#include<iostream>
#include<cmath>
#include <algorithm>
#include<iomanip>
using namespace std;

int find_min(int array[], int n) {
    return *min_element(array, array + n);
}

int find_max(int arr[], int n) {
    return *max_element(arr, arr + n);
}


int main (){

    int array[5] = {};
    float sum = 0.0 , sd = 0.0 , mean = 0.0;

    for(int i = 0; i < 5;i++){
        cout << "Enter the element at index " << i << ": ";
        cin >> array[i];
        sum += array[i];
    }

    mean = sum / 5;
    sd = sqrt(pow(array[0] - mean, 2) + pow(array[1] - mean, 2) + pow(array[2] - mean, 2) + pow(array[3] - mean, 2) + pow(array[4] - mean, 2)) / sqrt(5 - 1);
    cout << "Data:";
    for (int i = 0;i < 5;i++){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Min: " << find_min(array,5) << endl;
    cout << "Max: " << find_max(array,5) << endl;
    cout << "Mean: " << fixed << setprecision(2) << mean << endl;
    cout << "SD: " << fixed << setprecision(2) << sd << endl;

    return 0;
}
