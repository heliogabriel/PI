# include <stdio.h>

int main (){
int i,j=0;

float pi = 0;

for (i=1; i<= 1000010 ; i = i+=2 ){
	if (i ==1 || j == 4){

	pi = pi + (4/(float)i);
	 j=2;

	}
else {
	pi = pi - (4/(float)i);
	j=j+2;
 
}
}
printf("O valor de PI equivale a mais ou menos %f\n", pi
	);

system ("pause");
return 0;
}