#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int i;
float overcasty=4, rainn=3, rainy=2,sunnyn=2,sunnyy=3,overcastn=0,alln,ally,all,sunny,rain,overcast,povercast,prain,psunny,pyessunny,pyesrain,pyesovercast,pyes,psunnyy,povercasty,prainy;
clrscr();
ally=overcasty+rainy+sunnyy;
alln=overcastn+rainn+sunnyn;
all=alln+ally;
pyes=ally/all;
sunny=sunnyn+sunnyy;
overcast=overcastn+overcasty;
rain=rainy+rainn;
psunny=sunny/all;
povercast=overcast/all;
prain=rain/all;
prainy=rainy/ally;
psunnyy=sunnyy/ally;
povercasty=overcasty/ally;
pyessunny=(psunnyy*pyes)/psunny;
pyesovercast=(povercasty*pyes)/povercast;
pyesrain=(prainy*pyes)/prain;
printf("~~~~~~~welcome to naive bayes application~~~~~~~~");
printf("\n Press 1 for the probability of Yes/Sunny \n Press 2 for the Probability of Yes/rain \n Press 3 for the Probability of Yes/overcast\n");
scanf("%d", &i);
switch(i){
case 1: printf("P(yes/sunny)= %f \n", pyessunny);
break;
case 2: printf("P(yes/rain)= %f \n",pyesrain);
break;
case 3: printf("P(yes/overcast)= %f \n",pyesovercast  );
break;
default: printf("You enter a invalid input \n");
}
getch();
printf("Thank you\n");
getch();}

