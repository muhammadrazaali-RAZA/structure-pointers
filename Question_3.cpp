#include<iostream>
using namespace std;

class sort
{
	public :
	void swap(int *value_1,int *value_2)
	{
		int temp=*value_1;
		*value_1=*value_2;
		*value_2=temp;
	}
	
	float arrayCheck(int array[], int first, int last)
	{
		int i = array[last];
		int j = (first - 1);
	
		for (int k = first; k <= last- 1; k++)
		{
			if (array[k] <= i)
			{
				j++;
				swap (&array[j], &array[k]);
			}
		}
		swap (&array[j + 1], &array[last]);
		return (j + 1);
	}

	void quickSort(int Ary[], int i, int j)
	{
		if (i < j)
		{
			int integr = arrayCheck(Ary,i,j); 
			quickSort(Ary, i, integr - 1); 
			quickSort(Ary, integr + 1,j);
		}
	}
};

struct employee_struct
{
	string firstName;
	string lastName;
	string fatherName;
	string emp_number;
	string bloodGroup;
	int emp_age;
	string factoryName;
	string department;
	string phoneNumber;
	string email;
	string homeAddress;
	double salary[4];
	
	void initialize()
	{
		cout<<"Enter Employee First Name : ";
		cin>>firstName;
		cout<<"Enter Employee Last  Name : ";
		cin>>lastName;
		cout<<"Enter Employee FATHER Name : ";
		cin>>fatherName;
		cout<<"Enter Employee Employee Number : ";
		cin>>emp_number;
		cout<<"Enter Employee Blood Group : ";
		cin>>bloodGroup;
		cout<<"Enter Employee age : ";
		cin>>emp_age;
		cout<<"Enter Employee Factory Name : ";
		cin>>factoryName;
		cout<<"Enter Employee Department : ";
		cin>>department;
		cout<<"Enter Employee Phone Number : ";
		cin>>phoneNumber;
		cout<<"Enter Employee Email : ";
		cin>>email;
		cout<<"Enter Employee Home Address : ";
		cin>>homeAddress;
		for(int i=0; i<4; i++)
		{
			cout<<"Enter Employee "<<i+1<<" last year Salary : ";
			cin>>salary[i];
		}	
	}
	void printoutput()
	{
		cout<<firstName<<endl;
		cout<<lastName<<endl;
		cout<<fatherName<<endl;
		cout<<emp_number<<endl;
		cout<<bloodGroup<<endl;
		cout<<emp_age<<endl;
		cout<<factoryName<<endl;
		cout<<department<<endl;
		cout<<phoneNumber<<endl;
		cout<<email<<endl;
		cout<<homeAddress<<endl;
		for(int i=0; i<4; i++)
		{
			cout<<salary[i]<<" ";
		}
		cout<<endl;
	}
};


void swap(employee_struct* a,employee_struct* b)
{
	string temp=a->firstName;
	a->firstName=b->firstName;
	b->firstName=temp;
	
	temp=a->lastName;
	a->lastName=b->lastName;
	b->lastName=temp;
	
	temp=a->fatherName;
	a->fatherName=b->fatherName;
	b->fatherName=temp;
	
	temp=a->emp_number;
	a->emp_number=b->emp_number;
	b->emp_number=temp;
	
	temp=a->bloodGroup;
	a->bloodGroup=b->bloodGroup;
	b->bloodGroup=temp;
	
	int tem=a->emp_age;
	a->emp_age=b->emp_age;
	b->emp_age=tem;
	
	temp=a->factoryName;
	a->factoryName=b->factoryName;
	b->factoryName=temp;
	
	temp=a->department;
	a->department=b->department;
	b->department=temp;
	
	temp=a->phoneNumber;
	a->phoneNumber=b->phoneNumber;
	b->phoneNumber=temp;
	
	temp=a->email;
	a->email=b->email;
	b->email=temp;
	
	temp=a->homeAddress;
	a->homeAddress=b->homeAddress;
	b->homeAddress=temp;
	
	for(int i=0; i<4; i++)
	{
		tem=a->salary[i];
		a->salary[i]=b->salary[i];
		b->salary[i]=tem;
	}	
}


void updateSalary(employee_struct* salry)
{
	for(int i=0; i<4; i++)
		salry->salary[i]=5000+salry->salary[i];
}

void sortarry(int age[],employee_struct emp[])
{
	class sort srt;
	srt.quickSort(age,0,9);
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(age[i]==emp[j].emp_age)
				emp[j].printoutput();	
		}
	}
	
}

int main()
{
	struct employee_struct emp[9];
	
	for(int i=0; i<9; i++)
	{
		emp[i].initialize();
	}
	
	swap(&emp[0],&emp[1]);

	for (int i=0; i<9; i++)
	{
		updateSalary(&emp[i]);
	}
	
	int age[9];
	for(int i=0; i<9; i++)
	{
		age[i]=emp[i].emp_age;
	}
	
	sortarry(age,emp);
}









