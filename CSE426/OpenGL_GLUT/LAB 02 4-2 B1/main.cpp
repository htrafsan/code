#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void display(void)
{
    /*
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2f(0.5, 0.5);
    glEnd();
    glFlush();

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glEnd();
    glFlush();

    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 1.0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(1.0, 0.0);
    glEnd();
    glFlush();

    glColor3f(0.2, 0.3, 0.4);
    glBegin(GL_QUADS);
    glVertex2f(0.5, 0.0);
    glVertex2f(-0.5, 0.0);
    glVertex2f(-0.5, -1.0);
    glVertex2f(0.5, -1.0);
    glEnd();
    glFlush();


    glColor3f(0.5, 0.0, 0.0);
    float r = 0.3;
    for(float i = 0; i < 360; i=i+0.001)
    {
        glBegin(GL_POINTS);
        float x = r * cos(i);
        float y = r * sin(i);
        glVertex2f(x, y);
        glEnd();
    }
    glFlush();
    */
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for(float i=0; i<360; i=i+0.001)
    {
        float r = 0.3;
        float x = r*cos(i);
        float y = r*sin(i);
        glVertex2f(x, y);
    }
    glEnd();
    glFlush();


}

int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("CSE 426 4-2 B1");
    glutDisplayFunc(display);
    glutMainLoop();
}
