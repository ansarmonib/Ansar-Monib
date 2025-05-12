#include <iostream>
#include <vector>
using namespace std;

struct Dash {
    double basePay;
    double tip;
    string timeOfDay; // Optional

    double total() const {
        return basePay + tip;
    }
};

int main() {
    int n;
    cout << "How many DoorDash deliveries today? ";
    cin >> n;

    vector<Dash> dashes;
    for (int i = 0; i < n; i++) {
        Dash d;
        cout << "\nDelivery " << i + 1 << ":\n";
        cout << "Base Pay: $";
        cin >> d.basePay;
        cout << "Tip: $";
        cin >> d.tip;
        cout << "Time of Day (morning/evening): ";
        cin >> d.timeOfDay;

        dashes.push_back(d);
    }

    double totalEarned = 0;
    double totalTips = 0;

    for (const Dash& d : dashes) {
        totalEarned += d.total();
        totalTips += d.tip;
    }

    cout << "\nTotal Deliveries: " << n << endl;
    cout << "Total Earned: $" << totalEarned << endl;
    cout << "Total Tips: $" << totalTips << endl;

    return 0;
}

