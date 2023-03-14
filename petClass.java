package com.Java;
//Creating a petClass class and all variables within it. These variables were listed as attributes in the UML diagram.
//The UML diagram indicated private access modifiers, so these variables were made private.
//Since the body of this class has private variables, only this class has access to them.
//Each variable has a different data type assigned to it based on the data return expected.
public class petClass {
	private String petType;
	private String petName;
	private int petAge;
	private int dogSpace;
	private int catSpace;
	private int daysStay;
	private double amountDue;
//Though this default constructor does not to be included because Java will automate to it, it has been added
//in case more constructors with values are added in the future.
	public petClass() {
	}
//This method "gets" petType from the class, then returns it. This is known as an accessor.
//This method is necessary in order to access the private data in the class.
//When writing getPetType, we are telling the program to get petType from the class.
//When closing with return, we must use the same variable name in order to transfer that private variable here.
	public String getPetType() {
	   return petType;
	}
//This method "sets" petType. It is a mutator. Since petType is called on twice, "this." is used to call on the class variable.
//The second petType is then linked with the method's value that is written in the parentheses. 
//A setter must always void, as well as have some (value) in its parentheses. 
	public void setPetType(String petType) {
		this.petType = petType;
	}
//This method retrieves petName from the petClass body and returns it. It will later allow main to get values.
	public String getPetName() {
		return petName;
	}
//This method sets petName and allows mutations to be constructed within main.
	public void setPetName(String petName) {
		this.petName = petName;
	}
//This method and all of those that follow before the next comment get and set the attributes(variables).	
	public int getPetAge() {
		return petAge;
	}
	
	public void setPetAge(int petAge) {
		this.petAge = petAge;
	}
	
	public int getDogSpace() {
		return dogSpace;
	}
	
	public void setDogSpace(int dogSpace) {
		this.dogSpace = dogSpace;
	}
	
	public int getCatSpace() {
		return catSpace;
	}
	
	public void setCatSpace(int catSpace) {
		this.catSpace = catSpace;
	}
	
	public int getDaysStay() {
		return daysStay;
	}
	
	public void setDaysStay(int daysStay) {
		this.daysStay = daysStay;
	}
	
	public double getAmountDue() {
		return amountDue;
	}
	
	public void setAmountDue (double amountDue) {
		this.amountDue = amountDue;
	}
//The following methods were not given behaviors in the UML diagram, therefore they
//are placeholders.
	public void checkIn() {
	}
	
	public void checkOut() {
	}
	
	public void getPet() {
	}
	
	public void createPet() {
	}
	
	public void updatePet() {
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	}
}

	
