#include <iostream>
#include <vector>
using namespace std;


void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

//int main() {
//    vector<int> data = { 5,1,4,2,8 };
//    bubbleSort(data);
//
//    for (int num : data)
//        cout << num << " ";
//}