#include <iostream>
#include <string>

double pai = 3.14, r, d, h;
std::string shape;
char r_or_d;
int data_r();
int data_d();

int main() {
	std::cout << "*****所有输入要么输入英文，要么输入数字*****\n";
	std::cout << "                *****By YHXIYS*****                        \n ";
	std::cout << "输入形状\n"
		<< "类型: round(圆形), cylinder(圆柱), cone(圆锥)\n"
		<< "形状:";
	std::cin >> shape;
	std::cout << "题目给出的条件是 r (半径) 还是 d (直径)? :";
	std::cin >> r_or_d;
	std::cout << "派 = ? (3.14) :";
	std::cin >> pai;
	switch (r_or_d) {
	case 'r':
		data_r();
		break;
	case 'd':
		data_d();
		break;
	default:
		std::cout << "E01:请输入 r 或 d!" << "\n";
		system("pause");
		return 0;
	}
}

int data_r()
{
	system("cls");
	std::cout << "请输入半径(r):";
	std::cin >> r;
	std::cout << "直径为 " << r * 2 << "\n";
	std::cout << "周长为 " << r * 2 * pai << "\n";
	if (shape == "round" ) {
		std::cout << "面积为 " << r * r * pai << "\n";
		system("pause");
		return 0;
	}
	else if (shape == "cylinder") {
		std::cout << "请输入高:";
		std::cin >> h;
		std::cout << "底面积为 " << r * r * pai << "\n";
		std::cout << "侧面积为 " << r * 2 * pai * h << "\n";
		std::cout << "表面积为 " << r * r * pai * 2 + r * 2 * pai * h << "\n";
		std::cout << "体积为 " << r * r * pai * h << "\n";
		system("pause");
		return 0;
	}
	else if (shape == "cone") {
		std::cout << "请输入高:";
		std::cin >> h;
		std::cout << "底面积为 " << r * r * pai << "\n";
		std::cout << "体积为 " << (r * r * pai * h) / 3 << "\n";
		system("pause");
		return 0;
	}
	else {
		std::cout << "E02:形状输入错误!" << "\n";
		system("pause");
		return 0;
	}
	return 0;
}

int data_d()
{
	system("cls");
	std::cout << "请输入直径(d):";
	std::cin >> d;
	std::cout << "半径为 " << d / 2 << "\n";
	r = d / 2;
	std::cout << "周长为 " << r * 2 * pai << "\n";
	if (shape == "round") {
		std::cout << "面积为 " << r * r * pai << "\n";
		system("pause");
		return 0;
	}
	else if (shape == "cylinder") {
		std::cout << "请输入高:";
		std::cin >> h;
		std::cout << "底面积为 " << r * r * pai << "\n";
		std::cout << "侧面积为 " << r * 2 * pai * h << "\n";
		std::cout << "表面积为 " << r * r * pai * 2 + r * 2 * pai * h << "\n";
		std::cout << "体积为 " << r * r * pai * h << "\n";
		system("pause");
		return 0;
	}
	else if (shape == "cone") {
		std::cout << "请输入高:";
		std::cin >> h;
		std::cout << "底面积为 " << r * r * pai << "\n";
		std::cout << "体积为 " << (r * r * pai * h) / 3 << "\n";
		system("pause");
		return 0;
	}
	else {
	std::cout << "E02:形状输入错误!" << "\n";
	system("pause");
	return 0;
	}
	return 0;
}
