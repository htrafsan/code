#include <windows.h>
#include <GL/glut.h>

void display(void)
{

    glFlush();
}


void drawString(void *font, float x, float y, char *str)
{

    char *ch;
    glRasterPos3f(x, y,0);
    for(ch=str; *ch; ch++)
    {
        glutBitmapCharacter(font, (int)*ch);
    }

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 B2");
    drawString(GLUT_BITMAP_TIMES_ROMAN_24, -0.75, -0.75, "Graphics Lab 4-2 A2");
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
