#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float x, y, r = 0.5;
void display(void)
{
    /*
    float t = 0;
    for (t = 0; t < 360; t = t + 0.01)
    {
        x = r*cos(t);
        y = r*sin(t);
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
    }
    glFlush();
    */
    glColor3f(1, 0, 0);
    float t = 0;
    glBegin(GL_POLYGON);
    for(t=0; t<360; t = t + 0.01)
    {
        x = r*cos(t);
        y = r*sin(t);
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
    glutCreateWindow("CSE UAP 4-2 A2 B1 CIRCLE");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
