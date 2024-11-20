from vehicle import Vehicle
from car import Car
from ev import EV


#  create car class
myCar = Car()

# print default information
myCar.print()

# set new values
myCar.setColor("white")
myCar.setModel("Corolla")
myCar.setSpeed(
    7
)  # set to 7 so that we can test that the conditional block in the decelerate method works correctly

print()  # adding in space to make the output easier to read

myCar.decelerate()

# get the speed up to 60
for x in range(6):
    myCar.accelerate()

# decelerate again to test the other part of he conditional block
myCar.decelerate()

print()  # adding in space to make the output easier to read

# print new values to confirm they were updated
myCar.print()

print()  # adding in space to make the output easier to read

# print the static car count
print(f"There are a total of {Car.getNumCars()} car(s).")

print()  # adding in space to make the output easier to read

# create EV instance
myEV = EV()

# print the default information
myEV.print()

# set new values
myEV.setColor("black")
myEV.setModel("Bolt")
myEV.setGen(2)
myEV.setRange(277.7)
myEV.setSpeed(45)

print()  # adding in space to make the output easier to read

# change the speed
myEV.accelerate()
myEV.accelerate()
myEV.decelerate()

print()  # adding in space to make the output easier to read

# print out new values
myEV.print()

# print the static car count
print(f"There are a total of {Car.getNumCars()} car(s).")


# check all of the getters work
print(f"\n\nFirst checking the car class getters work:")
print(f"Speed: {myCar.getSpeed()}")
print(f"Model: {myCar.getModel()}")
print(f"Color: {myCar.getColor()}")

print(f"\n\nNow checking EV class getters work:")
print(f"Speed: {myEV.getSpeed()}")
print(f"Model: {myEV.getModel()}")
print(f"Color: {myEV.getColor()}")
print(f"Range: {myEV.getRange()}")
print(f"Gen: {myEV.getGen()}")
