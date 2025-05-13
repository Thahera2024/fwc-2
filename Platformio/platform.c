#include <stdio.h>

int main()
{
    int P, Q, R;
    int f;

    printf("Minterms for f(P, Q, R) = PQ + QR' + PR':\n");
    printf("Minterms where f = 1:\n");

    for (P = 0; P <= 1; P++)
    {
        for (Q = 0; Q <= 1; Q++)
        {
            for (R = 0; R <= 1; R++)
            {
                f = (P && Q) || (Q && !R) || (P && !R);
                if (f == 1)
                {
                    int minterm = (P << 2) | (Q << 1) | R;
                    printf("m%d (P=%d, Q=%d, R=%d)\n", minterm, P, Q, R);
                }
            }
        }
    }

    return 0;
}
