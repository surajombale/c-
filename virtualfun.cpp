#include<iostream>
#include<stdlib.h>
using namespace std;
namespace Nvifun
{
	class shape
	{
		protected:
			double area;
			double perimeter;
		public:
			shape()
			{
				this->area=1;
				this->perimeter=1;
			}
			virtual void acceptin()=0;

			virtual void printout()
			{
			}
			
			virtual void calculatearea()
			{
			}	
			
			virtual void calculateperimeter()
			{
			}
			
			~shape()
			{
				this->area=0;
				this->perimeter=0;
			}
		
	};
	
	class circle:public shape
	{
		private:
			double redius;
		public:
			circle()
			{
				this->redius=1;
			
			}
			
			void acceptin()
			{
				cout<<"enter redius::"<<endl;
				cin>>this->redius;
			
			}
			
			void calclulatearea()
			{
				this->area=3.142 * this->redius * this->redius;
			
			}

			void calculateperimeter()
			{
				this->area=2 * 3.142 * this->redius;
			}
			void printout()
			{
				cout<<"this->redius::"<<this->redius<<endl;
				cout<<"this->area::"<<this->area<<endl;
				cout<<"this->perimeter::"<<this->perimeter<<endl;
			
			}

			~circle()
			{
				this->redius=0;
			
			}
	};			
	class rectangle:public shape
	{
		private:
			double length;
			double breadth;
		public:
			rectangle()
			{
				this->length=1;
				this->breadth=1;
			}
				
			void acceptin()
			{
				cout<<"enter length::"<<endl;
				cin>>this->length;
				cout<<"enter breadth::"<<endl;
				cin>>this->breadth;
			}

			void calculatearea()
			{
				this->area=this->length * this->breadth;
			}

			void calculatebreadth()
			{
				this->perimeter=2*(this->length + this->breadth);

			}
		
			void printout()
			{
				cout<<"this->length"<<this->length<<endl;
				cout<<"this->breadth"<<this->breadth<<endl;
				cout<<"this->area"<<this->area<<endl;
				cout<<"this->perimeter"<<this->perimeter<<endl;
			}

			~rectangle()
			{
				this->length=0;
				this->breadth=0;
		
			}
	
	};	
			
}			
using namespace Nvifun;

int menuchoice();

int main()
{
	shape *obj=NULL;
	int ch;
	do
	{
		ch=menuchoice();
		switch(ch)
		{
			case 1:
				obj= new circle();
				break;
			case 2:
				obj= new rectangle();
				break;
	
			case 0:
				exit(0);
				break;		
			default : cout<<"wrong choice!!"<<endl;
		}
	
		if(obj!=NULL)
		{
			obj->acceptin();
			obj->printout();
			obj->calculatearea();
			obj->calculateperimeter();
		
			delete obj;
			obj=NULL;
	
		}

	}while(ch!=0);

	return 0;
}
	
int menuchoice()
{
	int choice;
	cout<<"1. circle \n 2. rectangle \n 0. exit"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	return choice;
}
			
			
			
			
			
			
			
			
			
					
		
	
	
	
			
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	













































































