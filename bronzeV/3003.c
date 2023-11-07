// 성공
#include <stdio.h>

int main() {
    int chess[6] = {0};
    int chessNum[6] = {1, 1, 2, 2, 2, 8};

    for(int i =0; i<6; i++){
        scanf("%d", &chess[i]);
    }
    for(int i =0; i<6; i++){
        printf("%d ", chessNum[i] - chess[i]);
    }
}