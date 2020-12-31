#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int flight()
{   printf("\n");
    char ans;
    printf("-----------------WELCOME TO BOOK MY FLIGHT.COM-------------------------------------------------\n");
    printf("Because of the crisis we have to implement social distancing in the following ways:\n");
    printf("1. The middle seats should remain vacated\n");
    printf("2. A clean medical mask needs to be worn throughout the journey\n");
    printf("Do you agree to the above mentioned rules? (y/n)\n");
    scanf(" %c",&ans);
    
    if (ans=='y'||ans=='Y')
    {  int avail,book,next; char to[20],date[20],from[20];
       srand(time(NULL));
       
       printf("From: \n");
       scanf("%s", from);
       printf("To:\n");
       scanf("%s", to);
       printf("date (dd/mm/yy) format \n");
       scanf("%s", date);
       
       //i will have to make the user enter time and date
       avail=(rand()%10);
       next=(rand()%8);
       printf("there are %d seats availaible as of now for %s.\nHow many tickets do you want?? \n",avail,to);
       scanf("%d",&book);
       if(book<=avail)
       {
           printf("Your flight has been booked successfully!!! See you on board\n");
        }
        else
        {
            printf("Sorry we don't have that many seats... but we can book your tickets after %d days \nEnter Y/N\n ",next);
            scanf(" %c",&ans);
            if(ans=='y'||ans=='Y')
            printf("Your flight has been booked successfully!!! See you on board\n");
            else{
            printf("Sorry for the inconvinience. Hope to see you again\n");
            }
        }    
        
    
    }
    else
    {
        printf("Sorry we cannot book tickets if you dont agree. Thank you.");
    }
    
    return 0;
}

int bus()
{   printf("****Welcome to iBus****\n");
printf("**Amid of COVID-19,All buses are running on 50% capacity**\n");
for(int i=0;i<100;i++)
{
    printf("-");
}
printf("\n");
char start[]="";
char end[]="";

int bus=0;

printf("From*:");
scanf("%s",start);

printf("To*:");
scanf("%s",end);


printf("*4 Buses are available for this route*\n");

int b_1=rand()%70;
int b_2=rand()%71;
int b_3=rand()%72;
int b_4=rand()%73;

int fare_1 = 24;
int fare_2 = 33;
int fare_3 = 19;
int fare_4 = 29;


printf("1.Bus No.1,Seat Available:%d,Fare:24\n",b_1);
printf("2.Bus No.2,Seat Available:%d,Fare:33\n",b_2);
printf("3.Bus No.3,Seat Available:%d,Fare:19\n",b_3);
printf("4.Bus No.4,Seat Available:%d,Fare:29\n",b_4);

for(int i=0;i<40;i++)
{
    printf("-");
}

printf("\nChoose anyone from above options(enter number only):");
scanf("%d",&bus);  //taking input of regarding train choice

for(int i=0;i<40;i++)
{
    printf("-");
}

//We are taking 80 seats per bus
void bus_booking(int opted,int fare){

int opt_upto=1+(opted-1)*2;
int num_of_passenger=0;
int seat[40];
int seat_1[40];

for(int i=0;;i++)
{
    if(opt_upto>80)
    {
        break;

    }
    else{

      opt_upto += 2;
      seat[i]=opt_upto;

    }
}

printf("Enter the Number of Passenger:\n");
scanf("%d",&num_of_passenger);

for(int i=0;i<num_of_passenger;i++){
    seat_1[i] = seat[i];
}

for(int j=0;j<num_of_passenger;j++){
    printf("Seat number of passenger %d is %d\n",j+1,seat_1[j]);
}
for(int i=0;i<40;i++){
    printf("-");
}
printf("\nTotal fare:%d\n",num_of_passenger*fare);

}


if(bus==1){
    printf("\nWelcome to Bus no.1,No.of Seats Available:%d\n",b_1);
    int opted=80-b_1;
    bus_booking(opted,fare_1);
}
if(bus==2){
    printf("\nWelcome to Bus no.2,No.of Seats Available:%d\n",b_2);
    int opted=80-b_2;
    bus_booking(opted,fare_2);
}
if(bus==3){
    printf("\nWelcome to Bus no.3,No.of Seats Available:%d\n",b_3);
    int opted=80-b_3;
    bus_booking(opted,fare_3);
}
if(bus==4){
    printf("\nWelcome to Bus no.4,No.of Seats Available:%d\n",b_4);
    int opted=80-b_4;
    bus_booking(opted,fare_4);
 }



    return 0;
}

