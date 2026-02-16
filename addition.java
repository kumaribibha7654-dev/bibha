//write a java program to print the addition of two integer number input by user.
import java.util.Scanner;
class addition 
{
public static void main (String args[])
{
Scanner in=new Scanner (System.in);
int num1,num2, sum;
         System.out.println("enter first number.");
            num1=in.nextInt();
System.out.println("enter Second number.");
      num2=in.nextInt();
      sum=num1+num2;

System.out.println("addition of two number="+sum);
}
}
