#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 4, d, e, f;

    // Evaluating logical expressions
    d = ((a > b) && (a > c));  // a is not greater than b or c, so d will be 0 (false)
    e = ((a > b) || (a > c));  // a is not greater than b, but it is greater than c, so e will be 1 (true)
    f = !(a > b);              // a is not greater than b, so ! (NOT) will make it true (1)

    // Printing results
    printf("Logical Operator AND: %d\n", d);
    printf("Logical Operator OR: %d\n", e);
    printf("Logical Operator NOT: %d\n", f);

    return 0;
}
