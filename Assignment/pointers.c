/* #include <stdio.h>
void main()
{
    int a = 42;
    printf(" add of variable %p\n", &a);
    int *p;
    p = &a;
    printf("add of pointer %p\n", &p);
    printf("%d\n", a);
    printf("%d\n", sizeof(a));
    printf("%d", sizeof(*p));
}

#include <stdio.h>
void main()
{
    int a = 4, b = 5;
    int *p1 = &a;
    int *p2 = &b;
    int sum = *p1 + *p2;
    printf("%d\n", *p1);
    printf("%d\n", *p2);
    printf(" sum is %d", sum);
}


#include <stdio.h>
void main()
{
    int ch1, ch2;
    int *p1 = &ch1;
    int *p2 = &ch2;
    printf("enter ch1");
    scanf(" %c", p1);
    printf("enter ch2");
    scanf(" %c", p2);
    if (*p1 > *p2)
    {
        printf("'%c' has a higher ASCII value (%d) than '%c' (%d)\n", *p1, *p1, *p2, *p2);
    }
    else if (*p2 > *p1)
    {
        printf("'%c' has a higher ASCII value (%d) than '%c' (%d)\n", *p2, *p2, *p1, *p1);
    }
    else
    {
        printf("Both characters '%c' and '%c' have the same ASCII value (%d)\n", *p1, *p2, *p1);
    }
}

#include <stdio.h>
void main()
{
    char ch1, ch2;
    char *ptr1 = &ch1;
    char *ptr2 = &ch2;
    printf("enter the 2 char");
    scanf(" %c", ptr1);
    scanf("%c", ptr2);
    if (*ptr1 > *ptr2)
    {
        printf("character '%c' has a higher ascii value (%d)than '%c' (%d).\n", *ptr1, *ptr1, *ptr2, *ptr2);
    }
    else if (*ptr2 > *ptr1)
    {
        printf("Character '%c' has a higher ASCII value (%d) than '%c' (%d).\n", *ptr2, *ptr2, *ptr1, *ptr1);
    }
    else
    {
        printf("Both characters '%c' and '%c' have the same ASCII value (%d).\n", *ptr1, *ptr2, *ptr1);
    }
}

#include <stdio.h>
void main()
{
    int x = 20, y = 30, z = 40;
    int *ptr;
    ptr = &x;
    printf("value of x using pointer: %d\n", *ptr);
    ptr = &y;
    printf("value of y using pointer: %d\n", *ptr);
    ptr = &z;
    printf("value of z using pointer: %d\n", *ptr);
}

#include <stdio.h>
int main()
{
    int *a, *b, *c;
    int x = 5;
    a = &x;
    b = &x;
    c = &x;
    printf("initial value of num is %d\n", x);
    printf("Value via a = %d\n", *a);
    printf("Value via b = %d\n", *b);
    printf("Value via c = %d\n\n", *c);

    x = 100;
    printf("x=%d, *a=%d,*b=%d,*c=%d", x, *a, *b, *c);

    *a = 200;
    printf("x=%d, *a=%d,*b=%d,*c=%d", x, *a, *b, *c);

    return 0;
}

#include <stdio.h>
int main()
{
    int *p1;
    float *p2;
    char *p3;
    printf("%d\n", sizeof(p1));
    printf("%d\n", sizeof(p2));
    printf("%d\n", sizeof(p3));
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b, c;
    int *p1, *p2, *p3;
    printf("enter the values");
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    int biggest;
    if (*p1 > *p2 && *p1 > *p3)
    {
        biggest = *p1;
    }
    else if (*p2 >= *p1 && *p2 >= *p3)
    {
        biggest = *p2;
    }
    else
    {
        biggest = *p3;
    }
    printf("The biggest number is: %d\n", biggest);

    return 0;
}

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter three integers (x, y, z):\n");
    scanf("%d %d %d", &x, &y, &z);

    int *p1, *p2, *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;
    int temp = *p1;
    *p1 = *p2;
    *p2 = *p3;
    *p3 = temp;
    printf("x=%d\n", x);
    printf("x=%d\n", y);
    printf("x=%d\n", z);
}*/

#include <stdio.h>
int main()
{
    int arr[10] = {10, 22, 3, 34, 56, 7, 11, 45, 66, 89};
    int *ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d]\t%p\t%d\n", i, (void *)(ptr + i), *(ptr + i));
    };

    return 0;
}