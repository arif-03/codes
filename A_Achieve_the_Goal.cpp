#include <iostream>
using namespace std;

int main() {
    int subject, max_score, min_avg;
    cin >> subject >> max_score >> min_avg;

    int sum = 0;
    for (int i = 0; i < subject - 1; i++) {
        int score;
        cin >> score;
        sum += score;
    }

    int target = subject * min_avg;
    int points_need = target - sum;

    if (points_need > max_score) {
        cout << -1 << endl;
    } else {
        cout <<points_need << endl;
    }

    return 0;
}
