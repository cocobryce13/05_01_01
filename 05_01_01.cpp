#include <iostream>
#include <string>

class Figure
{
public:

	Figure() = default;

	Figure(int sides_count, std::string name) : sides_count(sides_count), name(name) {}

	std::string getName() { return name; }
	int getSides_count() { return sides_count; }

protected:
	int sides_count = 0;
	std::string name = "Figure";
};

class Triangle : public Figure
{
public:
	Triangle(int sides_count, std::string name) : Figure(sides_count, name) {}
};

class Quadrangle : public Figure
{
public:
	Quadrangle(int sides_count, std::string name) : Figure(sides_count, name) {}
};

int main()
{
	std::cout << "Number of sides:" << std::endl;
	Figure up;
	std::cout << up.getName() << " " << up.getSides_count() << std::endl;

	Triangle t(3, "Triangle");
	std::cout << t.getName() << " " << t.getSides_count() << std::endl;

	Quadrangle q(4, "Quadrangle");
	std::cout << q.getName() << " " << q.getSides_count() << std::endl;

	return 0;
}
