#include <windows.h>
#include <GL\glut.h>
#include <math.h>

float xa = 0.2, ya= 0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2,xd=0.2,yd=-0.2;
float t = 45;
void display(void)
{
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    float temp;
    /*
    temp = xa;
    xa = xa*cos(t) - ya*sin(t);
    ya = temp*sin(t) + ya*cos(t);
    temp = xb;
    xb = xb*cos(t) - yb*sin(t);
    yb = temp*sin(t) + yb*cos(t);
    temp = xc;
    xc = xc*cos(t) - yc*sin(t);
    yc = temp*sin(t) + yc*cos(t);
    temp = xd;
    xd = xd*cos(t) - yd*sin(t);
    yd = temp*sin(t) + yd*cos(t);
    */
    glVertex2f(xa*2, ya*0.5);
    glVertex2f(xb*2, yb*0.5);
    glVertex2f(xc*2, yc*0.5);
    glVertex2f(xd*2, yd*0.5);
    glEnd();
    glFlush();
}

int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("4-2 CSE UAP B1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
