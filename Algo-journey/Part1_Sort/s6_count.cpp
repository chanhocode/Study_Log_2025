#include <iostream>
#include <vector>
using namespace std;

vector<int> countingSort(vector<int>& arr) {
    if (arr.empty()) return {};

    int maxVal = *max_element(arr.begin(), arr.end());
    vector<int> count(maxVal + 1, 0);
    for (int num : arr)
        count[num]++;
    vector<int> result;
    for (int i = 0; i <= maxVal; i++) {
        for (int j = 0; j < count[i]; j++)
            result.push_back(i);
    }

    return result;
}

int main() {
    vector<int> arr = { 4, 2, 2, 8, 3, 3, 1 };
    vector<int> sorted = countingSort(arr);

    for (int num : sorted)
        cout << num << " ";
}