import java.util.Scanner;
class vowel
{
    public static void main(String[] args)
{
 int l,i,count=0;
 Scanner v =new Scanner(System.in);
 System.out.println("Enter the String: ");
 String st=v.nextLine();
 st=st.toLowerCase();
 l=st.length();
char[]a=st.toCharArray();
for(i=0;i<l;i++)
{
char c=st.charAt(i);
{
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
{
count++;
}
}
}
System.out.println ("number of vowels are : "+""+count);
}
}

