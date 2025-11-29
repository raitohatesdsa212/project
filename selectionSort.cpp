#include <iostream>
using namespace std;


void selectionSort(int* arr, int n){
    bool flag = false;
    for (int i=0; i<n-1; i++){
        int minv = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[minv]){
                minv = j;
                flag = true;
            }
        swap(arr[i], arr[minv]);
        }
        if (flag != true){
            break;
        }
    }
}


void outputarray(int* arr, int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
}

void inputarray(int* arr, int n){
    for (int i=0; i< n; i++){
        cin >> arr[i];
    }
}

int main(){
    int n;
    cin >> n;
    int array[n];
    inputarray(array, n);
    selectionSort(array, n);
    outputarray(array, n);
    cout << endl;
    return 0;
}