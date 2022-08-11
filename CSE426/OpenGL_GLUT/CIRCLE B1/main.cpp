#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float r = 0.5;
void display(void)
{
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);

    for(float theta = 0; theta<=1.5708; theta=theta+0.01)
    {
        float x = r*cos(theta);
        float y = r*sin(theta);
        glVertex2f(x, y);
    }
    glVertex2f(0, 0);

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
