#include <stdio.h>
#include <stdlib.h>

typedef struct relative_time 
{
	int days;
	int hours;
	int minutes;
	int seconds;
}time_new;

time_new* create_time (int days, int hours, int minutes, int seconds);
void print (time_new* timeptr);


int main ()
{
	time_new* time1;
	time1 = create_time(5,5,5,5);
	print(time1);
}

time_new* create_time (int days, int hours, int minutes, int seconds)
{
	time_new* timeptr =  malloc(sizeof(time_new));
	time_new time;
	time.days = days;
	time.hours = hours;
	time.minutes = minutes;
	time.seconds = seconds;
	*timeptr = time;
	return timeptr;
}

void print (time_new* timeptr)
{
	time_new time = *timeptr;
	printf("\{days: %d;\thours: %d;\tminutes: %d;\tseconds: %d\}\n", time.days, time.hours, time.minutes, time.seconds);
	return;
}
