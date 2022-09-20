#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LEN 20

int myRandom(int min, int max){
    return min +  rand() % (max - min + 1);
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");

    int result[LEN];

    for(int i = 0; i < LEN; i++){
        result[i] = myRandom(-100, 100);
    }

    printf("»сходный массив: ");
    for(int i = 0; i < LEN; i++){
        printf("\n");
        printf("Ёлемент %d: %d ", i, result[i]);
    }

    return 0;
}
