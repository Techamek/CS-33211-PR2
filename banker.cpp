#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int P = 5;
const int R = 3;

int main() {
    int alloc[P][R], max[P][R], avail[R];

    ifstream input("input.txt");
    if (!input) {
        cerr << "Error opening input.txt file!" << endl;
        return 1;
    }

    string dummy;
    int tempP, tempR;
    input >> tempP >> tempR; // Reading number of processes and resources
    input >> dummy; // Skip "Allocation"

    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            input >> alloc[i][j];

    input >> dummy; // Skip "Max"
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            input >> max[i][j];

    input >> dummy; // Skip "Available"
    for (int j = 0; j < R; j++)
        input >> avail[j];

    input.close();

    int need[P][R];
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = max[i][j] - alloc[i][j];

    bool finish[P] = {false};
    vector<int> safeSequence;
    int work[R];
    for (int i = 0; i < R; i++)
        work[i] = avail[i];

    int count = 0;
    while (count < P) {
        bool found = false;
        for (int p = 0; p < P; p++) {
            if (!finish[p]) {
                int j;
                for (j = 0; j < R; j++) {
                    if (need[p][j] > work[j])
                        break;
                }
                if (j == R) {
                    for (int k = 0; k < R; k++)
                        work[k] += alloc[p][k];
                    safeSequence.push_back(p);
                    finish[p] = true;
                    found = true;
                    count++;
                }
            }
        }
        if (!found) {
            cout << "System is not in a safe state." << endl;
            return 0;
        }
    }

    cout << "System is in a safe state." << endl;
    cout << "Safe sequence is: ";
    for (int i = 0; i < safeSequence.size(); i++) {
        cout << "P" << safeSequence[i];
        if (i != safeSequence.size() - 1) cout << " -> ";
    }
    cout << endl;

    return 0;
}
