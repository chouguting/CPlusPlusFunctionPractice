
#include <iostream>
using namespace std;

//(一) 使用 #define
#define productDef(result,a,b) result=a*b ;
#define productDef2(result,a,b,c) result=a*b*c ;



//(二) 使用 function overloading 以及 default arguments
void product2(int & result, int a = 2, int b = 3, int c = 5)
{
	result = a * b * c;
}

void product2(float& result, float a = 2, float b = 3, float c = 5)
{
	result = a * b * c;
}


//(三) 使用 function template 以及 function overloading  
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



//(四) 使用 function template 以及 default arguments
template<typename T>
void product4(T& result, T a=2, T b=3, T c=5)
{
	result = a * b * c;
}


void main()
{
	cout << "int:" << endl;
	
	int result;

	//(一) 使用 #define
	productDef(result, 1, 2,);
	cout << result << endl;
	productDef2(result, 1, 2, 3);
	cout << result << endl << endl;

	//(二) 使用 function overloading 以及 default arguments
	product2(result, 1, 2);
	cout << result << endl;
	product2(result, 1, 2, 3);
	cout << result << endl << endl;


	//(三) 使用 function template 以及 function overloading  
	product3(result, 1, 2);
	cout << result << endl;
	product3(result, 1, 2, 3);
	cout << result << endl << endl;


	//(四) 使用 function template 以及 default arguments
	product4(result, 1, 2);
	cout << result << endl;
	product4(result, 1, 2, 3);
	cout << result << endl<<endl;


	cout << "float:" << endl;
	
	float result2;
	
	//(一) 使用 #define
	productDef(result2, 1.1f, 2.2f);
	cout << result2 << endl;
	productDef2(result2, 1.1f, 2.2f, 3.3f);
	cout << result2 << endl << endl;
	
	//(二) 使用 function overloading 以及 default arguments
	product2(result2, 1.1f, 2.2f);
	cout << result2 << endl;
	product2(result2, 1.1f, 2.2f, 3.3f);
	cout << result2 << endl << endl;

	//(三) 使用 function template 以及 function overloading  
	product3(result2, 1.1f, 2.2f);
	cout << result2 << endl;
	product3(result2, 1.1f, 2.2f, 3.3f);
	cout << result2 << endl << endl;

	//(四) 使用 function template 以及 default arguments
	product4(result2, 1.1f, 2.2f);
	cout << result2 << endl;
	product4(result2, 1.1f, 2.2f, 3.3f);
	cout << result2 << endl << endl;

}