#include <windows.h>
#include <GL/glut.h>

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(xa, ya);
    glColor3f(0, 1, 0);
    glVertex2f(xb, yb);
    glColor3f(1, 0.5, 0);
    glVertex2f(xc, yc);
    glColor3f(0, 0, 1);
    glVertex2f(xd, yd);
    glEnd();

    glFlush();
}


void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        glTranslatef(0, 0.1, 0);
        glutPostRedisplay();
        break;
    case 's':
        glTranslatef(0, -0.1, 0);
        glutPostRedisplay();
        break;
    case 'd':
        glTranslatef(0.1, 0, 0);
        glutPostRedisplay();
        break;
    case 'a':
        glTranslatef(-0.1, 0, 0);
        glutPostRedisplay();
        break;
    }
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("UAP CSE 4-2 A1");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
