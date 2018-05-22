#include <iostream>
#include <sstream>
#include "..\CAD\include\Ellipse.h"
# define M_PI 3.14159265358979323846  /* pi */

using namespace std;
using namespace ACCAD;
int main()
{
	Ellipse ellipse(Vec2(1, 1), 2, 1, M_PI);
	for (auto point : ellipse.getBorder())
	{
		cout << point.x << " " << point.y << endl;
	}
    stringstream ss(ios::binary | ios::in | ios::out);
    ellipse.save(ss);
    cout << ss.str() << endl;
    Ellipse newEllipse({ 0,0 }, 0, 0);
    newEllipse.load(ss);
    for (auto point : newEllipse.getBorder())
    {
        cout << point.x << " " << point.y << endl;
    }
    ellipse.resize(4, { 1,1 });
    for (auto point : ellipse.getBorder())
    {
        cout << point.x << " " << point.y << endl;
    }
    auto p = ellipse.getBorder(7);
    cout << p.x << " " << p.y << endl;
    return 0;
}

