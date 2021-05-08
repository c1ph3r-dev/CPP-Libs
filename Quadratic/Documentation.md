# Quadratic
The function and struct in this header file use the `quadratic::` namespace.

## Section 1 - Struct

``` c+++
struct Roots
{
  double x1, x2;
};
```

The output of the `CalcQuadratic()` function is a Roots object.
The function is expected to be used as such:

`quadratic::Roots roots = quadratic::CalcQuadratic(a, b, c);`

## Section 2 - Function

``` cpp
Roots CalcQuadratic(long long a, long long b, long long c)
```

This function returns a Roots object that contains the two roots of the quadratic function entered.
a, b and c represent the values in a quadratic equation: ax^2 + bx + c.
