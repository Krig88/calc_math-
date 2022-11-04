#pragma once
#include <iostream>
#include <fstream>
class Coords
{
public:
	std::ofstream fout;
	int R = 30;
	double pi = 3.1415926535;
	double x=R;	
	double y=0;
	int z=0;
	double h_t = 1.0 / 60.0;
	double h_p = (pi / 2.0) * h_t;
public:
	void create_coords();
};

