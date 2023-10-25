import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;

public class Solution 
{
    public static void main(String[] args) throws IOException 
    {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

         try 
         {
            String S = bufferedReader.readLine();
            int num = Integer.parseInt(S);
            System.out.println(num);
        } 
        catch (NumberFormatException e) 
        {
            System.out.println("Bad String");
        } 
        finally 
        {
            bufferedReader.close();
        }
    }
}
