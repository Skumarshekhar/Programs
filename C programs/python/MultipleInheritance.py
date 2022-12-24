class Animal:
    def speak(self):
        print("Animal speaking")
class Dog(Animal):
    def bark(self):
        print("Dog barking")
class DogChild(Dog):
    def eat(self):
        print("Eating Bread")
        d=DogChild()
        d.bark()
        d.speak()
        d.eat()
        