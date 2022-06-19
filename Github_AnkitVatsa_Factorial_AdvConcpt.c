#include <stdio.h>
#include <string.h>

struct nfactorial
{
    int num;
    int out;
};

int takeinput(int *ptr)
{
    printf("Enter the number you want the factorial of\n");
    scanf("%d", ptr);
    return 0;
}

int factorial(int number)
{
    if (number >= 1)
    {
        return (number * factorial(number - 1)); // Recursion of Function
    }
    else
    {
        return 1;
    }
}
// function concept used
int main()
{
    struct nfactorial fact;
    // structure concept used.
    char string[200] = "\nHello!!\nThis is Ankit Vatsa (RA2111028010061), CSE Cloud Computing & K1 section.\nWelcome to Factorial Calculator.";
    // string concept used
    FILE *optr = NULL;
    takeinput(&fact.num);
    fact.out = factorial(fact.num);
    optr = fopen("C:\\testing_ankit.txt", "a");
    fprintf(optr, "%s", string);
    fprintf(optr, "\nThe value of the factorial of %d is %d.\n", fact.num, fact.out);
    printf("Thank you for using this code. Successfully written the file \"testing_ankit.txt\".");
    fclose(optr);
    // file concept used
    return 0;
}