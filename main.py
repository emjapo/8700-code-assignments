from vehicle import Vehicle
from car import Car
from ev import EV


#  create the classes
myCar = Car()
myEV = EV()

myCar.print()

myCar.setColor("white")
myCar.setModel("Corolla")
myCar.setSpeed(7)

myCar.decelerate()

for x in range(6):
    myCar.accelerate()

myCar.decelerate()

myCar.print()

print(f"There are a total of {Car.getNumCars()} car(s).")

