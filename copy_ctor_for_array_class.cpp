#include<iostream>
using namespace std;
namespace Narray
{
	class Array
	{	private:
			int size;
			int *arr;
	
		public:
			Array(int size=5)
			{
				this->size=size;
				this->arr=new int(this->size);
				for(int i=0;i<this->size;i++)
				{
					this->arr[i]=0;
				
				}
				cout<<"inside ctor of array class"<<endl;
			}
		
			Array(const Array& other)//using copy ctor
			{
				this->size=other.size;
				this->arr=new int(this->size);
				for(int i=0;i<this->size;i++)
				{
					this->arr[i]=other.arr[i];
				
				}
				cout<<"inside copy  ctor of array class"<<endl;
			}	
			void operator=(const Array& other)//using = operator
			{
				this->~Array();
				this->size=other.size;
				this->arr= new int[this->size];
				for(int i=0;i<this->size;i++)
				{
					this->arr[i]=other.arr[i];
				
				}
				cout<<"inside operator overlosding function"<<endl;
			
			}
			
			
			
			
			
			
			
			
			void acceptin()
			{
				for(int i=0;i<this->size;i++)
				{
					cout<<"this->["<<i<<"]"<<endl;
					cin>>arr[i];
				
				}
			
			}
			
			void printout()
			{
			
				for(int i=0;i<this->size;i++)
				{
					cout<<"this->arr["<<i<<"]::"<<this->arr[i]<<endl;
								
				}	
			
			
			}
		
			~Array()
			{
				if(this->arr!=NULL)
				delete[] this->arr;
				this->arr=NULL;
			}





	};



}
using namespace Narray;
int main()
{
	Array a1;
	cout<<"enter value for a1"<<endl;
	a1.acceptin();
	cout<<"a1::"<<endl;
	a1.printout();

	Array a2(a1);
	cout<<"a2::"<<endl;
	a2.printout();

return 0;
}
















































