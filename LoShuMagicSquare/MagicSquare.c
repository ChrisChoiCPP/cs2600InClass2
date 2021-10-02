#include <stdio.h>
#include <stdlib.h>


void print2DArray(int square[3][3]);
int testSquare(int square[3][3]);

int main() {
    int ifIsMagic;
    int squareNotMagic[3][3] = {
        {1, 2, 4},
        {5, 6, 8},
        {3, 7, 9}
    };

    int squareIsMagic[3][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };
    
    ifIsMagic = testSquare(squareNotMagic[3][3]);
    if (ifIsMagic != 0) {
        printf("this square is not magic.\n");

    } else {
        printf("this square is magic!!!\n");
    }
    print2DArray(testSquare(squareNotMagic[3][3]));

    ifIsMagic = testSquare(squareIsMagic[3][3]);
    if (ifIsMagic != 0) {
        printf("this square is not magic.\n");
    } else {
        printf("this square is magic!!!\n");
    }
    print2DArray(testSquare(squareIsMagic[3][3]));
}

void print2DArray(int square[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
}

int testSquare(int square[3][3]) {
    int sumR1, sumR2, sumR3,
        sumC1, sumC2, sumC3,
        sumD1, sumD2;
    static int MAGIC_NUM = 15;

    for (int i = 0; i < 3; i++) {
        sumC1 += square[i][0];
        sumC2 += square[i][0];
        sumC3 += square[i][0];
        for (int j = 0; j < 3; j++) {
            while (i = 0) {
                sumR1 += square[0][j];
            }
            while (i = 1) {
                sumR2 += square[1][j];
            }
            while (i = 2) {
                sumR3 += square[2][j];
            }
            while (i = j) {
                sumD1 += square[i][j];
            }
        }
    }

    sumD2 = square[2][0] + square[1][1] + square[0][2];

    if (sumR1 != MAGIC_NUM || sumR2 != MAGIC_NUM || sumR3 != MAGIC_NUM) {
        return 1;
    } 
    else if (sumC1 != MAGIC_NUM || sumC2 != MAGIC_NUM || sumC3 != MAGIC_NUM) {
        return 1;
    }
    else if (sumD1 != MAGIC_NUM || sumD2 != MAGIC_NUM) {
        return 1;
    }
    else {
        return 0;
    }

}