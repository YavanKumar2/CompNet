#include<stdio.h>
int main()
{
  int n,f,frames[30];
  printf("Enter Window Size: ");
  scanf("%d",&n);
  printf("Enter number of frames to transmit");
  scanf("%d",&f);
  printf("Enter %d frames: \n",f);
  for(int i=1;i<=f;i++)
  {
    scanf("%d",&frames[i]);
  }
  printf("With Sliding window protocol after sending %d frames at each stage sender waits for acknowledgement sent by receiver \n",n);
  for(int i=1;i<=f;i++)
  {
    if(i%n==0)
    {
      printf("%d",frames[i]);
      printf("\nAcknowledgement of above frames sent is received by sender\n");
    }
    else{
      printf("%d ",frames[i]);
    }

  }
  if(f%n!=0)
  {
    printf("\nAcknowledgement of above frames sent is received by sender");
  }
}