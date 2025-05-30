#include <iostream>
using namespace std;
int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    if (A <= B && A <= C)
        cout << A << " ";
    else if (B <= A && B <= C)
        cout << B << " ";
    else
        cout << C << " ";
    if (A >= B && A >= C)
        cout << A << endl;
    else if (B >= A && B >= C)
        cout << B << endl;
    else
        cout << C << endl;
}
