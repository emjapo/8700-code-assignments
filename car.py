from vehicle import Vehicle


class Car(Vehicle):
    # static count of how many cars there are
    numCars = 0

    # default constructor
    def __init__(self): #python limits to one constructor so only the default was used as per directions from email
        # add to car count
        Car.numCars += 1
        self.speed = 0
        self.model = "Default"
        self.color = "Default"
        print("Car created!")

    # methods from UML diagram
    def getSpeed(self):
        return self.speed

    def getModel(self):
        return self.model

    def getColor(self):
        return self.color

    def setSpeed(self, newSpeed):
        self.speed = newSpeed

    def setModel(self, newModel):
        self.model = newModel

    def setColor(self, newColor):
        self.color = newColor

    def print(self):
        print(f"This car is a {self.color} {self.model} going {self.speed} mph.")

    def decelerate(self):
        if self.speed < 10:
            print("The car is going less than 10 mph and can't decelerate by 10 mph.")
            self.speed = 0
            print("the car is now stopped.")
        else:
            self.speed -= 10
            print(f"Slowing down! The car is now going {self.speed} mph.")

    def accelerate(self):
        self.speed += 10
        print(f"Speeding up! The car is now going {self.speed} mph.")

    # static method to get the static variable
    def getNumCars():
        return Car.numCars