int train()
{   printf("****Welcome to IRCTC****\n");
printf("**Amid of COVID-19,All trains are running on 37.5\% capacity**\n");
for(int i=0;i<100;i++){
    printf("-");
}
printf("\n");
char start[]="";
char end[]="";
char date[]="";
int train=0;

printf("From*:");
scanf("%s",start);

printf("To*:");
scanf("%s",end);

printf("Date(dd/mm/yy):");
scanf("%s",date);

printf("*4 trains are available for this route*\n");

int t_1=rand()%10;
int t_2=rand()%9;
int t_3=rand()%11;
int t_4=rand()%12;

int fare_1 = 875;
int fare_2 = 1048;
int fare_3 = 755;
int fare_4 = 940;


printf("1.Gatiman Express,Seat Available:%d,Fare:875\n",t_1);
printf("2.Rajdhani Express,Seat Available:%d,Fare:1048\n",t_2);
printf("3.Shatabdi Express,Seat Available:%d,Fare:755\n",t_3);
printf("4.Duronto Express,Seat Available:%d,Fare:940\n",t_4);

for(int i=0;i<40;i++){
    printf("-");
}

printf("\nChoose anyone from above options :");
scanf("%d",&train);

for(int i=0;i<40;i++){
    printf("-");
}

void booking(int opted,int fare)
{

    int n=1;
    int seat[27];
    int t=0;
    int num_of_passenger=0;
    
    for(int i=1;i<10;i++)
    {
        if(3*n >= opted)
        {
            break;
        }
    n +=1;
    }
    t=opted-3*(n-1);
    int x=2;
    int y=1;
    int z=0;
    if(t==1)
    {
        for(int i =n;i<10;i++)
        {
    
            if(i==n)
            {
                seat[0]=8*(i-1)+4;
                seat[1]=8*(i-1)+7;
            }
    
            if(i>n)
            {
                seat[x]=8*(i-1)+1;
                seat[x+1]=8*(i-1)+4;
                seat[x+2]=8*(i-1)+7;
                x+=1;
            }
        }
    }
    if(t==2)
    {
        for(int i=n;i<10;i++)
        {
            if(i==n)
            {
                seat[0]=8*(i-1)+7;
    
            }
            if(i>n)
            {
                seat[y]=8*(i-1)+1;
                seat[y+1]=8*(i-1)+4;
                seat[y+2]=8*(i-1)+7;
                y+=1;
            }
        }
    }
    if(t==3)
    {
        for(int i=n;i<10;i++)
        {
    
            if(i>n)
            {
                seat[z]=8*(i-1)+1;
                seat[z+1]=8*(i-1)+4;
                seat[z+2]=8*(i-1)+7;
                z+=1;
            }
       }
    
    }
    
    int seat_1[27];
    
    
    printf("Enter the Number of Passenger:\n");
    scanf("%d",&num_of_passenger);
    
    for(int i=0;i<num_of_passenger;i++)
    {
        seat_1[i] = seat[i];
    }
    
    for(int j=0;j<num_of_passenger;j++)
    {
        printf("Seat number of passenger %d is %d\n",j+1,seat_1[j]);
    }
    for(int i=0;i<40;i++)
    {
        printf("-");
    }
    printf("\nTotal fare:%d\n",num_of_passenger*fare);
    
}
    
    if(train==1)
    {
        printf("\nWelcome to Gatiman Express,No.of Seats Available:%d\n",t_1);
        int opted=27-t_1;
        booking(opted,fare_1);
    }
    if(train==2)
    {
        printf("\nWelcome to Rajdhani Express,No.of Seats Available:%d\n",t_2);
        int opted=27-t_2;
        booking(opted,fare_2);
    }
    if(train==3)
    {
        printf("\nWelcome to Shatabdi Express,No.of Seats Available:%d\n",t_3);
        int opted=27-t_3;
        booking(opted,fare_3);
    }
        if(train==4)
        {
        printf("\nWelcome to Duronto Express,No.of Seats Available:%d\n",t_4);
        int opted=27-t_4;
        booking(opted,fare_4);
        }
    
        return 0;
}
void Booking();
void curLocName(int n);
void cabBook();
void cabDetails(int n);
void cabCancel();
void updateTime();
struct remTime
{
    int cabArvl;
    int destArvl;
}t;
struct cab
{
    char name[10];
    char numPlate[12];
    int curLoc;
}c[5];

struct user
{
    int yourLoc;
    int destLoc;
    int cabBooked;
    int cabNum;
    int inCab;
}u;

