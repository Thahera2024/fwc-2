/*#include <stdio.h>

float calculateSimpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;
    printf("enter principle,rate,time\n");
    scanf("%f %f %f", &p, &r, &t);
    float interest = calculateSimpleInterest(p, r, t);
    float amount = p + interest;

    printf("simple intrest is %f\n", interest);
    printf("totalAmount:%f\n", amount);

    return 0;
}


##include <stdio.h>
#include <math.h>

int product(int a, int n)
{
    return pow(a, n);
}
int main()
{
    int a, n;
    printf("enter a and n \n");
    scanf("%d%d", &a, &n);
    int res = product(a, n);
    printf("the value of a to the power n is %d\n", res);
    return 0;
}


#include <stdio.h>

int multiply(int a, int b)
{
    int res = 0;
    int negitive = ((a < 0) ^ (b < 0));
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    for (int i = 0; i < b; i++)
    {
        res += a;
    }
    return negitive ? -res : res;
}
int main()
{
    int a, b;
    printf("enter the inputs\n");
    scanf("%d%d", &a, &b);
    int res = multiply(a, b);
    printf("result is %d", res);
    return 0;
}



#include <stdio.h>

// Function to divide two numbers and return the quotient
int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b; // Using integer division
}

int main() {
    int a, b;

    // Taking user input
    printf("Enter dividend (a): ");
    scanf("%d", &a);

    printf("Enter divisor (b): ");
    scanf("%d", &b);

    // Calculating quotient
    int quotient = divide(a, b);

    // Displaying result
    printf("\nQuotient of %d divided by %d is: %d\n", a, b, quotient);

    return 0;
}


#include <stdio.h>

// Function to calculate remainder
int getRemainder(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a % b; // Using modulus operator to get remainder
}

int main() {
    int a, b;

    // Taking user input
    printf("Enter dividend (a): ");
    scanf("%d", &a);

    printf("Enter divisor (b): ");
    scanf("%d", &b);

    // Calculating remainder
    int remainder = getRemainder(a, b);

    // Displaying result
    printf("\nRemainder of %d divided by %d is: %d\n", a, b, remainder);

    return 0;
}


#include <stdio.h>

void multiplicationTable(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        int product = a * i;
        printf(" %d * %d = %d\n", a, i, product);
    }
}
int main()
{
    int a ;
    printf("enter the inputs");
    scanf("%d", &a);
    multiplicationTable(a);

    return 0;
}


#include <stdio.h>

// Function to check if a number is prime
int IsPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // num is divisible by i, so it's not prime
        }
    }

    return 1;  // num is prime
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime and print the result
    if (IsPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


#include <stdio.h>
#include <ctype.h> 


int fun_alpha_num(char c) {
    if (isalnum(c)) {
        return 1;  
    }
    return 0;  
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (fun_alpha_num(c)) {
        printf("The character '%c' is alphanumeric.\n", c);
    } else {
        printf("The character '%c' is not alphanumeric.\n", c);
    }

    return 0;
}



#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int sub(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int mul(int a, int b) {
    return a * b;
}

// Function to find the quotient of two numbers
int quotient(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;  // Return 0 if division by zero
    }
}

// Function to find the remainder of two numbers
int remainder(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;  // Return 0 if division by zero
    }
}

int main() {
    int num1, num2, result, choice;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display menu
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division for Quotient (/)\n");
    printf("5. Division for Remainder (%%)\n");
    printf("Enter your choice (1/2/3/4/5): ");
    scanf("%d", &choice);

    // Perform operation based on user input
    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case 2:
            result = sub(num1, num2);
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case 3:
            result = mul(num1, num2);
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case 4:
            result = quotient(num1, num2);
            if (num2 != 0) {
                printf("Result: %d / %d = %d\n", num1, num2, result);
            }
            break;
        case 5:
            result = remainder(num1, num2);
            if (num2 != 0) {
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}



#include <stdio.h>


int isLeapYear(int year) {
   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;  
    }
    return 0;  
}

int main() {
    int year;

    
    printf("Enter a year: ");
    scanf("%d", &year);

    
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


#include <stdio.h>


int getDaysInMonth(int month, int year) {
    
    if (month < 1 || month > 12) {
        return -1;  
    }
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        return 29;  // February in a leap year has 29 days
    }
    return daysInMonth[month - 1];
}

int main() {
    int month, year, days;
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    // Get the number of days in the month
    days = getDaysInMonth(month, year);

    // Check if the month is valid and print the result
    if (days == -1) {
        printf("Invalid month input.\n");
    } else {
        printf("Number of days in month %d of year %d is: %d\n", month, year, days);
    }

    return 0;
}


#include <stdio.h>

// Function to swap two integers and print their new values
void swap(int a, int b) {
    // Swapping the values using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Printing the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the swap function to swap the values
    swap(num1, num2);

    return 0;
}

#include <stdio.h>


int compareDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    
    if (y1 < y2) return 1; 
    if (y1 > y2) return 2; 

    
    if (m1 < m2) return 1;
    if (m1 > m2) return 2;

    
    if (d1 < d2) return 1;
    if (d1 > d2) return 2;

    return 0;
}

int main() {
    int d1, m1, y1, d2, m2, y2;

    
    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    int result = compareDates(d1, m1, y1, d2, m2, y2);

    if (result == 1)
        printf("First date is older.\n");
    else if (result == 2)
        printf("Second  date is older.\n");
    else
        printf("Both dates are the same.\n");

    return 0;
}



*/
