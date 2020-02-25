// Programming Challenge 13.7 - Widget Factory

#include <iostream>
#include <cmath>
using namespace std;

class Widget
{
	private:
		int widget;

	public:
		Widget()
		{
			widget = 0;
		}

		Widget(int w)
		{
			widget = w;
		}

		int calculate()
		{
			return round((widget / 10.0) / 16);
		}
};


int main()
{
	int order;

	cout << "How many widgets did you order? ";
	cin >> order;


	Widget factory1, factory2(150), factory3(order);

	cout << "The number of days it took for the factory to produce widgets is " << factory1.calculate() << endl;
	cout << "The number of days it took for the factory to produce widgets is " << factory2.calculate() << endl;
	cout << "The number of days it took for the factory to produce widgets is " << factory3.calculate() << endl;

	return 0;
}
