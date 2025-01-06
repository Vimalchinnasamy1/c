#include <stdio.h>

void calculate_shares(int total_coins, int ben_share_percent, int blackbeard_share_percent) {
    int ben_share = (ben_share_percent / 100.0) * total_coins;
    int remaining_after_ben = total_coins - ben_share;
    int blackbeard_share = (blackbeard_share_percent / 100.0) * remaining_after_ben;
    int remaining_after_blackbeard = remaining_after_ben - blackbeard_share;
    int other_pirates_share = remaining_after_blackbeard;
    
    printf("%d\n", ben_share);
    printf("%d\n", blackbeard_share);
    printf("%d\n", other_pirates_share);
}

int main() {
    int total_coins, ben_share_percent, blackbeard_share_percent;
    scanf("%d", &total_coins);
    scanf("%d", &ben_share_percent);
    scanf("%d", &blackbeard_share_percent);
    
    calculate_shares(total_coins, ben_share_percent, blackbeard_share_percent);
    
    return 0;
}

