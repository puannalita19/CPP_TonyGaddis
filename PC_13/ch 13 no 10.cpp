// Programming Challenge 13.10 - Population

#include <iostream>
#include <iomanip>
using namespace std;

class Population
{
	private:
		int population,
			birth,
			death;

	public:
		Population()
		{
			population = 2;
			birth = 0;
			death = 0;
		}
		Population(int x, int y, int z)
		{
			if (x < 2)
				population = 0;
			else
				population = x;
			if (y < 0)
				birth = 0;
			else
				birth = y;
			if (z < 0)
				death = 0;
			else
				death = z;
		}
		void setPopulation(int x)
		{
			if (x < 2)
				population = 0;
			else
				population = x;
		}
		void setBirth(int y)
		{
			if (y < 0)
				birth = 0;
			else
				birth = y;
		}
		void setDeath(int z)
		{
			if (z < 0)
				death = 0;
			else
				death = z;
		}
		double getBirth()
		{
			return static_cast<double>(birth) / population;
		}
		double getDeath()
		{
			return static_cast<double>(death) / population;
		}
};


int main()
{
	int population, birth, death;

	cout << "What is the starting population: ";
	cin >> population;

	cout << "What is the amount of birth and deaths: ";
	cin >> birth >> death;


	Population place1(20500, 1000, 4000), place2(population, birth, death), place3;

	place3.setPopulation(100000);
	place3.setBirth(8000);
	place3.setDeath(6000);

	cout << fixed << setprecision(2);

	cout << endl << "Birth rate is " << place3.getBirth() << endl;
	cout << "Death rate is " << place3.getDeath() << endl;

	cout << endl << "Birth rate is " << place2.getBirth() << endl;
	cout << "Death rate is " << place2.getDeath() << endl;

	cout << endl << "Birth rate is " << place1.getBirth() << endl;
	cout << "Death rate is " << place1.getDeath() << endl;


	return 0;
}
