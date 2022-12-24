class Animal:
    def speak(self):
        print("Animal is speaking")
class Dog(Animal):
    def bark(self):
        print("dog is barking")
        d = Dog()
        print(d.bark())
        print(d.speak())
        