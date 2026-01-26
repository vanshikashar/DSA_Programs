#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(int index, vector<int> &arr, vector<int> &current) {

    if (index == arr.size()) {
        cout << "{ ";
        for (int i = 0; i < current.size(); i++) {
            cout << current[i] << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Include current element
    current.push_back(arr[index]);
    generateSubsets(index + 1, arr, current);

    // Exclude current element
    current.pop_back();
    generateSubsets(index + 1, arr, current);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> current;
    cout << "Subsets:\n";
    generateSubsets(0, arr, current);

    return 0;
}

