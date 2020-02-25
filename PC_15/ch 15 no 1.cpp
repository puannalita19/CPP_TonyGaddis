#include <iostream>
#include <string>
#include <iomanip>
    using namespace std;
    class Employee
    {
    	private:
    		char EmpName;
    		int EmpNum;
    		int HireDate;
    	public:
    		void setEmpName(char);
    		void setEmpNum(int);
    		void setHireDate(int);
    		char getEmpName() const;
    		int getEmpNum() const;
    		int getHireDate() const;
    		Employee();
    };
    void Employee::setEmpName(char x)
    {
    	EmpName = x;
    }
    void Employee::setEmpNum(int y)
    {
    	EmpNum = y;
    }
    void Employee::setHireDate(int z)
    {
    	HireDate = z;
    }
    char Employee::getEmpName() const
    {
    	return EmpName;
    }
    int Employee::getEmpNum() const
    {
    	return EmpNum;
    }
    int Employee::getHireDate() const
    {
    	return HireDate;
    }
    Employee::Employee()
    {
    	cout << "I will ask you some questions about an employee.\n\n";
    }
    class ProductionWorker : public Employee
    {
    	private:
    		int Shift;
    		double HourlyPayRate;
    	public:
    		void setShift(int);
    		void setHourlyPayRate(double);
    		int getShift() const;
    		double getHourlyPayRate() const;
    		ProductionWorker();
    };
    void ProductionWorker::setShift(int a)
    {
    	Shift = a;
    }
    void ProductionWorker::setHourlyPayRate(double b)
    {
    	HourlyPayRate = b;
    }
    int ProductionWorker::getShift() const
    {
    	return Shift;
    }
    double ProductionWorker::getHourlyPayRate() const
    {
    	return HourlyPayRate;
    }
    ProductionWorker::ProductionWorker()
    {
    	cout << "Answer this question first,\n";
    	cout << "And I will display the employee's information.\n\n\n";
    }
    int main()
    {
    	ProductionWorker info;
    	char name[100];
    	int num;
    	int date;
    	int shift;
    	double rate;
    	cout << "What is the employee's name? ";
    	cin.getline(name, 100);
    	
    	cout << "What is the employee's number? ";
    	cin >> num;
    	
    	cout << "What is the employee's hire date?\n";
    	cout << "(Month, day, and year without any slashes,\n";
    	cout << "dashes, commas, or other punctuation.)\n";
    	cout << "For example, January 14, 1983 would look like 01141983.\n ";
    	cin >> date;
    	
    	cout << "Does the employee work shift 1 or shift 2? ";
    	cin >> shift;
    	
    	cout << "How much does the employee make per hour? ";
    	cin >> rate;
    	info.setEmpName(name[100]);
    	info.setEmpNum(num);
    	info.setHireDate(date);
    	info.setShift(shift);
    	info.setHourlyPayRate(rate);
    	cout << "\n\nHere is the employee's data:\n\n";
    	cout << "Employee's Name: " << info.getEmpName() << endl;
    	cout << "Employee's Number: " << info.getEmpNum() << endl;
    	cout << "Employee's Hire Date: " << info.getHireDate() << endl;
    	cout << "Employee's Shift: " << info.getShift() << endl;
    	cout << setprecision(2) << fixed;
    	cout << "Employee's Hourly Pay Rate: $" << info.getHourlyPayRate() << endl << endl;
    	return 0;
    }
