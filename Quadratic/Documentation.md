# Quadratic
The function and struct in this header file use the `quadratic::` namespace.

## Section 1 - Struct
The output of the `CalcQuadratic()` function is a Roots object.
Therefore to use the function you will have to create a Roots object and set its value as such:

`quadratic::Roots roots = CalcQuadratic(a, b, c);`

This struct contains two variables: x1 and x2 which store the two roots of a quadratic equation.

## Section 2 - Function

``` cpp
Roots CalcQuadratic(long long a, long long b, long long c)
```

This function returns a Roots object that contains the two roots of the quadratic function entered.
a, b and c represent the values in a quadratic equation: ax^2 + bx + c.