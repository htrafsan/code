#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

float xa =0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float xr =0, yr=0;
int i=0;
float tempx = 0, tempy=0;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(0.4, 0.4);
    glVertex2f(-0.4, 0.4);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.4, -0.4);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(xa+xr, ya+yr);
    glColor3f(0, 1, 0);
    glVertex2f(xb+xr, yb+yr);
    glColor3f(0, 0, 1);
    glVertex2f(xc+xr, yc+yr);
    glColor3f(0, 1, 1);
    glVertex2f(xd+xr, yd+yr);
    glEnd();

    glutSwapBuffers();
    i++;
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        yr = yr + 0.01;
        if(yc+yr>0.4)
        {
            printf("Up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xc+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'W':
        yr = yr + 0.01;
        if(yc+yr>0.4)
        {
            printf("Up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xc+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'a':
        xr = xr - 0.01;
        if(yc+yr>0.4)
        {
            printf("Up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xc+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'A':
        xr = xr - 0.01;
        if(yc+yr>0.4)
        {
            printf("Up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xc+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 's':
        yr = yr - 0.01;
        if(yc+yr>0.4)
        {
            printf("Up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xc+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'S':
        yr = yr - 0.01;
        if(yc+yr>0.4)
        {
            printf("Up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xc+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'd':
        xr = xr + 0.01;
        if(yc+yr>0.4)
        {
            printf("Up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xc+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'D':
        xr = xr + 0.01;
        if(yc+yr>0.4)
        {
            printf("Up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xc+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    }

}

int main(int argc, char **argv)
{
    if(yc+yr<0.4 && ya+yr>-0.4 && xc+xr<0.4 && xa+xr>-0.4)
        {
            printf("Inside ");
        }
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("CSE 4-2 A1 Lab 2");
    glClearColor(0, 0, 0, 0);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
