from django.contrib import admin
from .models import Student, Address


# Register your models here.
admin.site.register( [Student, Address] )