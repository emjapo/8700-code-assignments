from car import Car


class EV(Car):
    def __init__(self): #python limits to one constructor so only the default was used as per directions from email
        super().__init__()
        self.range = 0.0
        self.gen = 1
        print("EV created!")

    # getters specific to the EV class
    def getRange(self):
        return self.range

    def getGen(self):
        return self.gen

    # setters specific to the EV class
    def setRange(self, newRange):
        self.range = newRange

    def setGen(self, newGen):
        # check to make sure that the value is either 1, 2, or 3
        if newGen in range(1, 4):
            self.gen = newGen
        else:
            print(f"Sorry, gen {newGen} is not a recognized EV generation.")

    def print(self):
        print(
            f"This EV is a {self.color} {self.model} going {self.speed} mph. It is generation {self.gen} and has a range of {self.range} miles."
        )
