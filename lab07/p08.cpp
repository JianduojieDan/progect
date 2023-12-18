#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> nums;
    int num;
    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> num;
        nums.insert(num);
    }

    cout << "The distinct numbers are: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
