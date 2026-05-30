#define MAX_INT 1000
#define MAX_WORD 3000
void menu_utama();
void menu_sorting_dasar();
void menu_advanced_sorting();
void acak_data(int);
int InputTampilanSebelumAtauSetelahSorting(int);
void TampilanSebelumAtauSetelahSorting(int, int);
void bubble_sort();
void insertion_sort();
void selection_sort();
int baca_file();
void merge_sort();
void merge(int, int, int);
void merge_sort_recursive(int, int);
void quick_sort();
void swap(char a[], char b[]);
int quick_sort_partition(int low, int high);
void quick_sort_recursive(int low, int high);
void shell_sort();