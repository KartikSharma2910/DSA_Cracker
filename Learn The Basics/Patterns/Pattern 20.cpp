#include <iostream>
using namespace std;
int main()
{
    int i, j, rows;
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        /* Print trailing spaces */
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (i == rows || j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}