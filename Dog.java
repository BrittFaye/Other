public class Dog {       //Based on the UML diagram, these are the required instance variables.
   String type;    //Neither private or public was specified, so the variables were left default.
   String breed;
   String name;
   String topTrick;
//Creating two constructors. A default constructor and a constructor that calls for 
//type, breed and name. Since the variable names are used twice, "this." is needed to 
//inform the program that both the constructor and variables are being called using
//the same name. 
   public Dog() {
   }
   
   public Dog(String type, String breed, String name) {
      this.type = type;
      this.breed = breed;
      this.name = name;
   }
//Creating methods. This method creates a setTopTrick mutator method. The end user will be able
//to use this method to set a new, unique top trick for their output.
   public void setTopTrick(String trick) {
	   topTrick = trick;
   }
//This method creates a string that will input the variables created above into a sentence. 
//This could be done with a print statement as well, but making it a method means that 
//The end user can input new data into this method for each individual dog in the main method.
    public String toString() {
        String temp = "\nDOG DATA\n" + name + " is a " + breed +
                ", a " + type + " dog. \nThe top trick is : " +
                topTrick + ".";
        return temp;
    }

}
