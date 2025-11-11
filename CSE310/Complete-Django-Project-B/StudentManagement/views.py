from django.shortcuts import render
from .models import Student
from .forms import StudentInsertForm
# Create your views here.
from django.contrib.auth.decorators import login_required


def showStudentList(request):
    all_students = Student.objects.all()
    context = {
        'studentList' : all_students
    }
    return render(request, 'StudentManagement/studentslist.html', context)

@login_required
def insertStudents(request):

    form = StudentInsertForm()
    message = "Insert Student info"

    if request.method == "POST":
        form = StudentInsertForm(request.POST, request.FILES)
        message = "Not Successful"
        if form.is_valid():
            form.save()
            form = StudentInsertForm()
            message = "Successful"

    context = {
        'form' : form,
        'message' : message
    }
    return render(request, 'StudentManagement/insertStudent.html', context)