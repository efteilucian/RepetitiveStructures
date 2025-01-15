#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int div =0;
    int div2=0;
    int max_div =0;
    scanf("%d %d",&a,&b);

    for(int i=1;i<=a;i++){
        if(a%i==0){
            div = i;
        }
        for(int j =1; j<=i;j++){
            if(b%i==0){
            div2 = i;

            if(div == div2){
                max_div=div2;
            }
        }
        }
    }

    printf("%d",max_div);



    /*
    int x;

    int p_num1=0;
    int p_num2 =1;
    int current = 0;
    scanf("%d",&x);

    if (x == 0)
        return 0;
    if (x == 1)
        return 1;

for(int i=2; i<=x; i++){
     current = p_num1 + p_num2;
        p_num1 = p_num2;
        p_num2 = current;
}
printf("%d-th Fibonacci number is: %d \n",x,current);

*/




    /*
int x;
int sum = 0;
scanf("%d",&x);
for(int i=1;i<=x;i++){
    if(i%2!=0){
        sum+=i;
    }else{

        sum-=i;
    }

}
printf("Sum = %d",sum);
*/





    /*
    int x;
    int count =0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d is prime number",x);
    }else{
        printf("%d is not prime number",x);
    }
*/


 /*
int x;
int sum=0;
scanf("%d",&x);
if(x<10 && x>=1){
 sum = (x*x)-(2*x)+5;
 printf("x = %d",sum);
}
*/


/*    //extra

    int k;
    int dimension;
    int start = 0;
    int end = 0;


    scanf("%d %d",&dimension,&k);
    int arr[dimension];
    for(int i=0; i<dimension;i++){
        scanf("%d",&arr[i]);
    }

    while(start < dimension - 1){

        int w_size = end - start + 1;
        if(arr[start] == arr[end]){

            if(end == dimension-1){
                printf("%d wagons of class %d starting at %d \n",w_size,arr[start],(start+1));
                break;
            }
            ++end;
        }
        else{
             if(w_size > k){
                printf("%d wagons of class %d starting at %d \n",(w_size-1),arr[start],(start+1));
            }
        start =end;

        }
    }


*/









    //3
/*
    int arr[50];
    int sum =0;
    int count = 0;



    for(int i=0;i<50;i++){
     scanf("%d",&arr[i]);
       if(arr[i]!=0){
        for(int j=1; j<arr[i];j++){
          if(arr[i]%j==0){
            sum = sum +j;
            }

        }
            if(sum == arr[i]){
                count++;
            }
            sum=0;
        }else{
        break;
        }

    }


    printf("there are %d perfect numbers",count);
*/





    /*
    //2
    int n;
    int prod=1;
    scanf("%d",&n);

    if(n < 124){
        for(int i=1; i<=n;i++){
            if(n%i==0){
                prod=prod*i;
            }
        }
    }

    printf("%d",prod);
*/




    //homework 1
    /*
    int n;
    int size = 0;
    int sum = 0;
    scanf("%d",&n);
    size = (2*n)+1;

    for(int i=1; i<=size; i+=2){
        sum = sum +i;
    }
    printf("Summ = %d",sum);
*/



    /*
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        sum=sum+i;
    }
    printf("Summ=%d",sum);
*/





/*
    int n;
    int div = 1;
    scanf("%d",&n);
    if(n <9){
        for(int i=1; i<= n; i++){
        div = div * i;
        }
        printf("%d! = %d",n,div);
    }else{
        printf("%d Invalid value",n);
    }

*/

    /*

    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }

*/





 /*   //2.7   TO DO
    int n, container = 0, result =0;
    int x = 1;
    scanf("%d",&n);



    while(n >0){
            container = n % 10;
           // n = n/10;

            if(container % 3 !=0){
                    //13567
                result = result + container * x;
                x = x * 10;
            }
            n = n /10;



    }
    printf("%d",result);


*/




    // 2.6
/*
    int n, container = 0, maxD=0;

    printf("Insert an integer ");
    scanf("%d",&n);

   while(n !=0){

        container = n % 10;
        n = n / 10;
        if(container > maxD){
            maxD = container;
        }

   }

   printf("Largest digit: %d", maxD);
*/







 /*   //2.5

    int n, container = 0;
    int count = 0;
     printf("Insert an integer with at least 3 digits ");
    scanf("%d",&n);

   while(n !=0){
        count++;
    container = n % 10;
    n = n / 10;
    printf("Digit%d : %d \n",count,container);
   }

*/










/*
    //2.4
    int n = 0, sum = 0;
    scanf("%d",&n);

    for(int i =1; i<=n; i++){
            int prod = 1;
        for(int j = 1; j<= i; j++){

            prod = prod * j;

        }
        sum+= prod;
        printf("%d ",sum);

    }

*/






   //2.3
/*
   int n, i = 0, sum = 0;
   scanf("%d",&n);

   while(i<n){

    i++;
     sum +=i;

    printf("%d ",sum);
   }

*/
/*
 int n, i = 0, sum = 0;
   scanf("%d",&n);

do{
    i++;
     sum +=i;
    printf("%d ",sum);

}while(i<n);

*/







 /*   //2.2

   int a,b;
   int reminder;
   scanf("%d %d",&a,&b);

   while(a>b){
    a-=b;
    reminder = a;
    printf("%d %d \n",a,b);
   }
   printf("Reminder : %d",reminder);

*/







/* //2.1

int n;
scanf("%d",&n);

for(int i =1; i<=n;i++){
    printf("\n");

    for(int j = 1; j<=i; j++){
        printf("*");

    }

}
*/

}
