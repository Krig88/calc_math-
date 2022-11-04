#include "Coords.h"
#include <iostream>
#include <cmath>

void Coords::create_coords() {
	fout.open("output.txt");
/*
	for (int i = 0; i < 720; i++) {
		std::cout << x << "  " << y << std::endl;
	}
	*/

	if (z == 0) {
		fout << x << " " << y << " " << -y << "\n";
		while (x > -R) {
			x -= h_p;
			y = sqrt(R * R - x * x);
			fout << x << " " << y << " " << -y << "\n";
		}

		while (x < R) {
			x += h_p;
			y = sqrt(R * R - x * x);
			fout << x << " " << y << " " << -y << "\n";
		}
	z = 1;
	}
	fout.close();
}