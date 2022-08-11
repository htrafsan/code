#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

float xa =0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float xr =0, yr=0;
int i=0;
float tempx = 0, tempy=0;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
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
        glutPostRedisplay();
        break;
    case 'W':
        yr = yr + 0.01;
        glutPostRedisplay();
        break;
    case 'a':
        xr = xr - 0.01;
        glutPostRedisplay();
        break;
    case 'A':
        xr = xr - 0.01;
        glutPostRedisplay();
        break;
    case 's':
        yr = yr - 0.01;
        glutPostRedisplay();
        break;
    case 'S':
        yr = yr - 0.01;
        glutPostRedisplay();
        break;
    case 'd':
        xr = xr + 0.01;
        glutPostRedisplay();
        break;
    case 'D':
        xr = xr + 0.01;
        glutPostRedisplay();
        break;

    case 'x':
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(45*i, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'c':
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(-45*i, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'm':
        tempx = xa;
        tempy = ya;
        xa = tempx * cos(45) - tempy * sin(45);
        ya = tempx * sin(45) + tempy * cos(45);
        tempx = xb;
        tempy = yb;
        xb = tempx * cos(45) - tempy * sin(45);
        yb = tempx * sin(45) + tempy * cos(45);
        tempx = xc;
        tempy = yc;
        xc = tempx * cos(45) - tempy * sin(45);
        yc = tempx * sin(45) + tempy * cos(45);
        tempx = xd;
        tempy = yd;
        xd = tempx * cos(45) - tempy * sin(45);
        yd = tempx * sin(45) + tempy * cos(45);
        glutPostRedisplay();
        break;
    case 'n':
        tempx = xa;
        tempy = ya;
        xa = tempx * cos(-45) - tempy * sin(-45);
        ya = tempx * sin(-45) + tempy * cos(-45);
        tempx = xb;
        tempy = yb;
        xb = tempx * cos(-45) - tempy * sin(-45);
        yb = tempx * sin(-45) + tempy * cos(-45);
        tempx = xc;
        tempy = yc;
        xc = tempx * cos(-45) - tempy * sin(-45);
        yc = tempx * sin(-45) + tempy * cos(-45);
        tempx = xd;
        tempy = yd;
        xd = tempx * cos(-45) - tempy * sin(-45);
        yd = tempx * sin(-45) + tempy * cos(-45);
        glutPostRedisplay();
        break;
    }

}

int main(int argc, char **argv)
{
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
