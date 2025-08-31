//Question 46
#include <iostream>
#include <cmath> // For std::abs

int main() {
    // Fast I/O for competitive programming
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int cumulative_p1 = 0;
    int cumulative_p2 = 0;

    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; ++i) {
        int score_p1, score_p2;
        std::cin >> score_p1 >> score_p2;

        // Update cumulative scores
        cumulative_p1 += score_p1;
        cumulative_p2 += score_p2;

        // Calculate the current lead
        int current_lead = std::abs(cumulative_p1 - cumulative_p2);

        // Check if this is the new maximum lead
        if (current_lead > max_lead) {
            max_lead = current_lead;
            
            // Determine the winner who holds this new max lead
            if (cumulative_p1 > cumulative_p2) {
                winner = 1;
            } else {
                winner = 2;
            }
        }
    }

    // Output the final winner and their maximum lead
    std::cout << winner << " " << max_lead << std::endl;

    return 0;
}