#include <stdio.h>
#include "my_lib/get_input.c"
void main()
{
    char *str_result = value_string("Enter a string: ");
    int int_result = value_int("Enter an integer: ");
    float float_result = value_float("Enter a float: ");
    double double_result = value_double("Enter a double: ");

    printf("\nYou entered the following values:\n");
    printf("String: %s\n", str_result);
    printf("Integer: %d\n", int_result);
    printf("Float: %f\n", float_result);
    printf("Double: %lf\n", double_result);

    free(str_result); // Deallocate memory for the string result
}