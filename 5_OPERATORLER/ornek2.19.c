 
 /*
    VEYA (OR) OPERATORU DOĞRULUK TABLUSU
                                  A + B
 ______A____________B_____________A || B____
|      0      |     0        |       0      |
|_____________|______________|______________|
|      0      |     1        |       1      |
|_____________|______________|______________|
|      1      |     0        |       1      |
|_____________|______________|______________|
|      1      |     1        |       1      |
|_____________|______________|______________|
*/

#include <stdio.h>
int main()
{
    int A;
    printf("A sayisini giriniz: ");
    scanf("%d",&A);
    if(A<15 || A>25)
        printf("DOGRU");

    return 0;
}