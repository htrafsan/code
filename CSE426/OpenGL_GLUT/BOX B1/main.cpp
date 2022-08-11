#include <windows.h>
#include <GL/glut.h>

float angle = 45;
float a=0, b=1, c=0;


void spin(void)
{
    angle = angle + 0.01;
    glutPostRedisplay();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(70, w/h, 1, 100);
    glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(0, 1, 0);
    glColor3f(a, b, c);
    glLoadIdentity();
    gluLookAt(0, 0, 7, 0, 0, 0, 0, 1, 0);
    glRotatef(angle, 1, 0, 0);
    glRotatef(angle, 0, 1, 0);
    glRotatef(angle, 0, 0, 1);
    glutSolidTeapot(2);
    glutSwapBuffers();
}


void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'r':
        {
           glColor3f(1, 0, 0);
            glutPostRedisplay();
            break;
        }
    case 'g':
        {
           glColor3f(0, 1, 0);
            glutPostRedisplay();
            break;
        }
    case 'b':
        {
           glColor3f(0, 0, 1);
            glutPostRedisplay();
            break;
        }
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(300, 300);
    glutCreateWindow("CSE UAP 4-2 B1");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(spin);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
