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
void greater (time_new* time1ptr, time_new* time2ptr);
void add_times (time_new* time1ptr, time_new* time2ptr, time_new* resultptr);
void sub_times (time_new* time1ptr, time_new* time2ptr, time_new* resultptr);

int main ()
{
	time_new* time1;
	time1 = create_time(5,5,5,5);
	time_new* time2;
	time2 = create_time(4,6,6,8);
	time_new* time3;
	time3 = create_time(5,20,6,54);

	print(time1);
	print(time2);
	print(time3);

	time_new* result;
	result = create_time(0,0,0,0);

	add_times(time1, time3, result);
	print(result);

	sub_times(time1, time2, result);
	print(result);

	greater(time1, time3);
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

void greater (time_new* time1ptr, time_new* time2ptr)
{
	time_new time1 = *time1ptr;
	time_new time2 = *time2ptr;
	int a = 0;
	if(time1.days > time2.days)
	{
		a = 1;
	}
	else if(time1.days < time2.days)
	{
		a = 2;
	}
	else
	{
		if(time1.hours > time2.hours)
		{
			a = 1;
		}
		else if(time1.hours < time2.hours)
		{
			a = 2;
		}
		else
		{
			if(time1.minutes > time2.minutes)
			{
				a = 1;
			}
			else if(time2.minutes < time2.minutes)
			{
				a = 2;
			}
			else
			{
				if(time1.seconds > time2.seconds)
				{
					a = 1;
				}
				else if(time1.seconds < time2.seconds)
				{
					a = 2;
				}
			}
		}
	}
	if (a==1)
	{
		print(time1ptr);
	}
	else if	(a==2)
	{
		print(time2ptr);
	}
	else
	{
		printf("there equal");
	}
	return;
}

void add_times (time_new* time1ptr, time_new* time2ptr, time_new* resultptr)
{
	time_new time1 = *time1ptr;
	time_new time2 = *time2ptr;
	time_new result = *resultptr;
	int a = 0;
	a = result.seconds = time1.seconds + time2.seconds;

	if (a > 60)
	{
		a = result.minutes = time1.minutes + time2.minutes + 1;
		result.seconds = result.seconds - 60;
	}
	else
	{
		a = result.minutes = time1.minutes + time2.minutes;
		
	}
	if (a > 60)
	{
		a = result.hours = time1.hours + time2.hours+1;
		result.minutes = result.minutes - 60;
	}
	else
	{
		a = result.hours = time1.hours + time2.hours;
	}
	if (a > 24)
	{
		a = result.days = time1.days + time2.days+1;
		result.hours = result.hours - 24;
	}
	else
	{
		a = result.days = time1.days + time2.days;
	}
	*resultptr = result;
	return;
}

void sub_times (time_new* time1ptr, time_new* time2ptr, time_new* resultptr)
{
	time_new time1 = *time1ptr;
	time_new time2 = *time2ptr;
	time_new result ;
	result.days = time1.days - time2.days;
	result.hours = time1.hours - time2.hours;
	result.minutes = time1.minutes - time2.minutes;
	result.seconds = time1.seconds - time2.seconds;
	*resultptr = result;
	return;
}


