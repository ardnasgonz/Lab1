#include <stdio.h>


 int main(){
 	float h;
 	float k = 0.092;
 	float th = 0.0833;
 	int a, t1, t2;

	float topValue; // h = topValue / bottomValue; 
	float bottomValue;

 	printf("Enter value for t1\n");
 	scanf("%d", &t1);
 	printf("Value for t1 is %d\n", t1);

 	printf("Enter value for t2\n");
 	scanf("%d", &t2);
 	printf("Value for t2 is %d\n", t2);

 	topValue = t2-t1;
 	bottomValue = th/k;
 	printf("Value for topValue is %.5f\n", topValue);
  	printf("Value for bottomValue is %.5f\n", bottomValue);

  	printf("Enter value for a\n");
  	scanf("%d", &a);
  	printf("Value for a is %d\n", a);
  	h = a*(topValue / bottomValue);
  	printf("Heat transfer is equal to %.5f\n", h);
 	return 0;
 }