
public class driverClass {
//This class is specifically for testing the code in each class. Without a main method,
//the constructors in each class would be useless. The main method in this class first calls
//on the Dog class, creates a new object name, then creates new inputs for the Corgi class.
//Just as was written in the @override toString() method in the Corgi class, this method
//requires dog type, breed, name, weight, and age. The inputs are in the format that was set
//in each class: string, string, string, int, int. The new object name royalDog then calls the
//method in the Dog class and sets the top trick to a string input that I chose. Finally a 
//print statement was added with the new object and the toString() method.
	public static void main(String[] args) {
		Dog royalDog = new Corgi("herding", "Pembroke Welsh Corgi", "Holly", 25, 10);
		royalDog.setTopTrick("ringing the royal bell for food service");
		System.out.println(royalDog.toString());

	}

}
