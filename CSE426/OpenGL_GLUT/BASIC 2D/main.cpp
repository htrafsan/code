#include<windows.h>
#include<GL/glut.h>

void display(void)
{
    glColor3f(1, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glEnd();

    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0.5);
    glVertex2f(-0.5, 0);
    glVertex2f(0.5, 0);
    glEnd();


    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(0, 0.5);
    glVertex2f(-0.5, 0);
    glVertex2f(0, -0.5);
    glVertex2f(0.5, 0);
    glEnd();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0.5);
    glVertex2f(0.3, 0.3);
    glVertex2f(-0.5, 0);
    glVertex2f(0, -0.5);
    glVertex2f(0.3, -0.3);
    glVertex2f(0.5, 0);
    glEnd();

    glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("UAP CSE 4-2 A2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
