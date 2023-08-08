#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"all_functions.c"

// #define PI 3.148
// #include "swap.c"
// name()
    
int main(){
    // 1st program
    // int id;
    // char name[20];
    // int phone_no;
    // printf("Enter you id : ");
    // scanf("%d", &id);       // cin >> id;
    // printf("\n");           // cout << endl; or cout << "\n";
    // printf("enter your name :");
    // scanf("%s", &name);
    // printf("\n");           // cout << endl; or cout << "\n";
    // printf("Enter your phone No :");
    // scanf("%d", &phone_no);
    // printf("Your id %d and your name %s and your phone no is %d ", id, name, phone_no);

    // 2nd program
    // int id,wrk,sal=15000,total;
    // printf("E N T E R UR ID : ");
    // scanf("%d", &id);
    // printf("E N T E R UR WORKING HOURS : ");
    // scanf("%d", &wrk);
    // total=wrk*sal;
    // printf("Employees Id: %d\n", id);
    // printf("Salary: %d",total);

    // 3rd program
    // float rad,tot;
    // printf("enter radius: ");
    // scanf("%f",&rad);
    // tot=(4.00/3.00)*(3.148)*(rad*rad*rad);
    // printf("ur area of sphere: %f",tot);

    // // 4th program
    // int input,output,output2,output3;
    // printf("enter any number: ");
    // scanf("%d",&input);
    // output= (input/365);
    // output2= ((input%365)/7);
    // output3= ((input%365)%7);
    // printf("years: %d and weeks: %d and the remaining days: %d", output, output2, output3);

    // 5th program
    // int input,rem1,rem2,rem3,rem4,rem5,rem6,rem7;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // printf("100 - %d\n", input/100);
    // rem1 = input%100;
    // printf("50 - %d\n", rem1/50);
    // rem2 = rem1%50;
    // printf("20 - %d\n", rem2/20);
    // rem3 = rem2%20;
    // printf("10 - %d\n", rem3/10);
    // rem4 = rem3%10;
    // printf("5 - %d\n", rem4/5);
    // rem5 = rem4%5;
    // printf("2 - %d\n", rem5/2);
    // rem6 = rem5%2;
    // printf("1 - %d", rem6);

    // 6th program
    // int principle,time;
    // float rate,compound;
    // printf("enter ur priciple: ");
    // scanf("%d",&principle);
    // printf("enter ur rate: ");
    // scanf("%f",&rate);
    // printf("enter ur time: ");
    // scanf("%d",&time);
    // compound = principle*pow((1 + rate/100),time);
    // printf("ur compound: %f",compound);

    // 7th program
    // int marks,sum=0,n=1,total,i;
    // for (i=0;i<5;i++)
    // {
    //     printf("enter ur %d marks: ",n++);
    //     scanf("%d",&sum);
    //     total += sum;
    // }
    // printf("ur avg marks: %d",total/5);

    // 8th program
    // int x,y;
    // printf("enter ur no.: ");
    // scanf("%d %d",&x,&y);
    // x = x + y; 
    // y = x - y; 
    // x = x - y; 
    // printf("After Swapping: x = %d, y = %d", x, y);

    // 9th program
    // int a, b;
    // printf("enter ur no.: ");
    // scanf("%d %d",&a,&b);
    // if(a>b){
    //     printf("%d is greater than %d",a,b);
    // }
    // else{
    //     printf("%d is greater than %d",b,a);
    // }

    // 10th program
    // int a, b, c;
    // printf("enter ur no.: ");
    // scanf("%d %d %d",&a,&b,&c);
    // if(a>b && a>c){
    //     printf("%d is greater than %d and %d",a,b,c);
    // }
    // if(a<b && b>c){
    //     printf("%d is greater than %d and %d",b,a,c);
    // }
    // if(c>b && c>a){
    //     printf("%d is greater than %d and %d",c,a,b);
    // }

    // 11th program
    // int input;
    // printf("enter ur year: ");
    // scanf("%d",&input);

    // (input%400==0 || ((input%4==0) && (input%100!=0)))?printf("this is a leap year"):printf("this is not a leap year");
    
    // 12th program
    // int x,y;
    // printf("enter ur no.: ");
    // scanf("%d %d",&x,&y);
    // x = x ^ y; 
    // y = x ^ y; 
    // x = x ^ y; 
    // printf("After Swapping: x = %d, y = %d", x, y);

    // 13th program
    // int input,rev=0,temp=0;
    // printf("enter any 4 digit no.: ");
    // scanf("%d",&input);

    // while(input>0){
    //     rev = input%10;
    //     temp = temp* 10 + rev;
    //     input /= 10;
    // }
    // printf("reverse no. is: %d",temp);

    // 14th program                                              double reverse
    // int input,input2;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // input2 = input;
    // int temp=0;
    // while(input2>0){
    //     int rev = input2%10;
    //     temp = temp* 10 + rev;
    //     input2 /= 10;
    // }

    // int inputt = temp;
    // while(inputt>0){
    //     int revv = inputt%10;
    //     inputt /= 10;
    //     printf("no. is: %d\n",revv);
    // }
    // printf("%d",input);

    // 15th program
    // int input,input2;
    // printf("enter ur no. to sum: ");
    // scanf("%d",&input);
    // input2=input;

    // int sum=0;
    // while(input2>0){
    //     int rev= input2%10;
    //     sum = sum+rev;
    //     input2/=10;
    // }
    // printf("sum of ur no.: %d",sum);

    // 16th program                                            odd positions ka addition
    // int input,input2;
    // printf("enter ur no. to sum: ");
    // scanf("%d",&input);
    // input2=input;

    // int sum=0,count=0;                     
    // while(input2>0){
    //     count++;
    //     int rev= input2%10;
    //     if(count%2!=0){
    //         sum = sum+rev;
    //     }
    //     input2/=10;
    // }
    // printf("sum of ur no.: %d",sum);

    // 17th program
    // int sum = 1;2,3;
    // int sum2 = (1,2,3>>1);

    // printf("%d",sum);
    // printf("%d",sum2);

    // 18th program                                             natural no. tk print
    // int n,input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // n=1;
    // while(input>0){
    //     input--;
    //     printf("%d\n",n++);
    // }

    // 19th program                                              a to z print
    // char c = 'a';
    // while(c <= 'z'){
    //     printf("%c ", c);
    //     c++;
    // }

    // 20th program                                              odd no.'s ka print
    // int i,odd;
    // for(i=1;i<=100;i++){
    //     if(i%2==0){
    //     printf("%d\n",i);
    //     }else
    //     {
    //     printf("%d  ",i);
    //     }
    // }

    // 21st program                                              odd ka addition
    // int i,input,sum=0;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // for(i=1;i<=input;i++){
    //     if(i%2==1){
    //         sum += i;  
    //         printf("%d\n",i);      
    //     }
    // }
    // printf("sum of these odd no.'s: %d\n",sum);

    // 22nd program                                               input ka multiplication table
    // int i,end,input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // printf("------table of %d------\n",input);
    // for(i=1;i<=10;i++){
    //     end = input*i;
    //     printf("%d * %d = %d\n",input,i,end);
    // }

    // 23rd program                                              position count of input
    // int i,input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // for(i=0;input>0;i++){
    //     input /= 10;
    // }
    //     printf("%d",i);

    // 24th program                                              1st nd last index summm...
    // int input,input2,sum=0;
    // printf("enter ur no.: ");
    // scanf("%d",&input);

    // input2 = input;

    // int first,last = input2 % 10;
    // while(input>0){
    //     first = input % 10;
    //     sum += first;
    //     input /= 10;
    // }
    // printf("%d + %d = %d\n",last,first,(last+first));
    // printf("sum of all no.'s: %d\n",sum);
    
    // 25th program                                              ALL POSITIONING CONCEPT
    // int input,input2,input3;
    // printf("enter ur no.: ");
    // scanf("%d",&input);

    // input2 = input;
    // input3 = input;

    // int first,last = input2 % 10;
    // while(input3>0){
    //     first = input3 % 10;
    //     input3 /= 10;
    // }
    // int temp=0,rev;
    // while(input>9){
    //      rev = input % 10;
    //      temp = temp * 10 + rev;
    //      input /= 10;
    // }
    // temp = temp * 10 + last;
    // input = temp;
    // int tempp=0,revv;
    // while(input>9){
    //      revv = input % 10;
    //      tempp = tempp * 10 + revv;
    //      input /= 10;
    // }
    // tempp = tempp * 10 + first;
    // printf("after swapping first and last position: %d",tempp);

    // 26th program                                                    PALINDROME
    // int input,temp=0;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // int input2 = input;
    // for(int i=0;input2>0;i++){
    //     int j = input2 % 10;
    //     temp = temp*10 + j;
    //     input2 /= 10;
    // }
    //     // printf("%d\n",temp);
    //     if(temp==input){
    //         printf("this is palindrome");
    //     }else{
    //         printf("this is not palindrome");
    //     }

    // 27th program                                                  FREQUENCY FOR INTEGER
    // int input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // int input2=input;
    // int c,c1,c2,c3,c4,c5;
    // c=c1=c2=c3=c4=c5=0;
    // for(int i=0;input2>0;i++){
    //     int j = input2 % 10;
    //     if(j == 0) c++;
    //     if(j == 1) c1++;
    //     if(j == 2) c2++;
    //     if(j == 3) c3++;
    //     if(j == 4) c4++;
    //     if(j == 5) c5++;
    //     input2 /= 10;
    // }
    // printf("%d %d %d %d %d %d",c,c1,c2,c3,c4,c5);

    // 28th program                                                    WORDS FOR GIVEN NO. BY INDEX
    // int input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // int input2=input,temp=0;
    // for(int i=0;input2>0;i++){
    //     int j = input2 % 10;
    //     temp = temp*10 + j;
    //     input2 /= 10; 
    // }
    // int k;
    // for(k=0;temp>0;k++){
    //     int l = temp % 10;
    //     if(l == 0) printf("zero\t");
    //     if(l == 1) printf("one\t");
    //     if(l == 2) printf("two\t");
    //     if(l == 3) printf("three\t");
    //     if(l == 4) printf("four\t");
    //     if(l == 5) printf("five\t");
    //     temp /= 10;
    // }

    // 29th program                                                      ASCII VALUE
    // int input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);

    // for(int i=0;i<=input;i++){
    //     printf("%c ",i);
    // }

    // 30th program                                                      POWER OF A NO. BY FOR LOOP
    // int input,input2;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // printf("enter ur 2nd no.: ");
    // scanf("%d",&input2);
    // int a=1;
    // for(int i=input2;i>0;i--){
    //     a = a*input;
    // }
    // printf("%d",a);

    // -----<>------   -------<>-------
    // int a = 1;   
    // for(int i = 1; i<=10; i++) printf("%d ", i);
    // printf("\n");
    // for(int i = 10; i> 0; i--) printf("%d ", i);

    // 31st program
    // int input;                                                          PRIME FACTOR
    // printf("enter ur no.: ");
    // scanf("%d",&input);

    // while(input%2==0)
    //     printf("%d ",2);
    //     input /= 2;
    // }

    // for(int i=3;i<=input;i++){
    //     while(input%i==0){
    //         printf("%d ",i);
    //         input /= i;
    //     }
    // }

    // 32nd program                                                         FACTORIAL                                                                   
    // int input;                                                         
    // printf("enter ur no.: ");
    // scanf("%d",&input);

    // int fac=1;
    // for(int i=1;i<=input;i++){
    //     fac *= i;
    // }
    // printf("%d",fac);

    // 33rd program
    // int input,c=0;                                                       no. is prime or not
    // printf("enter ur no.: ");
    // scanf("%d", &input);

    // for(int i = 1; i <= input; i++){
    //     if (input % i == 0) {
    //        c++;
    //     }
    // }
    // (c == 2)?printf("%d is a Prime number",input):printf("%d is not a Prime number",input);

    // 34th program                                                        SUM OF PRIME NO. FROM 1 TO N.....
    // int input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);

    // int sum=0;
    // for(int i=1;i<=input;i++){
    //     int count=0;
    //     for(int j=1;j<=i;j++){
    //         if(i%j==0){
    //             count++;
    //         }
    //     }
    //     if(count == 2){
    //         sum = sum + i;
    //         printf("%d\n",sum);
    //     }
    // }
    // printf("sum of prime numbers is: %d",sum);

    // 35th program                                                         ARMSTRONG NUMBER
    // int input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);
    // int total=0,input2 = input;
    // while(input2>0){
    //    int rem=input2%10;
    //    total=total+(rem*rem*rem);
    //    input2=input2/10;
    // }
    // if(input==total)
    //    printf("This is Armstrong number");
    // else
    //    printf("This is not Armstrong number");

    // 36th program                                                        L.C.M of two positive numbers
    // int input1, input2, max;

    // printf("Enter two positive integers: ");
    // scanf("%d %d", &input1, &input2);

    // max = (input1 > input2) ? input1 : input2;

    // while (1) {
    //     if ((max % input1 == 0) && (max % input2 == 0)) {
    //         printf("The LCM of %d and %d is %d.", input1, input2, max);
    //         break;
    //     }
    //     ++max;
    // }

    // 37th program                                                         H.C.F of two positive numbers
    // int input1, input2, min, hcf=1;

    // printf("Enter any two numbers to find HCF: ");
    // scanf("%d %d", &input1, &input2);

    // min = (input1<input2) ? input1 : input2;

    // for(int i=1; i<=min; i++){
    //     if(input1%i==0 && input2%i==0){
    //         hcf = i;
    //     }
    // }
    // printf("HCF of %d and %d = %d\n", input1, input2, hcf);


                            // -----------< SWTICH CASE >---------------

    // 38th program                                                         find vowel by switch case
    // char input;
    // printf("enter ur alphabet: ");
    // scanf("%c", &input);

    // /* Switch value of ch */
    // switch(input)
    // {
    //     case 'a': 
    //         printf("Vowel");
    //         break;
    //     case 'e': 
    //         printf("Vowel");
    //         break;
    //     case 'i': 
    //         printf("Vowel");
    //         break;
    //     case 'o': 
    //         printf("Vowel");
    //         break;
    //     case 'u': 
    //         printf("Vowel");
    //         break;
    //     case 'A': 
    //         printf("Vowel");
    //         break;
    //     case 'E': 
    //         printf("Vowel");
    //         break;
    //     case 'I': 
    //         printf("Vowel");
    //         break;
    //     case 'O': 
    //         printf("Vowel");
    //         break;
    //     case 'U': 
    //         printf("Vowel");
    //         break;
    //     default: 
    //         printf("Consonant");
    // }

    // 39th program                                                                max by switch case
    // int input,input2;
    // printf("enter ur number: ");
    // scanf("%d %d",&input,&input2);

    // switch(input > input2){
    //     case 0:
    //         printf("%d is greater than %d",input2,input);
    //         break;
    //     case 1:
    //         printf("%d is greater than %d",input,input2);
    //         break;
    // }

    // 40th program                                                                even odd by switch case
    // int input; 
    // printf("enter ur number: ");
    // scanf("%d",&input);

    // switch(input%2==0){
    //     case 1:
    //         printf("%d is a even number",input);
    //         break;
    //     case 0:
    //         printf("%d is a odd number",input);
    //         break;
    // }

    // 41st program                                                        positive negative and zero by switch case
    // int input;
    // printf("enter ur number: ");
    // scanf("%d",&input);
    
    // switch(input>0){
    //     case 1:
    //         printf("%d is a positive number...",input);
    //         break;
    //     case 0:
    //         switch(input<0){
    //             case 1:
    //                 printf("%d is a negative number...",input);
    //                 break;
    //             case 0:
    //                 printf("%d is a zero number...",input);
    //                 break;
    //         }
    // }

    // 42th program                                                          simple calculator by switch
    // double input,input2;
    // char operation;
    // printf("enter ur operation: ");
    // scanf("%c",&operation);
    // printf("enter two number: ");
    // scanf("%lf %lf",&input,&input2);

    // switch(operation){
    //     case '+':
    //         printf("%.2lf + %.2lf = %.2lf",input,input2,(input+input2));
    //         break;
    //     case '-':
    //         printf("%.2lf - %.2lf = %.2lf",input,input2,(input-input2));
    //         break;
    //     case '*':
    //         printf("%.2lf * %.2lf = %.2lf",input,input2,(input*input2));
    //         break;
    //     case '/':
    //         printf("%.2lf / %.2lf = %.2lf",input,input2,(input/input2));
    //         break;
    //     default:
    //         printf("invalid input");
    // }

    // 43rd program
    // int n;
    // printf("Enter your Number : ");
    // scanf("%d", &n);

    // for(int i = 1; i<=n; i++) {
    //     if(check(i)) printf("%d is armstrong\n", i);
    // }

    // 44th program                                                         PERFECT NUMBER    
    int input;
    printf("enter ur number: ");
    scanf("%d",&input);
    int sum=0,input2=input;
    for(int i=1;i<input;i++){
       if(input % i == 0) sum += i;
    }
    if(sum==input2) printf("this is a perfect number");
    else printf("not a perfect square ");

    // 45th program                                                        perfect number from 1 to n
    // int input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);

    // for(int i=1; i<input; i++){
    //     int sum=0;
    //     for(int j=1; j<i; j++){
    //         if(i % j == 0){
    //             sum += j;
    //         }
    //     }
    //     if(sum == i) printf("%d  ",sum);
    // }

    // 46th program                                                      strong number...
    // int input;
    // printf("enter ur number.: ");
    // scanf("%d",&input);

    // int input2 = input,sum=0;
    // while(input > 0){
    //     int rem = input % 10;
    //     sum += fac(rem);
    //     input /= 10;
    // }
    // if(sum == input2){
    //     printf("this is a strong number");
    // }else{
    //     printf("this is not a strong number");
    // }

    // 48th program                                                    strong no. from 1 to n
    // int input;
    // printf("enter ur no.: ");
    // scanf("%d",&input);

    // for(int i = 1; i <= input; i++){
    //     int curr = i;
    //     int sum=0;
    //     while(curr > 0){
    //         int rem = curr % 10;
    //         sum += fac(rem);
    //         curr /= 10;
    //     }
    //     if(sum == i) printf("%d ",sum);
    // }
    
    // 49th program
    // int j = 2,k=0;
    // for(int i=10; i>0; i--){
    //     k++;
    //     printf("%d * %d = %d\n",j,k,j*k);
    // }

    // 50th program                                                         fibonacci series
    // int input;
    // printf("enter ur number: ");
    // scanf("%d",&input);

    // int num1=0,num2=1;
    // printf("%d %d",num1,num2);
    // for(int i=3; i<=input; i++){
    //     int num3 = num1 + num2;
    //     printf(" %d",num3);
    //     num1 = num2;
    //     num2 = num3;

    // }
 
    // 51st program                                                           LOL game
    // int input;
    // printf("you have to choose number from 1 to 4\n and you both have 21 number to spare...\n");
    // printf("WHOEVER got the last remaining '1' will LOSE...\n");
    // printf("LET'S START\n");
    // int count=21;
    // for(int i=1; i<=4; i++){
    //     printf("enter ur number to lose...haha but 1 to 4 : ");
    //     scanf("%d",&input);
    //     int get = input;
    //     int comp = 5 - get;
    //     printf("Computer choose : %d\n",comp);
    //     count = count - 5;
    //     printf("remaining number: %d\n",count);
    // }
    // printf("Last remaining 1 gotchh by you in your turn...\n YOU LOSE");



    return 0;
}