/*
 * Author: Raximberdi
 * Date:
 * Name:
 */
using namespace std;
int secondLargest(int n[], int n) {
    if (n == 1) {
        return n[0];
    } else {
        int largest =max(n[0], n[1]);
        int secondLargest =min(n[0], n[1]);
        for (int i = 2; i < n; i++) {
            if (n[i] > largest) {
                secondLargest = largest;
                largest = n[i];
            } else if (n[i] > secondLargest) {
                secondLargest = n[i];
            }
        }
        return secondLargest;
    }
}