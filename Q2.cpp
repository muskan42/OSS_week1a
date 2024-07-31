#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int num : arr) {
        sum += num;
    }

    double average = static_cast<double>(sum) / n;

    cout << "The average is: " << average << endl;

    return 0;
}
