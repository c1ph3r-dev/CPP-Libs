# Quadratic
The function and struct in this header file use the `quadratic::` namespace.

## Section 1 - Struct

``` c+++
struct Roots
{
  double x1, x2;
};
```

This struct contains two doubles that store the two root values of a quadratic equation.

## Section 2 - Function

``` cpp
Roots CalcQuadratic(long long a, long long b, long long c)
```

This function returns a Roots object that contains the two roots of the quadratic function entered.    
a, b and c represent the values in a quadratic equation: ax^2 + bx + c.

The output of the function should be stored in a Roots object, example:

``` cpp
long long a = 1, b = 2, c = 3;
quadratic::Roots roots = quadratic::CalcQuadratic(a, b, c);
```
