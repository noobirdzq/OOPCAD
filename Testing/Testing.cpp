// Testing.cpp: 定义控制台应用程序的入口点。
//
#include "..\CAD\include\Ellipse.h"
# define M_PI 3.14159265358979323846  /* pi */

using namespace std;
using namespace ACCAD;
int main()
{
	Ellipse ellipse(Vec2(1, 1), 1, 2, M_PI);
	for (auto point : ellipse.getBorder())
	{
		cout << point.x << " " << point.y << endl;
	}
    return 0;
}

