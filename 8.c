#include <stdio.h>
int main()
{
    int H,Min,Sec,next;
    scanf("%d:%d:%d",&H,&Min,&Sec);
    if(H>=0 && H <=23 ){
        if(Min >= 0 &&Min<=59){
            if(Sec >= 0 &&Sec<=59){
                printf("Hour:%d\nMinute:%d\nsecond:%d\n",H,Min,Sec);
           }
        }
    }
    printf("Next minutes: ");
    scanf("%d",&next);
    if(next >=0 && next <=120){
        if(next+Min>=60){
            H+=1;
            if(H>=24){
                H=1;
                 printf("Hour:%d\nMinute:%d\nsecond:%d\n",H,Min+next-60,Sec);
            }else{
                 printf("Hour:%d\nMinute:%d\nsecond:%d\n",H,Min+next-60,Sec);
            }
        }
    }
    return 0;
}
