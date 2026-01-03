#include <stdio.h>
#include <stdlib.h>

int main()
{
    int process;
    float sound_volume;
    printf("Welcome sir, welcome to Settings! So now please choose the setting which you want.\n 1-)Graphics\n 2-)Sound\n 3-)Languages\n 4-)Hardness\n 5-)About\n");
    scanf("%d",&process);
    switch(process){
    case 1: printf("Welcome to graphics! Please choose the graphics you want.\n 6-)Low Graphics\n 7-)Medium Graphics\n 8-)High Graphics\n");
    scanf("%d",&process);
    if (process==6)
        printf("Your graphics are low now.\n");
    else if (process==7)
        printf("Your graphics are medium now.\n");
    else if (process==8)
        printf("Your graphics are high now.\n");
    else printf("The number should be 6,7 or 8 sir!\n");
    break;
    case 2:printf("Welcome to Sound Settings! Please set the volume.\n");
    scanf("%f",&sound_volume);
    if (sound_volume>=0 && sound_volume<=100)
        printf("Sound volume is %.2f now.\n",sound_volume);
    else printf("The sound volume can be between 0-100!");
    break;
    case 3: printf("Welcome to Language settings sir! Please choose the language you want.\n 9-)Turkish\n 10-)English\n 11-)German\n 12-)Russian\n 13-)Arabic\n");
    scanf("%d",&process);
    if (process==9)
        printf("Dil: Turkce\n");
    else if (process==10)
        printf("Language: English\n");
    else if (process==11)
        printf("Sprache: Deutch");
    else if (process==12)
        printf("Yazyk: Russky");
    else if (process==13)
        printf("Lugha: Eurabaa");
    else printf("You have to choose right option sir control your choosing after that try again please!");
    break;
    case 4: printf("Welcome to Hardness settings sir! please choose the hardness level you want.\n 14-)Easy\n 15-)Medium\n 16-)Hard\n 17-)Zopzort\n");
    scanf("%d",&process);
    if (process==14)
        printf("Hardness level is Easy now.\n");
    else if (process==15)
        printf("Hardness level is Medium now.\n");
    else if (process==16)
        printf("Hardness level is Hard now.\n");
    else if (process==17)
        printf("Hardness level is Zopzort now:)\n");
    else printf("You have to choose right option sir control your choosing after that try again please!");
    break;
    case 5:printf("I did this cuz I have to make myself better about software so my friend Ferhat and I were studying and after some time\n the lesson was about to end so Ferhat gave me this homework and i was like woh man okay.\n So, now like you see i did it;)");
    break;
    default :
    printf("Are you crazy man choose the right option!!!");
    }
    return 0;
}
