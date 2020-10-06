// WAP in C to find if the student has passed in Mathematics in the Last Semester. The
// student has to secure 40% each in CA and SE (CA=50% AND SE=50%), meanwhile the
// total securing 50% at least at the end total.
#include<stdio.h>

int main(){
	float CA;//CA out of 100
	printf("Enter your CA: ");
	scanf("%f",&CA);

	float SE;//SE out of 100
	printf("Enter your SE: ");
	scanf("%f",&SE);

	float ca=(CA/100)*50;//CA out of 50
	printf("CA out of 50=%f\n",ca );
	float se=(SE/100)*50;//CA out of 50
	printf("Se out of 50=%f\n",se );
	float total=ca+se;//Total marks out of 100


	if (total>=50 && ca>=20 && se>=20){
		printf("Passed both in CA and SE with %f", total );
	}
	else if  (ca<20 && se>=20 ){
		printf("Failed in CA and pass in SE with %f", total );
	}
	else if (ca>=20 && se<20 ){
		printf("Failed in SE and pass in CA with %f", total );
	}
	else if (ca<=20 && se<=20 && total!=50 ){
		printf("Passed in both CA and SE but failed in total with %f", total );
	}
	else if (ca<20 && se<20 ){
		printf("Failed in both CA and SE with %f", total );
	}
	else{
		printf("error" );
	}

}