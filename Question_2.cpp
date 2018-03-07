#include<iostream>
using namespace std;

struct nametype
{
	string firstName;
	string middleName;
	string lastName;
	
	void initialize()
	{
		cout<<"Enter First Name : ";
		cin>>firstName;
		cout<<"Enter middle Name : ";
		cin>>middleName;
		cout<<"Enter last Name : ";
		cin>>lastName;
	}
	
	void setValues(string f,string m,string l)
	{
		cout<<f<<" "<<m<<" "<<l<<endl;
	}
	
	void printNames()
	{
		setValues(firstName,middleName,lastName);
	}
};

struct addresstype
{
	string address1;
	string address2;
	string city;
	string state;
	string zipcode;
	
	void initialize()
	{
		cout<<"Enter your Address : ";
		cin>>address1;
		cout<<"Enter 2nd Address : ";
		cin>>address2;
		cout<<"Enter city : ";
		cin>>city;
		cout<<"Enter  State : ";
		cin>>state;
		cout<<"Enter Zip-code : ";
		cin>>zipcode;
	}
	
	void setAddress(string add1,string add2)
	{
		cout<<"Your Address is : "<<add1<<" "<<add2<<endl;
	}
	
	void setCity(string c)
	{
		cout<<"Your City is : "<<c<<endl;
	}
	
	void setState(string s)
	{
		cout<<"Your State is : "<<s<<endl;
	}
	void setZipcode(string z)
	{
		cout<<"Your Zipcode is : "<<z<<endl;
	}
	void printAddress()
	{
		setAddress(address1,address2);
		setCity(city);
		setState(state);
		setZipcode(zipcode);
	}
};

struct student 
{
	int id;
	nametype name;
	addresstype adress;
};


int main()
{
	int n;
	cout<<"Number of arrays ? : ";
	cin>>n;
	struct student array[n];
	for (int i=0; i<n; i++)
	{
		cout<<"Enter "<<i+1<<" student ID : ";
		cin>>array[i].id;
		array[i].name.initialize();
		array[i].adress.initialize();
	}
	for (int i=0; i<n; i++)
	{
		cout<<array[i].id<<endl;
		array[i].name.printNames();
		array[i].adress.printAddress();
	}
}
