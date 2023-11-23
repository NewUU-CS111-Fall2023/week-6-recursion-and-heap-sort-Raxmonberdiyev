/*
 * Author: Raximberdi
 * Date:
 * Name:
 */
using namespace std;
void ascendingOrder(int A, int B) {
    if (A <= B) {cout << A << " ";
        ascendingOrder(A + 1, B);}
}

void descendingOrder(int A, int B) {
    if (A >= B) {cout << A << " ";
        descendingOrder(A - 1, B);
    }
}