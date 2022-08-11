#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float r = 0.5;
void display(void)
{
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for(float theta = 0; theta<360; theta = theta + 0.01)
    {
        float x = r*cos((theta*2*3.141592)/360);
        float y = r*sin((theta*2*3.141592)/360);
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
    glutInitWindowPosition(300, 300);
    glutCreateWindow("CSE UAP 4-2 B2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
