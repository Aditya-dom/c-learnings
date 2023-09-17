#include <stdio.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
struct driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms
};
int main()
{
struct driver d1,d2,d3;

//d1
printf("Enter the details of the Driver No. 1\n" );
printf("Enter the name of the first drivers\n");
scanf("%s", &d1.name);
printf("Enter the dl no. of the first drivers\n" );
scanf("%s", &d1.dlNo);
printf("Enter the route of the first drivers\n" );
scanf("%s", &d1.route);
printf("Enter the numbers of kms of the first drivers\n" );
scanf("%d", &d1.kms);

//d2
printf("Enter the details of the Driver No. 2\n" );
printf("Enter the name of the second drivers\n");
scanf("%s", &d2.name);
printf("Enter the dl no. of the second drivers\n" );
scanf("%s", &d2.dlNo);
printf("Enter the route of the second drivers\n" );
scanf("%s", &d2.route);
printf("Enter the numbers of kms of the second drivers\n" );
scanf("%d", &d2.kms);

//d3
printf("Enter the details of the Driver No. 3\n" );
printf("Enter the name of the third drivers\n");
scanf("%s", &d3.name);
printf("Enter the dl no. of the third drivers\n" );
scanf("%s", &d3.dlNo);
printf("Enter the route of the third drivers\n" );
scanf("%s", &d3.route);
printf("Enter the numbers of kms of the third drivers\n" );
scanf("%d", &d3.kms);

printf("@@@@Printin' Information of these drivers:@@@@\n");
printf("For Driver No1:\n Name is %s",d1.name);
printf("Dl number is %s\n",d1.dlNo);
printf("Route is %s\n",d1.route);
printf("kms is %d\n",d1.kms);

printf("For Driver No2:\n Name is %s",d2.name);
printf("Dl number is %s\n",d2.dlNo);
printf("Route is %s\n",d2.route);
printf("kms is %d\n",d2.kms);

printf("For Driver No3:\n Name is %s",d3.name);
printf("Dl number is %s\n",d3.dlNo);
printf("Route is %s\n",d3.route);
printf("kms is %d\n",d3.kms);
}


