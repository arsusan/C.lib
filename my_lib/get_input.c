#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *value_string(const char *input);
int value_int(const char *input);
float value_float(const char *input);
double value_double(const char *input);

char *value_string(const char *input)
{
    printf("%s", input);
    char *result = malloc(100);
    scanf("%s", result);
    return result;
}

int value_int(const char *input)
{
    printf("%s", input);
    int result;
    scanf("%d", &result);
    return result;
}
float value_float(const char *input)
{
    printf("%s", input);
    float result;
    scanf("%f", &result);
    return result;
}
double value_double(const char *input)
{
    printf("%s", input);
    double result;
    scanf("%lf", &result);
    return result;
}
