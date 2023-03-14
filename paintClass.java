import java.util.Scanner;
// Name: Brittany Hanson - Date: 10/11/2020
public class paintClass {

   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      double wallHeight = 0.0;
      double wallWidth = 0.0;
      double wallArea = 0.0;
      double gallonsPaintNeeded = 0.0;
        
      final double squareFeetPerGallons = 350.0;
/* Here I start the first do-while loop. I put all parameters that I want to automatically pass within the do portion of the loop.
 * In this case it is the print statement and the try-catch block. These steps will run before the while loop is checked. This helps for user input
 * because the user will always need to be prompted to enter wall height and width for this program, so they will get the print statement 
 * before the while portion of the loop executes.
 */
      do {
         System.out.println("Enter wall height (feet): ");
/* This try block starts at the scanner because that is where any errors will occur. If the user writes the number in string format,
 * it will not work. The try-catch block is not needed but helps the user understand what went wrong. If they enter the wrong thing, the catch
 * portion of the block executes and asks the user to enter a number greater than 0. By that point the do-while loop iterates again until 
 * the correct input is entered.
 */
      try {
         wallHeight = scnr.nextDouble();
      } 
      catch(Exception excpt) {
         System.out.println("Invalid input, please enter a number greater than 0.");
         scnr.next();
      }
/* The while portion of the do while loop tells the program how many times it should iterate. In this case, while the wallHeight is less than
 * or equal to 0, continue prompting the user for an input. Until the user inputs a double that is greater than 0, the loop won't end.
 */
      } while (wallHeight <= 0);
// Since the second input is found here with wall width, the second do-while loop and try-catch block were entered.
      do {
         System.out.println("Enter wall width (feet): ");
      try {
//The 1st error was below where wallHeight was incorrectly used for the scanner. Obviously wallWidth should be used here.
         wallWidth = scnr.nextDouble();
      }
      catch(Exception excpt) {
         System.out.println("Invalid input, please enter a number greater than 0.");
         scnr.next();
      }
      } while (wallWidth <= 0);
// Calculate and output wall area
      wallArea = wallHeight * wallWidth;
// The 2nd error was in the print statement below because + wallArea + was not included in the string output.
      System.out.println("Wall area: " + wallArea + "  square feet");
// Calculate and output the amount of paint (in gallons) needed to paint the wall
      gallonsPaintNeeded = wallArea/squareFeetPerGallons;
//The 3rd and last error was in the print statement below because the variable gallonsPaintNeeded was not properly capitalized.
      System.out.println("Paint needed: " + gallonsPaintNeeded + " gallons.");

   }
}

