#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

void display()
{
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex2f(-1,-0.5);
    glVertex2f(-1,0.5);
    glColor3f(0,0.5,0);
    glVertex2f(-0.67,0.5);
    glVertex2f(-0.67,-0.5);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    glColor3f(0,0.5,0);
    glVertex2f(-0.67,-0.5);
    glVertex2f(-0.67,0.5);
    glColor3f(0,0,0.5);
    glVertex2f(-0.34,0.5);
    glVertex2f(-0.34,-0.5);
    glEnd();
    glFlush();

     glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex2f(-0.34,-0.5);
    glVertex2f(-0.34,0.5);
    glColor3f(.5,0,0.5);
    glVertex2f(-0.01,0.5);
    glVertex2f(-0.01,-0.5);
    glEnd();
    glFlush();

     glBegin(GL_QUADS);
    glColor3f(0.5,0,0.5);
    glVertex2f(-0.01,-0.5);
    glVertex2f(-0.01,0.5);
    glColor3f(0,0.5,0.5);
    glVertex2f(0.34,0.5);
    glVertex2f(0.34,-0.5);
    glEnd();
    glFlush();

       glBegin(GL_QUADS);
    glColor3f(0,0.5,0.5);
    glVertex2f(0.34,-0.5);
    glVertex2f(0.34,0.5);
   glColor3f(0,0.75,0.5);
    glVertex2f(0.67,0.5);
    glVertex2f(0.67,-0.5);
    glEnd();
    glFlush();

        glBegin(GL_QUADS);
     glColor3f(0.5,0,0.5);
    glVertex2f(0.67,-0.5);
    glVertex2f(0.67,0.5);
     glColor3f(0.3,0.1,0.4);
    glVertex2f(1.00,0.5);
    glVertex2f(1.00,-0.5);
    glEnd();
    glFlush();



}

int main( int arg,char **args)
{
    glutInit(&arg,args);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Graphics lab: 2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
