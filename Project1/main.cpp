#include <iostream>
using namespace std;

struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		m_y = y; //  лексическа€ - вместо m_y  было y
	}
};  // после обь€влени€ структуры не было ; синтаксическа€ ошибка

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: " << point_object.m_y << std::endl;
}

int main()  // было с большой буквы
{
	int i;
	for (i = 0; i < 5; i++) {  // точка с зсп€той после услови€
		point my_point(i, 2 * i);
		print_point(my_point);
	}
	return 0;
}

//void print_point(const point& point_object) {
//	std::cout << "x:" << point_object.m_x << ", y: "
//		<< point_object.m_y << std::endl;
//}  лишн€€ реализаци€ функции