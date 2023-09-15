#include <iostream>
#include <vector>

using namespace std;

int maxDistance(vector<int>& distances, int limit, int numTowns) {
    int n = distances.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(numTowns + 1, vector<int>(limit + 1, 0)));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= numTowns; ++j) {
            for (int k = 1; k <= limit; ++k) {
                dp[i][j][k] = dp[i - 1][j][k];  // No visitar la ciudad actual
                if (k >= distances[i - 1]) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][k - distances[i - 1]] + distances[i - 1]);
                }
            }
        }
    }

    return dp[n][numTowns][limit];
}

int main() {
    vector<int> distances = {50, 55, 57, 58, 60};
    int limit = 174;
    int numTowns = 3;

    int maxTotalDistance = maxDistance(distances, limit, numTowns);
    cout << "La máxima distancia posible es: " << maxTotalDistance << " millas" << endl;

    return 0;
}
