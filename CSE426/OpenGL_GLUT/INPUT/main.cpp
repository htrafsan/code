#include <stdio.h>
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float tx=0, ty=0;
int i =0, t = 45;
float temp=0;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(0.4, 0.4);
    glVertex2f(-0.4, 0.4);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.4, -0.4);
    glEnd();
    glFlush();
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(xa+tx, ya+ty);
    glColor3f(0, 1, 0);
    glVertex2f(xb+tx, yb+ty);
    glColor3f(0, 0, 1);
    glVertex2f(xc+tx, yc+ty);
    glColor3f(1, 1, 0);
    glVertex2f(xd+tx, yd+ty);
    glEnd();
    glFlush();

    i++;
    glutSwapBuffers();
    if(yd>=0.4)
        {
            printf("Up");
        }
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        ty = ty + 0.01;
        if(ty+yd>=0.4)
        {
            printf("Up ");
        }
        if(ty+ya<=-0.4)
        {
            printf("down ");
        }
        if(tx+xd>=0.4)
        {
            printf("right ");
        }
        if(tx+xa<=-0.4)
        {
            printf("left");
        }
        glutPostRedisplay();
        break;
    case 'a':
        tx = tx - 0.01;
        if(ty+yd>=0.4)
        {
            printf("Up ");
        }
        if(ty+ya<=-0.4)
        {
            printf("down ");
        }
        if(tx+xd>=0.4)
        {
            printf("right ");
        }
        if(tx+xa<=-0.4)
        {
            printf("left");
        }
        glutPostRedisplay();
        break;
    case 's':
        ty = ty - 0.01;
        if(ty+yd>=0.4)
        {
            printf("Up ");
        }
        if(ty+ya<=-0.4)
        {
            printf("down ");
        }
        if(tx+xd>=0.4)
        {
            printf("right ");
        }
        if(tx+xa<=-0.4)
        {
            printf("left");
        }
        glutPostRedisplay();
        break;
    case 'd':
        tx = tx + 0.01;
        if(ty+yd>=0.4)
        {
            printf("Up ");
        }
        if(ty+ya<=-0.4)
        {
            printf("down ");
        }
        if(tx+xd>=0.4)
        {
            printf("right ");
        }
        if(tx+xa<=-0.4)
        {
            printf("left");
        }
        glutPostRedisplay();
        break;
    case 'm':
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(45*i, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'n':
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(-45*i, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'x':
        temp = xa;
        xa = xa*cos(t) - ya*sin(t);
        ya = temp*sin(t) + ya*cos(t);
        temp = xb;
        xb = xb*cos(t) - yb*sin(t);
        yb = temp*sin(t) + yb*cos(t);
        temp = xc;
        xc = xc*cos(t) - yc*sin(t);
        yc = temp*sin(t) + yc*cos(t);
        temp =xd;
        xd = xd*cos(t) - yd*sin(t);
        yd = temp*sin(t) + yd*cos(t);
        glutPostRedisplay();
        break;
    case 'c':
        temp = xa;
        xa = xa*cos(-t) - ya*sin(-t);
        ya = temp*sin(-t) + ya*cos(-t);
        temp = xb;
        xb = xb*cos(-t) - yb*sin(-t);
        yb = temp*sin(-t) + yb*cos(-t);
        temp = xc;
        xc = xc*cos(-t) - yc*sin(-t);
        yc = temp*sin(-t) + yc*cos(-t);
        temp = xd;
        xd = xd*cos(-t) - yd*sin(-t);
        yd = temp*sin(-t) + yd*cos(-t);
        glutPostRedisplay();
        break;

    case 'l':
        xa=xa*2;
        ya=ya*2;
        xb=xb*2;
        yb=yb*2;
        xc=xc*2;
        yc=yc*2;
        xd=xd*2;
        yd=yd*2;
        glutPostRedisplay();
        break;
    case 'o':
        xa=xa*0.5;
        ya=ya*0.5;
        xb=xb*0.5;
        yb=yb*0.5;
        xc=xc*0.5;
        yc=yc*0.5;
        xd=xd*0.5;
        yd=yd*0.5;
        glutPostRedisplay();
        break;
    }
}

int main(int argc, char ** argv)
{
    printf("hello!");
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("CSE UAP 4-2 A2");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
