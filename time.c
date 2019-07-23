#include<stdio.h>
#include<dos.h>
#include<time.h>
int main()
{int t;
	struct time t;
	gettime(&t);
	printf("Current time is:%2d:%02d:%02d:%02d\n ",t.ti_hour,t.ti_min,t.ti_sec,t.ti_hund);

return 0;
}
