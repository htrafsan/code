#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display(void)
{
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2f(-0.2,-0.2);
    glEnd();
    glFlush();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();
    glFlush();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0,0);
    glVertex2f(.25,.25);
    glVertex2f(-.25,.25);
    glEnd();
    glFlush();

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(0,.25);
    glVertex2f(.5,.38);
    glVertex2f(0,.5);
    glVertex2f(-.5,.38);
    glEnd();
    glFlush();

    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,.5);
    glVertex2f(1,.63);
    glVertex2f(.25,.75);
    glVertex2f(-.25,.75);
    glVertex2f(-1,.63);
    glEnd();
    glFlush();

    glColor3f(1.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(.25,.75);
    glVertex2f(.4,.83);
    glVertex2f(0,1);
    glVertex2f(-.4,.83);
    glVertex2f(-.25,.75);
    glEnd();
    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(100,500);
    glutCreateWindow("Day1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
