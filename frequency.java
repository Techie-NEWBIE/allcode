import java.util.Scanner;
 public class frequency
{
        public static void main(String[] args)
       {
              int l,i,count=0;
              String f;
              Scanner p=new Scanner(System.in);
              System.out.println("Enter a Word: ");
               f=p.nextLine();

               l=f.length();
               System.out.println("Enter the character: ");
               char a=p.next().charAt (0);
                for(i=0;i<l;i++)
                if(f.charAt(i)==a)
                count++;
                System.out.println("The frequency of character "+a+" is "+count);
}
}

