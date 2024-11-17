#include<stdio.h>
int main()
{
    int num,cnt=1,cnt1=0,temp=0,temp1=0;
    printf("Enter A Num : ");
    scanf("%d",&num);
    for(num;num<=99;num++)
    {
      temp=num;
      cnt=0;
      while(temp!=1)
      {
        if(temp%2==0)
            temp=temp/2;
        else
            temp=3*temp+1;
        cnt++;
        
      }
      if(cnt>cnt1){
      cnt1=cnt;
      temp1=num;
      }
    }
    printf("cnt1 = %d\ttemp1 = %d ",cnt1,temp1);
}
