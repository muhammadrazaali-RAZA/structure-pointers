#include<iostream>
using namespace std;

class sort
{
	public :
	void swap(float *value_1,float *value_2)
	{
		float temp=*value_1;
		*value_1=*value_2;
		*value_2=temp;
	}
	
	float arrayCheck(float array[], int first, int last)
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

	void quickSort(float Ary[], int i, int j)
	{
		if (i < j)
		{
			int integr = arrayCheck(Ary,i,j); 
			quickSort(Ary, i, integr - 1); 
			quickSort(Ary, integr + 1,j);
		}
	}
};

class powerSet
{
	public:
	void printSet(int array[],int size)
	{
    	int i;
    	for (i=1;i<=size;i++)
        	cout << array[i] << " ";
    	cout << endl;

    	return;
	}
	
	void printPowerset (int n)
	{
    	int stack[10],k;
		stack[0]=0;
    	k = 0;
		while(1)
		{
        	if (stack[k]<n)
			{
            	stack[k+1] = stack[k] + 1;
            	k++;
        	}
			else
			{
            	stack[k-1]++;
            	k--;
        	}

        	if (k==0)
            	break;
        	printSet(stack,k);
    	}
		return;
	}		
};

void copyArry(float a[],float b[],float c[],float testArray[])
{
	int n=0;
	for(int i=0; i<5; i++)
	{
		testArray[n]=a[i];
		n++;
	}
	for(int i=0; i<5; i++)
	{
		testArray[n]=b[i];
		n++;
	}
	for(int i=0; i<5; i++)
	{
		testArray[n]=c[i];
		n++;
	}
	
}

void freqncyElemnt(float array[])
{
	class sort srt;
	srt.quickSort(array,0,14);
	float n;
	for(int i=0; i<15; i++)
	{
		int count=0;
		if (array[i]>n)
		{
			for(int j=i; j<15; j++)
			{
				if (array[i]==array[j])
				{
					count++;
					n=array[i];
				}
			}
			cout<<array[i]<<" occurs "<<count<<" times "<<endl;
		}
			
	}
}


void searchValue(float ary[])
{
	float num;
	cout<<"Enter number to search :";
	cin>>num;
	for(int i=0; i<15; i++)
	{
		if(ary[i]==num)
		{
			cout<<num<<" is on "<<i<<endl;
		}
	}
}


void find_min_max(float array[])
{
	class sort srt;
	srt.quickSort(array,0,14);
	cout<<array[2]<<" is 3rd minimum value "<<endl;
	cout<<array[9]<<" is 5th maximum value "<<endl;
	
}


void addNumber(float array[])
{
	float num;
	cout<<"Enter number to add in array :";
	cin>>num;
	array[14]=num;
}


void swap_Values(float a[],float b[],float c[])
{
	float temp[5];
	for(int i=0; i<5; i++)
		temp[i]=a[i];
	for(int i=0; i<5; i++)
		a[i]=b[i];
	for(int i=0; i<5; i++)
		b[i]=c[i];
	for(int i=0; i<5; i++)
		c[i]=temp[i];
}

void commnElmnts(float a[],float b[],float c[])
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(a[i]==b[j])
			{
				for(int k=0; k<5; k++)
				{
					if(a[i]==c[k])
						cout<<"Common Elements is : "<<a[i]<<endl;
				}
			}
		}
	}
}

void repeatElemnt(float a[],float b[],float c[])
{
	float array[15];
	copyArry(a,b,c,array);
	class sort srt;
	srt.quickSort(array,0,14);
	float n;
	for(int i=0; i<15; i++)
	{
		int count=0;
		if (array[i]>n)
		{
			for(int j=i; j<15; j++)
			{
				if (array[i]==array[j])
				{
					count++;
					n=array[i];
				}
			}
			if(count>1)
				cout<<"Repeated Element is "<<array[i]<<endl;
		}
			
	}
}


void power_Set(float array[])
{
	class powerSet ps;
	for(int i=0; i<15; i++)
	{
		cout<<"Power set for : "<<array[i]<<endl;
    	ps.printPowerset(array[i]);
	}
}

int main()
{
	float a[5]={1.5,2.5,1.3,2.1,1.2},b[5]={1.0,2.6,3.8,1.2,2.1},c[5]={1.9,2.9,1.4,1.5,0.5},testArray[15];
	copyArry(a,b,c,testArray);          ///////       copy to testArray .....................
	freqncyElemnt(testArray);           ///////       find frequency of each element ........
	searchValue(testArray);             ///////       search any munber ............
	addNumber(testArray);               ///////       add new number in array....
	find_min_max(testArray);            ///////       find 3rd minimum and 5 maximum numbers......
	swap_Values(a,b,c);                 ///////       swap values of first 3 ....
	commnElmnts(a,b,c);                 ///////       find and print common Elements ......
	repeatElemnt(a,b,c);                ///////       find and print repeat Elements ......
	power_Set(testArray);               ///////       find power set of test array ......
}


