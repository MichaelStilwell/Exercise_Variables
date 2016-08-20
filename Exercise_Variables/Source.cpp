#include <iostream>
int main()
{
	int a = 50;
	int b = 10;
	int c = 0;

	c = a;
	// c == 50; a == 50
	a = b;
	// a == 10; b == 10
	b = c;
	// b == 50; c == 50

	printf("a: %i", a);
	printf("b: %i", b);





	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;

	system("pause");
}
