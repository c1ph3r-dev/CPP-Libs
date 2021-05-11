#include <iostream>
#include <cmath>

#ifndef _QUADRATIC_H
#define _QUADRATIC_H

namespace quadratic
{
	struct Roots
	{
		double x1, x2;

		friend std::ostream& operator<<(std::ostream& os, Roots& root);
	};

	std::ostream& operator<<(std::ostream& os, Roots &root)
	{
		return std::cout << "x1: " << root.x1 << ", x2: " << root.x2;
	}

	Roots CalcQuadratic(long long a, long long b, long long c)
	{
		Roots root{};

		double temp = std::sqrt((b * b) - (4 * a * c));

		root.x1 = ((-1 * b) - temp) / (2 * a);
		root.x2 = ((-1 * b) + temp) / (2 * a);

		return root;
	}
}

#endif