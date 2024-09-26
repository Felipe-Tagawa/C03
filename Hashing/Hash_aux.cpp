#include <iostream>
using namespace std;

int hash_aux(int k, int m) {
    int result = k % m; // k mod m significa o resto da divisão, por isso a % utilizada.
    if (result < 0) {
        result += m;
    }
    return result;
}

int main() {
    int k, m;
    cin >> k >> m;
    while (k != 0 || m != 0) {
        cout << hash_aux(k, m) << endl;
        cin >> k >> m;
    }
    return 0;
}
