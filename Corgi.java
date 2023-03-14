public class Corgi extends Dog {  //This class connects "extends" from Dog. The variables
   int weight;                   //are both in integer form.
   int age;
//I created another default constructor.
   public Corgi() {
   }
//This pre-made constructor includes type, breed, name, pounds, and years. Because of 
//type, breed, and name, it invokes the Dog class (super class) constructor.
   public Corgi(String type, String breed, String name, int pounds, int years) {
       super(type, breed, name);    //This line invokes the super class from Dog using keyword "super".
       weight = pounds;
       age = years;
   }
//The instructions call for two mutator methods for the instance variables. This method
//sets weight to integer form pounds.
   public void setWeight(int pounds) {
	   weight = pounds;
   }
//This method's set mutator sets age to integer years.   
   public void setAge (int years) {
	   age = years;
   }
//This method overrides the toString() method seen in the Dog class. The important thing to 
//note is that this method does not delete the Dog class toString() method. The "super.toString"
//seen after return calls the old Dog method, then adds the new parameters seen after. It
//is an updated method that includes both the Dog class and the Corgi class.
    @Override
    public String toString() {
        return (super.toString() + "\nThe Corgi is " + age +
                " years old and weighs " + weight + " pounds.");
    }

}
