/*
    Nama    : I Made Tangkas Wahyu Kencana Yuda
    NIM     : 1608561031
    Matkul  : Pratikum Struktur Data
    Penjelasan:
    Program ini menyimulasikan permainan menyerang dan bertahan (attack and defence) yang mengimplementasikan struktur data stack, queue, dan linked list.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,p,n=5,rn,c,s,r,z=1,y,u=1;
	int a1,a2,d1,d2,h1,h2,x1,x2;
	char serang1[20],serang2[20];
	struct
	{
	    int hp;
		int atk;
		int def;
	}dt[n];
	char nama[][10] = {"panji","fikar","chris","guna","wardana"};
	dt[0].hp = 200; dt[1].hp = 200; dt[2].hp = 200; dt[3].hp = 200; dt[4].hp = 200;
	dt[0].atk = 30; dt[1].atk = 50; dt[2].atk = 70; dt[3].atk = 40; dt[4].atk = 70;
	dt[0].def = 20; dt[1].def = 50; dt[2].def = 30; dt[3].def = 30; dt[4].def = 90;
	do
	{
        system("cls");	z=1;
        printf("\t\t========Dynasty Warrior========\n\n");
        printf("\t\t| Monster | 1 | 2 | 3 | 4 | 5 |\n");
        printf("\t\t| hp      |200|200|200|200|200|\n");
        printf("\t\t| Atk     |30 |50 |70 |40 |70 |\n");
        printf("\t\t| Def     |20 |50 |30 |30 |90 |\n\n");
        for(i=0;i<n;i++)
        {
            printf("%d. %s\n",i+1,nama[i]);
        }
        printf("Pilih Warrior Anda: "),scanf("%d",&p);
        srand(time(0));
        c=p-1;
        for(i=0;i<10;i++)
        {
            rn=rand()%5; // jika tambah data, rubah %data disini
            if(rn!=c)
            {
                break;
            }
        }
        system("cls");
        printf("\n\t\t%s\n\t\t\tvs\n\t\t\t\t%s\n\n\nFIGHT>>...",nama[c],nama[rn]);
        getch();

        a1=dt[c].atk;d1=dt[c].def;h1=dt[c].hp;
        a2=dt[rn].atk;d2=dt[rn].def;h2=dt[rn].hp;
        do
        {
            do
            {
            system("cls");
            printf("Player: %s\nAtk: %d\nDef: %d\nHP : %d\n\n",nama[c],dt[c].atk,dt[c].def,h1);
            printf("Boss: %s\nAtk: %d\nDef: %d\nHP : %d\n\n",nama[rn],dt[rn].atk,dt[rn].def,h2);
            printf("Serang(1)/Bertahan(0): "),scanf("%d",&s);
            }while(s<0||s>1);
            r=rand()%2;
            x1=a1-d2;
            x2=a2-d1;
            y=rand()%3+1;
            switch(y)
            {
                case 1:
                    strcpy(serang1, "Serang");
                    break;
                case 2:
                    strcpy(serang1,"Serang");
                    break;
                case 3:
                    strcpy(serang1,"Serang");
                break;
            }
            switch(y)
            {
                case 1:
                    strcpy(serang2, "Serang");
                    break;
                case 2:
                    strcpy(serang2,"Serang");
                    break;
                case 3:
                    strcpy(serang2,"Serang");
                    break;
            }
            if(s==1&&r==1)
            {
                h1=h1-a2;
                h2=h2-a1;
                printf("%s %s %s\n",nama[c],serang1,nama[rn]);
                printf("%s membalas %s %s",nama[rn],serang2,nama[c]);
            }
            else if(s==1&&r==0)
            {
                h2=h2-a1;
                printf("%s %s %s\n",nama[c],serang1,nama[rn]);
                printf("%s bertahan",nama[rn]);
            }
            else if(s==0&&r==1)
            {
                h1=h1-a2;
                printf("%s bertahan\n",nama[c]);
                printf("%s %s %s\n",nama[rn],serang2,nama[c]);
            }
            else
            {
                printf("Sama-sama bertahan");
            }
            getch();
            if(h1<=0){printf("\n\nYou Win!...");z=0;getch();}
            else if(h2<=0){printf("\n\nMantap Bos...");z=0;getch();}
            else if(h1<=0&&h2<=0){printf("\n\nSeri BOS?...");z=0;getch();}
        }while(z!=0);
	}while(u!=0);
}
