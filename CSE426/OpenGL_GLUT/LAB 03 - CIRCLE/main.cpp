#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float r = 0.5;

void display(void)
{
    glBegin(GL_POLYGON);
    for(float theta = 0; theta < 360; theta = theta + 1)
    {
        float x = r * cos(theta);
        float y = r * sin(theta);
        glVertex2f(x, y);
    }
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
