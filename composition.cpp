#include<string.h>
#include<iostream>
using namespace std;
namespace Nperson
{
	class date
	{
		private:
			int dd,mm,yy;
		public:
			date():dd(01),mm(01),yy(1001)
			{
				cout<<"inside parameterless date ctor"<<endl;
			}
			
			
			date(int dd,int mm,int yy):dd(dd),mm(mm),yy(yy)
			{
				cout<<"inside parameterize date ctor"<<endl;
			}
		
			
			
			void print()
			{
				cout<<"date::"<<this->dd<<endl;
				cout<<"month::"<<this->mm<<endl;
				cout<<"year::"<<this->yy<<endl;
				cout<<"inside print method of date"<<endl;
			
			
			}
	
			~date()
			{
				this->dd=00;
				this->mm=00;
				this->yy=0000;
				cout<<"inside dtor of date"<<endl;
			
			}
	
	};
	
	class address
	{
		private:
			char area[20];
			char city[10];
			int pinno;

		public:
			address()
			{
				strcpy(this->area,"abcdefgh");
				strcpy(this->city,"abc");
				this->pinno=11111;
			
				cout<<"inside paramtrless ctor of address"<<endl;
			}
	
	
			address(char *area,char *city,int pinno)
			{
				strcpy(this->area,area);
				strcpy(this->city,city);
				this->pinno=pinno;
				cout<<"inside parametrize ctor of address"<<endl;
			
			}
		
			void print()
			{
				cout<<"area::"<<this->area<<endl;
				cout<<"city::"<<this->city<<endl;
				cout<<"pinno::"<<this->pinno<<endl;
				cout<<"inside print method of address"<<endl;			
			
			}
	
			~address()
			{
				strcpy(this->area," ");
				strcpy(this->city," ");
				this->pinno=0;
			
				cout<<"inside dtor of address"<<endl;
			}
	
		
	};

	class person
	{
		private:
			char name[20];
			address peraddress;
			date bday;

		public:
			person()
			{
				strcpy(this->name,"xyz");
				cout<<"inside parameterless ctor of person"<<endl;
			}
			
			person(char *name,char *area,char *city,int pinno,int dd,int mm,int yy):peraddress(area,city,pinno),bday(dd,mm,yy)
			{
				strcpy(this->name,"xyz");
				cout<<"inside parametrize ctor of person"<<endl;
			}
			
			
			void print()
			{
				cout<<"name::"<<this->name<<endl;
				cout<<"peraddress::";
				this->peraddress.print();
		 		cout<<"bday::";
				this->bday.print();
				cout<<"inside print method of person"<<	endl;
						
			}
	
			~person()
			{
				strcpy(this->name,"  ");
				cout<<"inside dtor of person"<<endl;
			}
	};	

}
using namespace Nperson;

int main()
{
	person p1("suraj","kk market","pune",412043,8,12,1996);
	cout<<"p2::"<<endl;
	p1.print();

return 0;
}




































































































