/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
	    int n=4,spaces,i,j;
		for(i=1;i<=n;i++){
		    spaces=n-i;
		    for( j=1;j<=spaces;j++){
		        System.out.print(" ");
		    }
		    
		    for(j=1;j<=n;j++){
		        System.out.print("*");
		}

	System.out.println();
}

}
}
