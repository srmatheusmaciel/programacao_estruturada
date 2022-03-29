

#include <stdio.h>
#include <stdlib.h>


int f(int n) {
    if (n==1)
    return 2;
    else {
        return 3 * (n-1) + f(n-1);
    }
    
}

int g(int n) {
    if (n==1 || n==2)
    return 1;
    else { 
        return 4*g(n-1)+3*g(n-2);
}
        
    }

// H(n) = 7 * h(n-1);

int h(int n) 
{
    
    int result = 1;
    
    while (n > 0)
    {
        result *= 7;
        
        n -= 1;
    }

    return result;
} 

int i(int n)
{
    int f0 = 0;
    int f1 = 1;

    for (int i = 2; i <= n; i++)
    {
        int f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }

    return f0;
}


void main()
{
    while (TRUE)
    {
        const int numVars = 4;

        int vars[numVars];

        int hasFailed = 0;

        for (int i = 0; i < numVars; i++)
        {
            int* varPtr = &vars[i];

            printf("Digite um número:\n");

            scanf_s("%d", varPtr);
            // scanf("%d", varPtr);

            if (*varPtr < 0)
            {
                hasFailed = 1;
                break;
            }
        }

        unsigned int a = vars[0];
        unsigned int b = vars[1];
        unsigned int c = vars[2];
        unsigned int d = vars[3];

        if (hasFailed == 1)
        {
            printf("\nOs números não são válidos");
            return;
        }

        int resultado = 2 * f(b) + 5 * g(a) - 3 * h(d) + 7 * i(c);

        printf("\n\nUtilizando os valores de a = %d ,b = %d ,c= %d, d= %d, temos o resultado = %d\n", a, b, c, d, resultado);
    }
}
 
