/*Author : VKD
Location : Mars  
*/

import java.util.Scanner;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		//Modify to avoid plagiarism !
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		
		while(t>0){
		int a,b,ans;
        a = sc.nextInt();
        b = sc.nextInt();
        
        ans = (a-1)*(2*b - a);
		System.out.println(ans);
		t--;
		}
		
	}
}
