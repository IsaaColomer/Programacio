#include <iostream>
#include <stdlib.h>


/*
Dia 1, conceptes bàsics.
*/

using namespace std;
/*
//Ex de classe strings amb const
void printString(const char* frase)
{
	for (int i = 0; frase[i] != '\0'; i++)
	{
		cout << frase[i] << endl;
	}
}

int main()
{
	const char* frase = "Hello world of pointers";
	
	printString(frase);

	system("pause");
	return 0;
}
*/

/*
//Ex de deures 1
void suma(int* resultat, int array[3])
{
	for (int i = 0; i < 3; i++)
	{
		(*resultat) += array[i];
	}
}

int main()
{
	int resultat = 0;
	int array[3] = { 1,2,3 };
	suma(&resultat, array);
	cout << resultat << endl;
	system("pause");
	return 0;

}
*/
/*
void add5(int* num)
{

	(*num) = (*num) + 5;

}
int main()
{
	//Dia 2
	int i = 0;
	int vec[3] = { 4, 8, 4 };
	int num = 5;

	add5(&num);
	cout << num << endl;
	system("pause");
	return 0;
}
*/





/*
cout << "Dia 1" << endl;
int num = 3;
//Dia 1 ex 1
cout << &num << endl;
//Dia 1 ex 2
int* ptr = &num;
//Dia 1 ex 3
cout << ptr << endl;
//Dia 1 ex 4
cout << *ptr << endl;
//Dia 1 ex 5
*ptr = 5;
//cout << *ptr << endl;

printf("\n");

//Dia 2 ex 1
cout << "Dia 2" << endl;
cout << &vec[0] << endl;

//Dia 2 ex 2
for (int j = 0; j < 3; j++)
{
	cout << vec[j] << endl;
}
//Dia 2 ex 3
int* ptr2 = &vec[0];

cout << &vec[0] << endl;
//Dia 2 ex 4
for (int j = 0; j < 3; j++)
{
	cout << *(ptr2 + j) << endl;
}
printf("\n");
cout << vec + 1 << endl;

printf("\n");

//Dia 2 ex 5
do
{
	cout << *(ptr2+i) << endl;
	i++;
} while (i < 3);
*/