#include<iostream>
using namespace std;

	class A
	{
		public:
			int a;
			
			A()
			{
				this->a=1;
				cout<<"inside parameterless ctor of a "<<endl;
			}
	
			A(int a)
			{
				this->a=a;
				cout<<"inside parameterize ctor of a "<<endl;
			}
			void print()
			{
				cout<<"this->a"<<this->a<<endl;
				cout<<"inside print method"<<endl;
			
			}

			~A()
			{
				this->a=0;
				cout<<"inside dtor of a "<<endl;
			}
			
	};



	class B: public A 
	{
		public:
			int b;
			
			B()
			{
				this->b=1;
				cout<<"inside parameterless ctor of b "<<endl;
			}
	
			B(int a,int b):A(a)
			{
			`   	this->b=b;
				cout<<"inside parameterize ctor of b "<<endl;
			}
			void print()
			{
				A::print();
				cout<<"this->b"<<this->b<<endl;
				cout<<"inside print method"<<endl;
			
			}

			~B()
			{
				this->b=0;
				cout<<"inside dtor of b"<<endl;
			}
	};
	
	class C: public A 
	{
		public:
	       		int c;
			
			C()
			{
				this->c=1;
				cout<<"inside parameterless ctor of c "<<endl;
			}
	
			C(int a,int c):A(a)
			{
			`   	this->c=c;
				cout<<"inside parametrize ctor of c "<<endl;
			}
			void print()
			{
				A::print();
				cout<<"this->c"<<this->c<<endl;
				cout<<"inside print method"<<endl;
			
			}

			~C()
			{
				this->c=0;
	
				cout<<"inside dtor of c"<<endl;
			}
	};
	
	class D:public C,public A
	{
		public:
			int d;
			D()
			{
			
				this->d=1;
				cout<<"inside parameterless ctor of D"<<endl;
			
			}
	

			D(int a,int b,int c,int d):B(a,b),C(a,c)
			{
				this->d=d;
				cout<<"inside paramerize ctor of D"<<endl;
			
			
			}
	
			void print()
			{
				B::print();
				C::print();
				cout<<"this->B::a"<<this->B::a<<endl;
				cout<<"this->C::a"<<this->C::a<<endl;
				cout<<"this->b"<<this->b<<endl;
				cout<<"this->c"<<this->c<<endl;
				cout<<"this->d"<<this->d<<endl;

			}
	
	
	
			~D()
			{
			
				this->d=0;
				cout<<"inside dtor of D"<<endl;
			}
	};

int main()
{
	D obj;
	cout<<"obj"<<endl;
	obj.print();
	cout<<"inside main obj.B::a"<<obj.B::a<<endl;
	cout<<"inside main obj.C::a"<<obj.C::a<<endl;
	cout<<"inside main obj.b"<<obj.b<<endl;
	cout<<"inside main obj.c"<<obj.c<<endl;
	cout<<"inside mainobj.d"<<obj.d<<endl;

return 0;
}




