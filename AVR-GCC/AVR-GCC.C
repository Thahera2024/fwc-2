
#include <stdio.h>

// Define NOR operation
int NOR(int a, int b)
{
    return !(a || b);
}

int main()
{
    int P, Q, R;
    int X, Y, Z, f;

    // Try all combinations of P, Q, R
    printf("P Q R | f\n");
    printf("-------------\n");

    for (P = 0; P <= 1; P++)
    {
        for (Q = 0; Q <= 1; Q++)
        {
            for (R = 0; R <= 1; R++)
            {
                // First-level NOR gates
                X = NOR(P, Q); // (P + Q)'
                Y = NOR(Q, R); // (Q + R)'
                Z = NOR(P, R); // (P + R)'

                // Final NOR gate
                f = NOR(NOR(X, Y), Z); // f = ![(X + Y + Z)]

                printf("%d %d %d | %d\n", P, Q, R, f);
            }
        }
    }

    return 0;
}
