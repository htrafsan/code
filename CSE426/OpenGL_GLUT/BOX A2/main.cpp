#include<windows.h>
#include<GL/glut.h>

float angle = 0;

void spin(void)
{
    angle = angle+ 0.1;
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
    glutSolidTeapot(2);
    glutSwapBuffers();
}



int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("UAP CSE 4-2 A2");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(spin);
    //glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
