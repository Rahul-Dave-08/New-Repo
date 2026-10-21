#include <vector>

using namespace std;

vector<int> sortedArray( vector<int> a, vector<int> b) {
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    vector<int> vec;

    while (i < n && j < m) {
        if (a[i] > b[j]) {
            if (vec.empty() || vec.back() != b[j]) {
                vec.push_back(b[j]);
            }
            j++;
        }
        else if (a[i] < b[j]) {
            if (vec.empty() || vec.back() != a[i]) {
                vec.push_back(a[i]);
            }
            i++;
        }
        else { // a[i] == b[j]
            if (vec.empty() || vec.back() != a[i]) {
                vec.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n) {
        if (vec.empty() || vec.back() != a[i]) {
            vec.push_back(a[i]);
        }
        i++;
    }

    while (j < m) {
        if (vec.empty() || vec.back() != b[j]) {
            vec.push_back(b[j]);
        }
        j++;
    }

    return vec;
}

