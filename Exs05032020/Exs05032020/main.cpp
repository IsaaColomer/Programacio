#include <iostream>
#include <stdio.h>

class Pixel
{
private:
	int r;
	int g;
	int b;
public:
	Pixel()
	{
		r = 0;
		g = 0;
		b = 0;
	}

	Pixel(int R, int G, int B)
	{
		r = R;
		g = G;
		b = B;
	}


	int red() const { return r; }
	int green() const { return g; }
	int blue() const { return b; }

	Pixel mix(const Pixel& pixel)const
	{
		Pixel res;
		res.r = (r + pixel.r) / 2;
		res.g = (g + pixel.g) / 2;
		res.b = (b + pixel.b) / 2;

		return res;
	}
};

int main()
{
	Pixel black;
	Pixel blue(0, 0, 255);
	Pixel red(255, 0, 0);
	Pixel mixed = red.mix(blue);

	std::cout << black.red() << " " << black.green() << " " << black.blue() << std::endl;
	std::cout << mixed.red() << " " << mixed.green() << " " << mixed.blue() << std::endl;
}