#include <windows.h>
#include <GL/glut.h>

void display(void)
{
    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glColor3f(1, 0, 0);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    glColor3f(0, 0, 1);
    glVertex2f(0.4, -0.7);
    glVertex2f(-0.9, 0.8);
    glEnd();



    glColor3f(0.5, 0.5, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0.5);
    glVertex2f(-0.5, 0);
    glVertex2f(0.5, 0);
    glEnd();


    glColor3f(0.0, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2f(0, 0.5);
    glVertex2f(-0.5, 0);
    glVertex2f(0, -0.5);
    glVertex2f(0.5, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0,0.75);
    glVertex2f(-0.5,0.5);
    glVertex2f(-0.5,-0.5);
    glVertex2f(0,-0.75);
    glVertex2f(0.5,-0.5);
    glVertex2f(0.5,0.5);
    glEnd();


    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(300, 300);
    glutCreateWindow("CSE UAP 4-2 B1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

