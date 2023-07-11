#include <stdio.h>
//#include <locale>

int main()
{
	//setlocale(LC_ALL,"Russian");

	float a, b, c, d = 0;
	float x;

	printf("Вычислим значение x= a*b/с \n");
	while (d == 0)
	{
	    printf("Введите три числа: ");
	    scanf("%f%f%f",&a,&b,&c);
		if (c != 0)
			d = 1;
		else
		printf("Ошибка! На ноль делить нельзя! \n");
	}

	x = a * b / float(c);
    
	printf("Результат вычислений: %f \n",x);
	return 0;
}