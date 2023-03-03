#include <iostream>
using namespace std;

void nhap_mang(int *arr, int n){
    for (int i=0; i < n; i++){
        cin >> arr[i];
    }
}
void xuat_mang(int *arr, int n){
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insert_sort(int *arr, int n){
    if (n == 1) return;
    else if (n == 2){
        if (arr[0] < arr[1]){
            int temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
        return;
    }
    for (int j = 2; j < n; j++){
        int key = arr[j];
        int i = 0;
        while (i < j && arr[i] > key){
            i++;
        }
        int temp = j - 1;
        while (temp >= i){
            cout <<temp << " " << arr[temp] << endl;
            arr[temp+1] = arr[temp];
            temp--;
        }
        arr[i] = key;
    }
    xuat_mang(arr, n);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    nhap_mang(arr, n);
    insert_sort(arr, n);
    return 0;
}