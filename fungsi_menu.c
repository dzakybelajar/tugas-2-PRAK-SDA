#include<stdio.h>
#include"header.h"

int input;

void menu_utama(){
    do
    {   
        input = 0;
        printf("\n==== MENU UTAMA ====\n");
        printf("1. Sorting Dasar\n");
        printf("2. Advanced Sorting\n");
        printf("3. Keluar\n");
        printf("Pilih Menu: ");
        scanf("%d", &input);
        while(getchar() !='\n');
        switch (input)
        {
        case 1:
            menu_sorting_dasar();
            break;
        case 2:
            menu_advanced_sorting();
            break;
        case 3:
         printf("Keluar Dari Program!");
            break;
        default:
            printf("Input Tidak Valid!\n");
            break;
        }
    } while (input != 3);
}

void menu_advanced_sorting(){
    if(baca_file() == 0) {return;}
    do
    {
        input = 0;
        printf("\n==== ADVANCED SORTING ====\n");
        printf("1. Merge Sort\n");
        printf("2. Quick Sort\n");
        printf("3. Shell Sort\n");
        printf("4. Kembali\n");
        printf("Pilih Metode: ");
        scanf("%d", &input);
        while(getchar() != '\n');
        switch (input)
        {
        case 1:
            merge_sort();
            break;
        case 2:
            quick_sort();
            break;
        case 3:
            shell_sort();
            break;
        case 4:
            printf("Kembali Ke Menu Utama!\n");
            break;
        default:
            printf("Input Tidak Valid!\n");
            break;
        }
    } while (input != 4);
}

void menu_sorting_dasar(){
    do
    {   
        input = 0;
        printf("\n==== SORTING DASAR ====\n");
        printf("1. Bubble Sort\n");
        printf("2. Insertion Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Kembali\n");
        printf("Pilih Metode: ");
        scanf("%d", &input);
        while(getchar() != '\n');
        switch (input)