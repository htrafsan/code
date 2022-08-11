#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
void display(void)
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(-0.5, -0.5, 0);
    glRotatef(45, 0, 0, 1);
    glScalef(2, 0.5, 1);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(0.2, 0.2);
    glColor3f(0, 1, 0);
    glVertex2f(-0.2, 0.2);
    glColor3f(0, 0, 1);
    glVertex2f(-0.2, -0.2);
    glColor3f(1, 1, 0);
    glVertex2f(0.2, -0.2);
    glEnd();
    glFlush();
}

int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("CSE UAP 4-2 A2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
