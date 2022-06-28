#include <windows.h>
#include <GL/glut.h>

void display(void)
{


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 B2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
