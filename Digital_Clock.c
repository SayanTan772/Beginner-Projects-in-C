#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
int main()
{
  int start=1;
  int h,m,s;
  printf("Set the time (hh:mm:ss) \n");
  scanf("%d %d %d",&h,&m,&s); // hour , minute and second
  system("cls"); // clears the screen for displaying the time
  while(start!=0) // start will never be 0 so the loop runs for infinity unless we terminate the output 
  {
    printf("Digital Clock: \n");
    printf("\n");
    printf("%02d : %02d : %02d ",h,m,s); // current values of h m and s are printed 
    if(s==59)
    {
       if(m!=59)
        {
          m++; // we keep on incrementing the minute until it becomes 59
        }
        else
        {
          m=0; // as soon as minute becomes 59 it starts from 0 all over again for another 60 minutes and this is repeated
          h++; // we increment the hour by 1
        }
        s=0; // as soon as second becomes 59 it starts from 0 all over again for another 60 seconds and this is repeated 
    }
    else
    {
      s++; // we keep on incrementing the second until it becomes 59	
	}
    Sleep(1000); // pauses the screen for 1 sec
    system("cls"); // clears the screen after every second so that updated time can be printed in the next itertation
  }
  return 0;
}
