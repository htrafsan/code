from django.db import models
from FacultyManagement.models import Advisor
from CourseManagement.models import Course
# Create your models here.

class Address(models.Model):
    house_no = models.IntegerField(blank=True, null=True, default="")
    street_address = models.CharField(max_length=200)
    postal_address = models.CharField(max_length=200)
    post_code = models.CharField(max_length=20)
    city = models.CharField(max_length=20)

    def __str__(self):
        return str(self.house_no) + " " + self.street_address + " " + self.city



class Student(models.Model):
    name = models.CharField(max_length=100, default="")
    email = models.EmailField(max_length=200, unique=True)
    contact_no = models.IntegerField(blank=True, null=True)
    image = models.ImageField(upload_to='images/students', blank=True, null=True, default='images/aaaaaaaa.jpg')

    address = models.ForeignKey(Address, on_delete=models.SET_NULL, default=1, null=True)
    advisor = models.ForeignKey(Advisor, on_delete=models.SET_NULL, default=1, null=True)

    def __str__(self):
        return self.name


class Student_Course(models.Model):
    student = models.ForeignKey(Student, on_delete=models.CASCADE, default=1, null=True)
    course = models.ForeignKey(Course, on_delete=models.CASCADE, default=1, null=True)