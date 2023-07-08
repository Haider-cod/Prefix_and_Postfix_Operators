#include<iostream>
using namespace std;
class Number{
	int num;
	public:
		Number(int a=0):num(a) { }
		void show(){
			cout<<"num = "<<num<<endl;
		}
		// prefix increment
		Number operator ++(){
			Number temp;
			++num;
			temp.num = num;
			return temp;
		}
	//	postfix increment
		Number operator ++(int){
			Number temp;
			temp.num = num;
				++num;
			return temp;
		}
			// prefix decrement
		Number operator --(){
			Number temp;
			--num;
			temp.num = num;
			return temp;
		}
		//	postfix decrement
		Number operator --(int){
			Number temp;
			temp.num = num;
				--num;
			return temp;
		}
};
int main(){
	Number obj1(10),obj2(20);
     ++obj1; 
     obj1--; 
     
     obj2 = obj1++;
     obj2--;
     obj1.show();
     obj2.show();
}
