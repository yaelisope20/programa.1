#include<stdio.h>
int main()
{
    int R1,R2,R3,VR1,VR2,VR3;
    int VT;
    float IR1,IR2,IR3;
    float IT,RT;

    printf("dame la resistencia uno R1:");
    scanf("%d",&R1);
    printf("dame la resistencia dos R2:");
    scanf("%d",&R2);
    printf("dame la resistencia tres R3:");
    scanf("%d",&R3);
    printf("\n");
     printf("dame el voltaje total VT:");
    scanf("%d",&VT);

    VR1=R1/(R1+R2+R3)*VT;
    VR2=R2/(R1+R2+R3)*VT;
    VR3=R3/(R1+R2+R3)*VT;
    RT=(R1*R2*R3)/(R1+R2+R3);

    printf("el voltaje de la resistencia uno es %d volts\n",VR1);
    printf("el voltaje de la resistencia dos es %d volts\n",VR2);
    printf("el voltaje de la resistencia tres es %d volts\n",VR3);
    printf("la resistencia total es %.3f ohms '\n",RT);

    IT=VT/RT;
    printf("la corriente total es %.3f ampers\n",IT);

    IR1=(R2*R3)/(R1+R2+R3);
    IR2=(R1*R3)/(R1+R2+R3);
    IR3=(R1*R2)/(R1+R2+R3);

    printf("la corriente en la resistencia uno es %.3f ampers\n",IR1);
    printf("la corriente en la resistencia dos es %.3f ampers\n",IR2);
    printf("la corriente en la resistencia tres es %.3f ampers\n",IR3);

    return 0;


}
