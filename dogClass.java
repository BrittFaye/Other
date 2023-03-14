//This class only needs one variable because it extends form the rescueAnimal class, so it inherits all of those attributes.
public class dogClass extends rescueAnimal {
    public String breed;
//The manual default constructor is added below.
    public dogClass() {
    }

//This is the accessor method.
    public String getBreed() {
        return breed;
    }

//This is the mutator method.
    public void setBreed(String dogBreed) {
        breed = dogBreed;
    }

}
