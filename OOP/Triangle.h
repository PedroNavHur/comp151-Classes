#pragma once

class Triangle {
public:
	Triangle();
	~Triangle();

	void setBase(double);
	void setHeight(double);

	double getBase();
	double getHeight();

	double calcArea();

private:
	double base, height;

};
