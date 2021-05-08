#include <iostream>
#include <cmath>

#ifndef _QUADRATIC_H
#define _QUADRATIC_H

namespace quadratic
{
	struct Roots
	{
		double x1, x2;
	};

	Roots CalcQuadratic(long long a, long long b, long long c)
	{
		Roots root;

		double temp, x1, x2;
		temp = std::sqrt((b * b) - (4 * a * c));

		x1 = ((-1 * b) - temp) / (2 * a);
		x2 = ((-1 * b) + temp) / (2 * a);

		root.x1 = x1;
		root.x2 = x2;
		return root;
	}
}

#endif