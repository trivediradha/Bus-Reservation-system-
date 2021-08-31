#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
static int P=0;
class a
{
char busn[5],arrival[10],depart[10],From[10],to[10],seat[4][10];
public:
void install();
void allotment();
void empty();
void show();
void position(int i);
}
bus[10];
void vline(char ch)
{
for(int i=80;i>0;i--)
cout<<ch;
}
void a::install()
{
clrscr();
textcolor(YELLOW);
printf("\n");
cprintf("Enter bus no:-");
cin>>bus[P].busn;
printf("\n");
cprintf("Departure Time:-");
cin>>bus[P].depart;
printf("\n");
cprintf("Arrival Time:-");
cin>>bus[P].Arrival;
printf("\n");
cprintf("From:-");
cin>>bus[P].From;
printf("\n");
cprintf("To:-");
cin>>bus[P].to;
bus[P].empty();
p++;
}
void a::allotment()
{
int seat;
char number[5];
top:
textcolor(12);
cprintf("Bus no:-");
printf("\n");
cin>>number;
int n;
for(n=0;n<=p;n++)
{
if(strcmp(bus[n].busn,number)==0)
break;
}
while(n<=P)
{
cprintf("seat numbers:-");
printf("\n");
cin>>seat;
if(seat>32)
{
cprintf("\n There are only 32 seats available in this bus.");
}
else
{
if strcmp(bus[n].seat[seat/4]
(seat%4)-1],"Empty")==0)
{
cprintf("Enter passenger's name:-");
printf("\n");
cin>>bus[n].seat[seat/4][(seat%4)-1];
break;
}
else
printf("The seat no.is already reserved.");
printf("\n");
}
}
if(n>P)
{
cprintf("Enter correct bus no.\n");
printf("\n");
goto top;
}
}
void a::empty()
{
for(int i=0;i<8;i++)
{
for(int j=0;j<4;j++)
{
strcpy(bus[P].seat[i][j],"Empty");
}
}
}
void a::show()
{
int n;
char number[5];
textcolor(2+0);
cprintf("Enter bus no:-");
cin>>number;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,"c:||TC||BGI");
settextstyle(DEFAULT=FONT,HORIZ_DIR,2);
outtexty(177,180,"Loading,please wait..");
for(i=190;i<510;i++)
{
delay(30);
line(i,210,i,230);
}
closegraph();
getch();
for(n=0;n<=p;n++)
{
if(strcmp(bus[n].busn,number)==0)
break;
while(n<==P)
{
vline('*');
cout<<"Bus no:\t"<<bus[n].busn<<"\tDeparture time:"<<bus[n].departure<<"\tArrival time:\t"<bus[n].arrival<<"\n From:\t\t"<<bus[n].from<<"\t\t To:\t\t"<<bus[n].to<<"\n";
vline('*')
bus[0].position(n);
int a=1;
for(int i=0;j<8;i++)
{
for(int j=0;j<4;j++)
{
a++;
if(strcmp(bus[n]seat[i][j],"Empty")!=0)
cout<<"\n The seat No"<<a-1)<<"is reserved for"<<bus[n].seat[i][j]<<".";
}
}
break;
}
if(n>p)
cout<<"Enter correct bus no:";
}
void a::position(int l)
{
int S=0;P=0;
for(int i=0;i<8;i++)
{
cout<<"\n";
for(int j=0;j<4;j++)
{
s++;
if(strcmp(bus[l].seat[i][j],"Empty")==0)
{
cout.width(5);
cout.fill(' ');
cout<<s<<".";
cout<<bus[l].seat[i][j]];
p++;
}
else
{
cout.width(5);
cout.fill(' ');
cout<<s<<".";
cout.width(10);
cout.fill(' ');
cout<<bus[l].seat[i][j];
}
}
}
cout<<"\n\n There are"<<P<<"seats empty in BUs No:"<<bus[l].busn;
}
int main()
{
clrscr()
{
int gd=DETECT,gm;
int i;
initgraph(&gd,&gm,"c:\\TC\\BGI");
for(i=0;i<=500;i++)
{
cleardevice();
//road
line(0+i,390,640+i,390);
line(50+i,360,105+i,360);
line(135+i,360,0,180,0);
line(165+i,360,280+i,360);
arc(310+i,360,0,180,30);
line(340+i,360,385+i,360);

line(50+i,360,50+i,210);
line(385+i,360,385+i,210);
line(50+i,210,385+i,210);
line(50+i,280,385+i,280);
line(130+i,210,130+i,280);
line(210+i,210,210+i,280);
line(290+i,210,290+i,280);

rectangle(60+i,270,120+i,270);
rectangle(140+i,270,200+i,220);
rectangle(220+i,270,280+i,220);
rectangle(300+i,270,375+i,220);

circle(135+i,360,25);
circle(310+i,360,25);
line(375+i,270,360+i,255);
arc(358+i,253,0,360,5);

circle(325+i,240,9);
line(322+i,249,324+i,270);
line(322+i,249,358+i,255);
settextstyle(1,HORIZ_DIR,2);
setbkcolor(6+2);
outtextxy(100+i,300,"Loading please wait...");
delay(5);
}
closegraph()
system("cls");
int w;
while(l)
{
system("cls");
cout<<"\n\n";
textcolor(11+BLINK);
cprintf("\n Bus Reservation system");
cout<<"\n\n";
textcolor(YELLOW);
cprintf(" 1.Available Bus Numbers\n");
printf("\n");
cprintf(" 2.Install \n");
printf("\n");
cprintf("  3.Reservation \n");
printf("\n");
cprintf("  4.Show\n");
printf("\n");
cprintf(" 5.Exit\n");
printf("\n");
cprintf("\n Enter Your choice:-");
cin>>(W)
switch(W)
{
Case 1:
textcolor(12);
cprintf("****************************");
printf("\n");
cprintf("\n .*1.321**5.009*");
printf("\n");
cprintf("\n .*2.432**6.435*");
printf("\n");
cprintf("\n .*3.888 **7.998*");
printf("\n");
cprintf("\n .*4.112**8.221*");
printf("\n");
cprintf("\n ***");
getch();
//main();
break;
clrscr();
Case 2:bus[P].install();
getch();
//main();
break;
Case3:bus[P].allotment();
getch();
//main();
break;
clrscr();
Case 4:
bus[0].show();
getch();
//main();
break;
Case 5:exit(0);
}
}
return 0;
}
getch();
}
}











