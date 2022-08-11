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

    glColor3f(0.6, 0.4, 0.2);
    glBegin(GL_QUADS);
    glVertex2f(0.5, 0);
    glVertex2f(-0.5, 0);
    glVertex2f(-0.5, -1.0);
    glVertex2f(0.5, -1.0);
    glEnd();
    glFlush();


    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_POLYGON);

    glEnd();
    glFLush();
    */
    float r = 0.3;
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for(float i=0; i<360; i=i+0.001)
    {

        float x = r * cos(i);
        float y = r * sin(i);
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
    glutCreateWindow("CSE UAP 4-2 A2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
