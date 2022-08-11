#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float tx=0, ty=0;
int i =0;
float tempx = 0;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(xa+tx, ya+ty);
    glColor3f(0, 1, 0);
    glVertex2f(xb+tx, yb+ty);
    glColor3f(0, 0, 1);
    glVertex2f(xc+tx, yc+ty);
    glColor3f(0, 1, 1);
    glVertex2f(xd+tx, yd+ty);
    glEnd();
    glFlush();
    i++;
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        ty=ty+0.01;
        glutPostRedisplay();
        break;
    case 'a':
        tx=tx-0.01;
        glutPostRedisplay();
        break;
    case 's':
        ty=ty-0.01;
        glutPostRedisplay();
        break;
    case 'd':
        tx=tx+0.01;
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
        tempx = xa;
        xa = xa*cos(45) - ya*sin(45);
        ya = tempx*sin(45) + ya*cos(45);
        tempx =xb;
        xb = xb*cos(45) - yb*sin(45);
        yb = tempx*sin(45) + yb*cos(45);
        tempx =xc;
        xc = xc*cos(45) - yc*sin(45);
        yc = tempx*sin(45) + yc*cos(45);
        tempx=xd;
        xd = xd*cos(45) - yd*sin(45);
        yd = tempx*sin(45) + yd*cos(45);
        glutPostRedisplay();
        break;
    case 'c':
        tempx=xa;
        xa = xa*cos(-45) - ya*sin(-45);
        ya = tempx*sin(-45) + ya*cos(-45);
        tempx =xb;
        xb = xb*cos(-45) - yb*sin(-45);
        yb =tempx*sin(-45) + yb*cos(-45);
        tempx=xc;
        xc = xc*cos(-45) - yc*sin(-45);
        yc = tempx*sin(-45) + yc*cos(-45);
        tempx=xd;
        xd = xd*cos(-45) - yd*sin(-45);
        yd = tempx*sin(-45) + yd*cos(-45);
        glutPostRedisplay();
        break;

    case 'l':
        break;
    case 'o':
        break;
    }
}


int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("4-2 CSE UAP B1");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
