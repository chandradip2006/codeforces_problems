# height and width and area and perimeter of a rectangle
class rectangle :
    def set_dimension (self , height , width) :
        self . height = height
        self . width = width
    def area(self) :
        return self.height * self.width
    def perimeter (self) :
        return 2* (self.height + self.width)
    
h = float(input("enter the height :"))
w = float(input("enter the width :"))
rectangle1 = rectangle()
rectangle1 . set_dimension(h , w)
print("the height is :" , rectangle1 . height , "and the width is :" , rectangle1 . width)
print("the area of the rectangle is :" , rectangle1 . area())
print("the perimeter of the rectangle is :" , rectangle1 . perimeter())