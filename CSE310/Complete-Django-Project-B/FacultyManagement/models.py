from django.db import models

# Create your models here.

class Advisor(models.Model):
    name = models.CharField(max_length=200)
    contact = models.IntegerField(blank=True, null=True)
    email = models.EmailField(blank=True, null=True)

    def __str__(self):
        return self.name
