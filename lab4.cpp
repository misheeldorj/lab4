#include <iostream>
#include <string.h>
using namespace std;

	class employee
	{
	private:
	int num;
	string name;
	string position;
	float hour;
	float perhour; 
	float boss; 
	float engineer; 
	float h; 
	public: 
	void set();
	void getdata();
	void showdata();
	float calculate();
	bool incrementhour(float);
	private:
	float bosscalculate(); 
	};

		void employee :: set()
		{
			num=0; 
			name="Michelle"; 
			position="engineer"; 
			hour=0; 
		}
		void employee :: getdata()
		{
		cout<<" Enter number: ";
		cin>>num;
		cout<<" Enter name: ";
		cin>>name; 
		cout<<" Enter occupation: ";
		cin>>position; 
		cout<<" Enter work hour: ";
		cin>>hour;
		cout<<" Per hour salary: ";
		cin>>perhour; 
		cout<<endl;
		}

		
		void employee :: showdata()
		{
			cout<<"\n   "<<num<<"."<<"\t"<<"Employee name: "<< name<<endl;
			cout<<"\t"<<"Position: "<< position<<endl;
			cout<<"\t"<<"Work hours: "<< hour<<endl;
			if (position=="engineer")
			cout<<"\t"<<"Total salary: "<<engineer<<endl; 
			else cout<<"\t"<<"Total salary: "<<boss<<endl;
			cout<<"\n\tIncrement hour boolean value: "<<""<<incrementhour(hour)<<endl;
		}

		float employee :: calculate()
		{
			engineer=hour*perhour; 
			return engineer; 
		}

		float employee :: bosscalculate() 
		{
			boss=hour*perhour; 
			return boss; 
		}

		bool employee :: incrementhour(float h)
		{
			if (h<=24 && h>=0)
				return 1; 
			else 	return 0; 
		}

int main()
{
	employee emp;
	emp.set();
	emp.getdata();
	if (emp.position=="engineer")
		emp.calculate();
	else 
		emp.bosscalculate();
	emp.incrementhour(emp.hour); 
	emp.showdata(); 
}


