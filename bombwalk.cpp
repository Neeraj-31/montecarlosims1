#include <iostream>
#include <random>
#include <vector>
#include <set>
int main() {
    
    std::set<std::pair<int, int>> bomb_locations = {
        {5, 5}, {-3, 7}, {10, -2}, {-6, -6}
    };

    const int NUM_TRIALS = 100000;
    const int MAX_STEPS = 100;
    const double BLAST_PROB = 0.3;

    std::mt19937 gen(42);
    std::uniform_real_distribution<> uni(0.0, 1.0);
    std::uniform_int_distribution<> dir(0, 7);

    int total_explosions = 0;

    for (int i = 0; i < NUM_TRIALS; ++i) {
        int x = 0, y = 0;
        bool exploded = false;

        for (int t = 0; t < MAX_STEPS; ++t) {
            // Movement logic
            int d = dir(gen);
            if (d == 0 || d == 4 || d == 6) x++;
            if (d == 1 || d == 5 || d == 7) x--;
            if (d == 2 || d == 4 || d == 5) y++;
            if (d == 3 || d == 6 || d == 7) y--;

            
            if (bomb_locations.count({x, y})) {
                if (uni(gen) < BLAST_PROB) {
                    exploded = true;
                    break; 
                }
            }
        }
        if (exploded) total_explosions++;
    }

    std::cout << "Probability of explosion: " << (double)total_explosions / NUM_TRIALS * 100 << "%\n";

    return 0;
}
