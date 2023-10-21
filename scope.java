import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;
    Difference(int[] elements)
    {
        this.elements=elements;
    }
     void computeDifference() 
     {
        maximumDifference = 0; // Initialize maximumDifference to 0
        for (int i = 0; i < elements.length; i++) 
        {
            for (int j = 0; j < elements.length; j++) 
            {
                int dif = Math.abs(elements[i] - elements[j]);
                if (dif > maximumDifference) 
                {
                    maximumDifference = dif;
                }
            }
        }
    }

}

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}
