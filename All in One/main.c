#include <stdio.h>
#include <stdlib.h>

//Abdirahman Ahmed Mohamed  ID: 16268


int main()
{
    int x= 15, y= 20, z;

    z=x+y;
    printf("\nTask 1\n");
    printf("\naddition with two variable\n");
    printf("x+y=%d\n",z);


    printf("\n Task 2\n");
    printf("\nint myNum = 5;\n");
    printf("float myFloatNum = 5.99;\n");
    printf("char myLetter = 'D'\n");


    printf("\n Task 3\n");
    printf("\nmultiplying of 10 with 5\n");
    int a=10, b=5, c;
    c=a*b;
    printf("a*b=%d\n",z);

    printf("\n Task 4\n");
    printf("\nUnchangeble or read only keyword is = a Constant \n");


{

    printf("\n Task 5\n");

    int x = 20;
    int y = 18;
    if (x > y)
    printf("x is greater than y\n");
}

{

    printf("\n Task 6\n");
    int x=10;
    int y=10;

	if (x == y)


		printf("YES\n",&x);


		else

        printf("NO\n",&x);



}





        printf("\n Task 7\n");

        int i = 0;
        while (i < 6) {
         printf("%d\n", i);
         i++;
    }


        printf("\n Task 8\n");
    for (int i = 0; i < 5; i++){

        if (i == 5){
            break;
        }
        printf("%d\n", i);
    }

    {


    printf("\n Task 9\n");
    int myNumbers[5] = {10, 20, 30, 40, 50};
    printf("the value of second array %d\n", myNumbers[1]);
    myNumbers[0] = 30;

    int i;

    for (i = 0; i < 4; i++)
        printf("%d\n", myNumbers[i]);
    }


    {
        printf("\n Task 10\n");
        char greetings[] = "Hi";
        printf("%s", greetings);

    }


{
    printf("\n\n\n Task 11\n");
    void myName(){

    printf("my name is Abdirahman Ahmed Mohamed");
    }
    myName();


}

    printf("\n\n\n Task 12\n");
    void myFunction(char name []){
        printf("Hello %s", name);
    }
    myFunction("Abdirahman Ahmed Mohamed");
{


}

{
    printf("\n\n\n Task 13\n");
    int myAge = 20;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge
printf("%d\n", myAge);

// Output the memory address of myAge
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer
printf("%p\n", ptr);

}



{

 printf("\n Task 14\n");
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[5];


    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
}





{


    printf("\n\n\n Task 15\n\n\n");
    typedef struct{
    char name[30];
    int id;
    double salary;
} Employee;



    //number of employees
    int n=2;

    //array to store structure values of all employees
    Employee employees[n];

    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Id \t: ");
        printf("%d \n",employees[i].id);

        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        printf("\n");
    }
}



{

  printf("\n Task 16\n");
  int i=0,j=0;
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};

    for(i=0;i<4;i++){
    for(j=0;j<3;j++){
   printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);
 }
}

}
    return 0;
}
