
#include <iostream>
using namespace std;

//(�@) �ϥ� #define
#define productDef(result,a,b) result=a*b ;
#define productDef2(result,a,b,c) result=a*b*c ;



//(�G) �ϥ� function overloading �H�� default arguments
void product2(int & result, int a = 2, int b = 3, int c = 5)
{
	result = a * b * c;
}

void product2(float& result, float a = 2, float b = 3, float c = 5)
{
	result = a * b * c;
}


//(�T) �ϥ� function template �H�� function overloading  
template<typename T>
void product3(T &result,T a,T b)
{
	result = a * b;
}


template<typename T>
void product3(T& result, T a, T b,T c)
{
	result = a * b *c;
}



//(�|) �ϥ� function template �H�� default arguments
template<typename T>
void product4(T& result, T a=2, T b=3, T c=5)
{
	result = a * b * c;
}


void main()
{
	cout << "int:" << endl;
	
	int result;

	//(�@) �ϥ� #define
	productDef(result, 1, 2,);
	cout << result << endl;
	productDef2(result, 1, 2, 3);
	cout << result << endl << endl;

	//(�G) �ϥ� function overloading �H�� default arguments
	product2(result, 1, 2);
	cout << result << endl;
	product2(result, 1, 2, 3);
	cout << result << endl << endl;


	//(�T) �ϥ� function template �H�� function overloading  
	product3(result, 1, 2);
	cout << result << endl;
	product3(result, 1, 2, 3);
	cout << result << endl << endl;


	//(�|) �ϥ� function template �H�� default arguments
	product4(result, 1, 2);
	cout << result << endl;
	product4(result, 1, 2, 3);
	cout << result << endl<<endl;


	cout << "float:" << endl;
	
	float result2;
	
	//(�@) �ϥ� #define
	productDef(result2, 1.1f, 2.2f);
	cout << result2 << endl;
	productDef2(result2, 1.1f, 2.2f, 3.3f);
	cout << result2 << endl << endl;
	
	//(�G) �ϥ� function overloading �H�� default arguments
	product2(result2, 1.1f, 2.2f);
	cout << result2 << endl;
	product2(result2, 1.1f, 2.2f, 3.3f);
	cout << result2 << endl << endl;

	//(�T) �ϥ� function template �H�� function overloading  
	product3(result2, 1.1f, 2.2f);
	cout << result2 << endl;
	product3(result2, 1.1f, 2.2f, 3.3f);
	cout << result2 << endl << endl;

	//(�|) �ϥ� function template �H�� default arguments
	product4(result2, 1.1f, 2.2f);
	cout << result2 << endl;
	product4(result2, 1.1f, 2.2f, 3.3f);
	cout << result2 << endl << endl;

}