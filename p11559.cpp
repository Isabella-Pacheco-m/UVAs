#include <iostream>
using namespace std;

int main() {
    int numParticipants, budget, hotels, weeks;
    while (cin >> numParticipants >> budget >> hotels >> weeks) {
        int minCost = budget + 1;
        for (int i = 0; i < hotels; i++) {
            int pricePerPerson;
            cin >> pricePerPerson;
            for (int j = 0; j < weeks; j++) {
                int availableBeds;
                cin >> availableBeds;
                if (availableBeds >= numParticipants) {
                    int cost = pricePerPerson * numParticipants;
                    if (cost <= budget && cost < minCost) {
                        minCost = cost;
                    }
                }
            }
        }
        if (minCost <= budget) {
            cout << minCost << endl;
        } else {
            cout << "stay home" << endl;
        }
    }
    return 0;
}

