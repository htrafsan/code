#include <windows.h>
#include <GL/glut.h>

float angle = 45;


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
    glColor3f(1, 1, 0);
    glLoadIdentity();
    gluLookAt(0, 0, 7, 0, 0, 0, 0, 1, 0);
    glRotatef(angle, 1, 0, 0);
    glRotatef(angle, 0, 1, 0);
    glRotatef(angle, 0, 0, 1);
    glutWireTeapot(2);
    glutSwapBuffers();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(300, 300);
    glutCreateWindow("CSE UAP 4-2 B2");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(spin);
    //glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
