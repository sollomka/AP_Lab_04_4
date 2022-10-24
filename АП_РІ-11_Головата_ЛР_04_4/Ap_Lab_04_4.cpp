#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y,R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -2)
			y = x + 3;
		else
			if (x >= -2 && x <= 4)
				y = 1. / 6 * (-R * x - 2 * R - x + 4);
			else
				if (x >= 4 && x <= (8 - R))
					y = -R;
				else
					if (x >= (8 - R) && x <= (8 + R))
						y = sqrt(pow(R, 2) - pow((x - 8), 2));
					else
						y = -R;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
