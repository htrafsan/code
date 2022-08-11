#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float x, y, r=0.5;
float cx = 0, cy = 0;
void display(void)
{
    /*
    for(float theta=0; theta <360; theta = theta + 0.01)
    {
        x = r*cos(theta)+cx;
        y = r*sin(theta)+cy;
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
    }
    glFlush();
    */
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for(float theta=0; theta <360; theta = theta + 0.01)
    {
        x = r*cos(theta)+cx;
        y = r*sin(theta)+cy;
        glVertex2f(x, y);
    }
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(700, 200);
    glutCreateWindow("Computer Graphics Lab");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
