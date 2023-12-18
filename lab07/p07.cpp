#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums(101);
    int num;
    cout << "Enter the integers between 1 and 100: ";
    while (cin >> num && num != 0 && num != 0) {
        nums[num]++;
    }

    for (int i = 1; i <= 100; i++) {
        if (nums[i] > 0) {
            cout << i << " occurs " << nums[i] << " time";
            if (nums[i] > 1) {
                cout << "s";
            }
            cout << endl;
        }
    }

    return 0;
}
