#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define pi 3.14159265

float r = 0.5;
void display(void)
{
    glBegin(GL_POLYGON);

    for(float theta = 0; theta <360; theta=theta+0.01)
    {
        float x = r * cos((theta*2*pi)/360);
        float y = r * sin((theta*2*pi)/360);
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
    glutCreateWindow("UAP CSE 4-2 A1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
