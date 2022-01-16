#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
double compute(char symbol, double op1, double op2)
{
    switch (symbol)
    {
    case '+':
        return op1 + op2; /* Perform addition */
    case '-':
        return op1 - op2; /* Perform subtraction */
    case '*':
        return op1 * op2; /* Perform multiplaction */
    case '/':
        return op1 / op2; /* Perform division */
    case '%':
        return (int)op1 % (int)op2; /* Perform division and gives reminder */
    case '$':
    case '^':
        return pow(op1, op2); /* Compute power */
    }
}
int main()
{
    double s[20];     /* Place for stack elements */
    double res;       /* Holds partial or final result */
    double op1;       /* First operand */
    double op2;       /* Second operand */
    int top;          /* Points to the topmost element */
    int i;            /* Index value */
    char postfix[20]; /* Input expression */
    char symbol;      /* Scanned postfix symbol */
    printf("Enter the postfix expression\n");
    scanf("%s", postfix);
    top = -1;
    for (i = 0; i < strlen(postfix); i++)
    {
        symbol = postfix[i]; /* Obtains the next character */
        if (isdigit(symbol)) /* If character is a digit or not */
            s[++top] = symbol - '0';
        else
        {
            op2 = s[top--]; /* Obtain second operand from stack */
            op1 = s[top--]; /* Obtain first operand from stack */
            /* Perform specified operation */
            res = compute(symbol, op1, op2);
            /* Push partial results on the stack */
            s[++top] = res;
        }
    }
    res = s[top--];
printf("the result is %f\n",res);
return 0;
}