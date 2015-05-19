#ifndef CARS_H_INCLUDED
#define CARS_H_INCLUDED

typedef struct car{
	char* make;
	char* model;
	int bhp, topSpeed, id;
}car;

void getTopSpeed(struct car anyCar){
	printf("Deatils for the %s %s are: %d km\\hr. & %d BHP \n",
		anyCar.make, anyCar.model, anyCar.topSpeed, anyCar.bhp);
}

void getCar(struct car anyCar){
	printf("%d   %s %s\n",
		anyCar.id, anyCar.make, anyCar.model);
}

#endif // CARS_H_INCLUDED
