#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int minValue = arr[0];
    int minValuePosition = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
            minValuePosition = i;
        }
    }
    cout << "Menor valor: " << minValue << endl;
    cout << "Posicao: " << minValuePosition << endl;


    return 0;
}