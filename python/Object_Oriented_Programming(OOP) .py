class student :
    def set_name (self , name) :
        self . name = name # class attribute
    def get_name (self) :
        return self . name
    
student1 = student()
student1 . set_name ("snehaaz")
student1 . eng_marks = 45 # instance attribute
print(student1 . get_name ())
print(student1 . eng_marks)


student2 = student()
student2 . set_name ("parag")
print(student2 . get_name ())