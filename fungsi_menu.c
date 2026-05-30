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