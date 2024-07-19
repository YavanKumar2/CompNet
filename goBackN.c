#include<stdio.h>
int main()
{
  int window=0;
  printf("Enter window size: ");
  scanf("%d",&window);
  int sent=0,ack;
  while(1)
  {
    for(int i=0;i<window;i++)
    {
      printf("Frame transmitted %d\n",sent);
      sent++;
      if(sent==window)
        break;
    }
    printf("Enter last received acknowledgement: ");
    scanf("%d",&ack);
    if(ack==window)
      break;
    else
      sent=ack;
  }
}