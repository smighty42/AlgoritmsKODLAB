#include <stdio.h>
int main()
{
    int A;

    printf("Bir A sayisi girin: ");
    scanf("%d",&A);
    if(A != 5)
    {
        printf("%s","sayi 5'den farklidir");
    }
    else
        printf("%s","sayi 5'tir");

    return 0;

}