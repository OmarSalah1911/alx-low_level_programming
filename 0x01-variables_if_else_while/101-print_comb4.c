#include <stdio.h>

/**
* main - entry point
* Return: always 0 (success)
*/
int main(void)
{
int i, j, k;
for (i = 0; i <= 7; i++) {
for (j = i + 1; j <= 8; j++) {
for (k = j + 1; k <= 9; k++) {
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 8 || j != 9) {
putchar(',');
putchar(' ');
}
}
}
}
return 0;
}