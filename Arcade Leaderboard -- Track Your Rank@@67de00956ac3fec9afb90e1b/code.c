#include <stdio.h>

void calculateRanks(int leaderboard[], int n, int scores[], int m) {
    int ranks[n];
    ranks[0] = 1;
    
    for (int i = 1; i < n; i++) {
        if (leaderboard[i] == leaderboard[i - 1]) {
            ranks[i] = ranks[i - 1];
        } else {
            ranks[i] = ranks[i - 1] + 1;
        }
    }
    
    int index = n - 1;
    for (int i = 0; i < m; i++) {
        while (index >= 0 && scores[i] >= leaderboard[index]) {
            index--;
        }
        printf("%d\n", index + 2);
    }
}

int main() {
    int n, m;
    
    printf("Enter number of leaderboard scores: ");
    scanf("%d", &n);
    int leaderboard[n];
    printf("Enter leaderboard scores: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }
    
    printf("Enter number of your game scores: ");
    scanf("%d", &m);
    int scores[m];
    printf("Enter your game scores: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &scores[i]);
    }
    
    printf("Your ranks after each game:\n");
    calculateRanks(leaderboard, n, scores, m);
    
    return 0;
}