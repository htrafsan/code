#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
    /*glBegin(GL_POLYGON);
    glVertex2f(0, 0.6);
    glVertex2f(0.6, 0.2);
    glVertex2f(0.4, -0.5);
    glVertex2f(-0.4, -0.5);
    glVertex2f(-0.6, 0.2);
    glEnd();
    glFlush();*/


    /*glBegin(GL_POINTS);

    for(float i=-1; i<=1; i=i+0.002)
    {
        glVertex2f(i, i); //this line will execute 1000 times.
    }

    glEnd();
    glFlush();*/


    glBegin(GL_POLYGON);
    float r = 0.5;
    for(float theta = 0; theta < 360; theta = theta + 0.01)
    {
        float x = 0.2 + r*cos(theta);
        float y = 0.3 + r*sin(theta);
        glVertex2f(x, y);
    }

    glEnd();
    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 A1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
