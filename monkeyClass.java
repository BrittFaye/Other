/* All of the monkey class instance variables have been added based on the specification document requirements.
 * Since that document said it also uses the elements from the dog class, breed has also been added.
 * It is important to note that this class extends from the rescueAnimal class.
 */
public class monkeyClass extends rescueAnimal {
   private String breed;
   private double tailLength;
   private double height;
   private double bodyLength;
   private String species; 
   private double torsoMeasurement;
   private double skullMeasurement;
   private double neckMeasurement;
//Here is the default constructor that has been physically added to prevent a custom constructor from overwriting the default.
   public monkeyClass() {
   }
//More accessors and mutators were added to this class for the instance variables above. 
   public String getBreed() {
	  return breed;
   }

   public void setBreed(String breed) {
	  this.breed = breed;
   }

   public double getTailLength() {
	  return tailLength;
   }

   public void setTailLength(double tailLength) {
	  this.tailLength = tailLength;
   }

   public double getHeight() {
	  return height;
   }

   public void setHeight(double height) {
	  this.height = height;
   }

   public double getBodyLength() {
	  return bodyLength;
   }

   public void setBodyLength(double bodyLength) {
	  this.bodyLength = bodyLength;
   }
   
   public String getSpecies() {
	   return species;
   }
   
   public void setSpecies(String species) {
	   this.species = species;
   }

   public double getTorsoMeasurement() {
	  return torsoMeasurement;
   }

   public void setTorsoMeasurement(double torsoMeasurement) {
	  this.torsoMeasurement = torsoMeasurement;
   }

   public double getSkullMeasurement() {
	  return skullMeasurement;
   }

   public void setSkullMeasurement(double skullMeasurement) {
	  this.skullMeasurement = skullMeasurement;
   }

   public double getNeckMeasurement() {
	  return neckMeasurement;
   }

   public void setNeckMeasurement(double neckMeasurement) {
	  this.neckMeasurement = neckMeasurement;
   }
   
}

