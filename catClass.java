package com.Java;
//The extends keyword is runtime polymorphism, and it, "...indicates that a class is inherited from another class" (Java, 2020).
//Unlike petClass, the UML diagram indicated that the attributes in the catClass be public, which is why they are not private.
public class catClass extends petClass {
   int catSpaceNbr;
//This default constructor is included because the user may not want to pass all of the values in the constructor below.
   public catClass() {
   }
//This constructor requires that the user knows all of the listed values. If they do not, they can use the default constructor.
//Even though Java automatically accesses a default constructor if one is not included, the default it resorts to
//is deleted when a custom one like the one below is added. That is why the default constructor was manually included
//along with this one.
   public catClass(String petName, int petAge, int catSpace, int daysStay, double amountDue) {
   }
//The same getter and setter methods used in petClass are used here again.  
   public int getCatSpaceNbr() {
      return catSpaceNbr;
   }
   
   public void setCatSpaceNbr(int catSpaceNbr) {
	   this.catSpaceNbr = catSpaceNbr;
   }
}
//Java extends Keyword. Retrieved September 11, 2020, from https//www.w3schools.com/java/ref_keyword_extends.asp