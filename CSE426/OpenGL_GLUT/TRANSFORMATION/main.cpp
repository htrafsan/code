#include <GL\glut.h>
#include <windows.h>

void display(void)
{

}

int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("4-2 CSE UAP B1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
