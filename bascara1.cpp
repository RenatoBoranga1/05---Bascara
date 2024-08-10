#include <iostream>
#include <math.h>

using namespace std ;

int main (){
	
	float a,b,c,x1,x2,del;
	
	while (scanf("%f%f%f", &a, &b, &c) != EOF){

	if (a != 0){
		del = (b*b) - (4*a*c);	
		
		
		 if (del >= 0){
			del = (b*b) - (4*a*c);
			x1=(-b + sqrt(del))/(2*a);
			x2=(-b - sqrt(del))/(2*a);
			printf ("%.2f\t%.2f\n",x1,x2);}
						
	else {
		cout <<"NARN"<<endl;
			}
		
	}}}
