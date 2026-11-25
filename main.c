#include <stdio.h>
#include <math.h>

#define EPSILON 1e-9

double task51(double x){
    double argument = 2 * x - 4;
    if (argument <= EPSILON) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double denominator = x * x - 1;
    if (fabs(denominator) < EPSILON) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double result = (log(argument) / log(3)) / denominator;
    return result;
}

double task58(double x){
    double under_root = x * x - 4 * x + 3;
    if (under_root <= EPSILON) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double result = (x - 1) / sqrt(under_root);
    return result;
}

double task17(double x, double y){
    double denominator = x + x * x / 4;
    if (fabs(denominator) < EPSILON) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double argument = (y - sqrt(fabs(x))) * (x - y / denominator);
    if (fabs(argument) < EPSILON) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double result = log(fabs(argument));
    return result;
}

double task54(double x){
    double argument = x * x - 9;
    if (argument <= EPSILON) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double logarithm = log(argument) / log(5);
    if (fabs(logarithm) < EPSILON) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double result = 1 / logarithm;
    return result;
}

double task55(double x){
    double under_root = 2 * x - 5;
    if (under_root < 0) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double denominator = x * x + 4 * x - 5;
    if (fabs(denominator) < EPSILON) {
        printf("the argument is outside the domain of the function's permissible values.\n");
        return 0;
    }
    double result = sqrt(under_root) / denominator;
    return result;
}

int main(void){
    double x = 0;
    double y = 0;
    double result = 0;
    printf("enter the value for x:");
    scanf_s("%lf", &x);
    printf("enter the value for y:");
    scanf_s("%lf", &y);

    result = task51(x);
    printf("task51:%.3lf\n", result);
    result = task58(x);
    printf("task58:%.3lf\n", result);
    result = task17(x, y);
    printf("task17:%.3lf\n", result);
    result = task54(x);
    printf("task54:%.3lf\n", result);
    result = task55(x);
    printf("task55:%.3lf\n", result);

    return 0;
}
