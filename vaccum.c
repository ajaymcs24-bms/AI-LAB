#include <stdio.h>

int main()
{
    int A, B, position;

    // 0 = CLEAN, 1 = DIRTY
    printf("Enter Room A status (0-CLEAN, 1-DIRTY): ");
    scanf("%d", &A);

    printf("Enter Room B status (0-CLEAN, 1-DIRTY): ");
    scanf("%d", &B);

    printf("Enter Vacuum Position (0-A, 1-B): ");
    scanf("%d", &position);

    if (position == 0)   // Vacuum at A
    {
        printf("\nVacuum at A\n");

        if (A == 1)
        {
            printf("A is DIRTY -> SUCK\n");
            A = 0;
        }

        printf("MOVE RIGHT\n");
        position = 1;

        if (B == 1)
        {
            printf("B is DIRTY -> SUCK\n");
            B = 0;
        }
    }
    else                 // Vacuum at B
    {
        printf("\nVacuum at B\n");

        if (B == 1)
        {
            printf("B is DIRTY -> SUCK\n");
            B = 0;
        }

        printf("MOVE LEFT\n");
        position = 0;

        if (A == 1)
        {
            printf("A is DIRTY -> SUCK\n");
            A = 0;
        }
    }

    printf("\nFinal State:\n");
    printf("Room A = %s\n", A == 0 ? "CLEAN" : "DIRTY");
    printf("Room B = %s\n", B == 0 ? "CLEAN" : "DIRTY");

    printf("STOP\n");

    return 0;
}
