#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string team, winning_team;
    int goals = 0, max_goals = 0;

    for (int i = 0; i < n; i++) {
        cin >> team;
        if (++goals > max_goals) {
            max_goals = goals;
            winning_team = team;
        }
    }

    cout << winning_team << endl;

    return 0;
}