int CAB()
{   int i,n;
    u.cabBooked=0,u.cabNum=-1,u.inCab=0;
    while (1)
    {
        printf("\n-----Menu-----\n");
        printf("1.Book\n2.Cab Details\n3.Cab Location\n4.Your Location\n5.Update Time\n6.Cancel\n");
        scanf("%d",&i);
        switch (i)
        {
            case 1 : cabBook();break;
            case 2 : cabDetails(u.cabNum);break;
            case 3 : printf("Cab ");curLocName(c[u.cabNum].curLoc);break;
            case 4 : printf("Your ");curLocName(u.yourLoc);break;
            case 5 : updateTime();break;
            case 6 : cabCancel();break;
            default: printf("Error\n");break;
        }
        printf("--------------");
    }

    return 0;
}
void Booking()
{
    printf("Enter Your Location\n0.Cherkala\n1.Chattanchal\n2.Kalanad\n3.Chemnad\n4.Kasaragod\n");
    scanf("%d",&u.yourLoc);
    if (u.yourLoc>4 || u.yourLoc<0)
    {
        printf("Error : Cab Facility is not there for that Location\n");
        return;
    }

    printf("Enter Your Destination\n0.Cherkala\n1.Chattanchal\n2.Kalanad\n3.Chemnad\n4.Kasaragod\n");
    scanf("%d",&u.destLoc);
    if (u.destLoc>4 || u.destLoc<0)
    {
        printf("Error : Cab Facility is not there for that Location\n");
        return;
    }

    if(u.yourLoc==u.destLoc)
    {
        printf("Error : Same Location\n");
        return;
    }

    u.cabBooked=1;
    srand(time(0));
    u.cabNum=(rand()%5);
    c[u.cabNum].curLoc=(rand()%5);

    printf("Your Cab has been booked\n");

    printf("Cab ");
    curLocName(c[u.cabNum].curLoc);
    return;
}
void curLocName(int n)
{
    if (u.cabBooked!=1)
    {
        printf("You have yet to Book a Cab.\n");
        return;
    }

    printf("Current Location : ");
    switch (n)
    {
        case 0 : printf("Delhi\n");break;
    //    case 0 : printf("Cherkala\n");break;
        case 1 : printf("Chattanchal\n");break;
        case 2 : printf("Kalanad\n");break;
        case 3 : printf("Chemnad\n");break;
        case 4 : printf("Kasaragod\n");break;
        default: printf("Error\n");return;
    }
    return;
}
void cabBook()
{
    if (u.cabBooked==1)
    {
        printf("You have already booked a Cab\n");
        return;
    }

    Booking();

    strcpy(c[0].name,"Arjun");
    strcpy(c[1].name,"Kuruvila");
    strcpy(c[2].name,"Joseph");
    strcpy(c[3].name,"Kabir");
    strcpy(c[4].name,"Adhitya");

    strcpy(c[0].numPlate,"KL14 X 3114");
    strcpy(c[1].numPlate,"KL14 Z 7692");
    strcpy(c[2].numPlate,"KL14 Q 4215");
    strcpy(c[3].numPlate,"KL14 V 4251");
    strcpy(c[4].numPlate,"KL14 W 5642");

    return;
}
void cabDetails(int n)
{
    if(u.cabBooked==1)
    {
        printf("Your Cab Details\nDriver : %s\nNumber Plate : %s\n",c[n].name,c[n].numPlate);
        curLocName(c[n].curLoc);
        return;
    }
    printf("You have yet to Book a Cab.\n");
    return;
}

void cabCancel()
{
    if(u.cabBooked==1)
    {
        printf("Your Cab has been Cancelled\n");
        u.cabBooked=0;
        return;
    }
    printf("You have yet to Book a Cab\n");
    return;
}

void updateTime()
{
    int n;
    t.cabArvl=u.yourLoc-c[u.cabNum].curLoc;
    t.destArvl=u.destLoc-u.yourLoc;
    if (u.yourLoc>c[u.cabNum].curLoc)
    {
        printf("Cab Arrival in %d mins\n",abs(t.cabArvl));
        c[u.cabNum].curLoc=((c[u.cabNum].curLoc+1)%5);
        return;
    }
    else if (u.yourLoc<c[u.cabNum].curLoc)
    {
        printf("Cab Arrival in %d mins\n",abs(t.cabArvl));
        c[u.cabNum].curLoc=((c[u.cabNum].curLoc-1)%5);
        return;
    }
    if (u.yourLoc==c[u.cabNum].curLoc)
    {
        if (u.inCab==0)
        {
            printf("Cab Arrived\n");
            printf("How many people are there?\n");
            scanf("%d",&n);
            if (n!=1)
            {
                printf("Due to Corona Precautions only a single person travel in a cab. Hope you understand.\n");
            }
            printf("Please Enter the Cab\n");
            u.inCab++;
            return;
        }
        printf("Destination Arrival in %d mins\n",abs(t.destArvl));
        curLocName(u.yourLoc);
        if (t.destArvl>0)
        {
            u.yourLoc=(u.yourLoc+1)%5;
            c[u.cabNum].curLoc=(c[u.cabNum].curLoc+1)%5;
        }
        else if (t.destArvl<0)
        {
            u.yourLoc%=(u.yourLoc-1)%5;
            c[u.cabNum].curLoc%=(c[u.cabNum].curLoc-1)%5;
        }
        else
        {
            printf("Destination Reached\n");
            printf("Hope you Enjoyed the Ride\n");
            exit(0);
        }
    }
}


int main()
{   int opt;
    printf("-----------------*WELCOME TO POST-CORONA TRANSPORTATON SYSTEM*---------------------------------\n");
    printf("-----------------*WE HELP YOU BOOK TICKETS KEEPING IN MIND SOCIAL DISTANCING*------------------\n");
    printf("How do you want to travel ??\n");
    printf("1. Book a flight.\n");
    printf("2. Book a train ticket.\n");
    printf("3. Take a CAB\n");
    printf("4. Book a bus ticket.\n");
    printf("\n");
    printf("Enter the option number.");
    scanf("%d",&opt);
    switch (opt)
    {
        case 1: flight();break;
        case 2: train();break;
        case 3: CAB();break;
        case 4: bus();break;
        default: printf("please enter a valid option");
    }
    return 0;
}