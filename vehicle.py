from abc import ABC, abstractmethod

# Abstract class named Vehicle
class Vehicle(ABC):
    
    # Abstract method (virtual function)
    @abstractmethod
    def print(self):
        pass
