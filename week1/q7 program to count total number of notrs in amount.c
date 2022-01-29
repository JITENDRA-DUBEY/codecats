#include <stdio.h>

int main()
{
    int amount,TOTALNUMBEROFNOTES;
    int  note2000,note500, note100, note50, note20, note10, note5, note2, note1;
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("Total number of notes = \n");
        if(amount >= 2000)
    {
        note2000 = amount/2000;
        amount -= note2000 * 2000;
        printf("2000 = %d\n", note2000);
    }
    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
        printf("500 = %d\n", note500);
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
         printf("100 = %d\n", note100);
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
        printf("100 = %d\n", note100);
        printf("50 = %d\n", note50);
    }
   /*if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
        printf("20 = %d\n", note20);
    }/*/
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
         //printf("10 = %d\n", note10);
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
         //printf("5 = %d\n", note5);
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
         //printf("2 = %d\n", note2);
    }
    if(amount >= 1)
    {
        note1 = amount;
         //printf("1 = %d\n", note1);
    }
    TOTALNUMBEROFNOTES = note2000+note500+note100+note50+note20+note10+note5+note2+note1;
    printf("TOTAL NUMBER OF NOTES =%d", TOTALNUMBEROFNOTES);
    return 0;
}
