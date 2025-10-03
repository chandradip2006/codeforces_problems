#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& set, vector<int>& subset, int index) {
    // If index is equal to the size of the set, print the current subset
    if (index == set.size()) {
        cout << "{ ";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i] << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Include the current element in the subset
    subset.push_back(set[index]);
    generateSubsets(set, subset, index + 1);

    // Exclude the current element from the subset
    subset.pop_back();
    generateSubsets(set, subset, index + 1);
}

int main() {
    vector<int> set = {1, 2, 3};
    vector<int> subset;

    cout << "Subsets of the set are:" << endl;
    generateSubsets(set, subset, 0);

    return 0;
}
