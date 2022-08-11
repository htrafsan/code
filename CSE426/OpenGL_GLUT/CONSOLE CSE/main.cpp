#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float tx=0.0, ty=0.0, t=-45, sx=2, sy=0.5;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.4, 0.4);
    //glColor3f(0, 1, 0);
    glVertex2f(-0.4, 0.4);
    //glColor3f(0, 0, 1);
    glVertex2f(-0.4, -0.4);
    //glColor3f(1, 0.5, 0.5);
    glVertex2f(0.4, -0.4);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(xa+tx, ya+ty);
    //glColor3f(0, 1, 0);
    glVertex2f(xb+tx, yb+ty);
    //glColor3f(0, 0, 1);
    glVertex2f(xc+tx, yc+ty);
    //glColor3f(1, 0.5, 0.5);
    glVertex2f(xd+tx, yd+ty);
    glEnd();
    glFlush();
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        if(ya+ty<=0.4 && yb+ty<=0.4 && yd+ty>=-0.4 && yc+ty>=-0.4 && xa+tx<=0.4 && xd+tx<=0.4 && xb+tx>=-0.4 && xc+tx>=-0.4)
        {
            printf("Inside");
        }
        if(yc+ty>0.4 && yd+ty>0.4)
        {
            printf("Up");
        }
        if(ya+ty<-0.4 && yb+ty<-0.4)
        {
            printf("Down");
        }
        if(xb+tx>0.4 && xc+tx>0.4)
        {
            printf("Right");
        }
        if(xa+tx<-0.4 && xd+tx<-0.4)
        {
            printf("Left");
        }
        //glTranslatef(0, 0.01, 0);
        ty = ty + 0.01;
        printf("\n");
        glutPostRedisplay();
        break;
    case 's':
        if(ya+ty<=0.4 && yb+ty<=0.4 && yd+ty>=-0.4 && yc+ty>=-0.4 && xa+tx<=0.4 && xd+tx<=0.4 && xb+tx>=-0.4 && xc+tx>=-0.4)
        {
            printf("Inside");
        }
        if(yc+ty>0.4 && yd+ty>0.4)
        {
            printf("Up");
        }
        if(ya+ty<-0.4 && yb+ty<-0.4)
        {
            printf("Down");
        }
        if(xb+tx>0.4 && xc+tx>0.4)
        {
            printf("Right");
        }
        if(xa+tx<-0.4 && xd+tx<-0.4)
        {
            printf("Left");
        }
        ty = ty - 0.01;
        printf("\n");
        //glTranslatef(0, -0.01, 0);
        glutPostRedisplay();
        break;
    case 'a':
        if(ya+ty<=0.4 && yb+ty<=0.4 && yd+ty>=-0.4 && yc+ty>=-0.4 && xa+tx<=0.4 && xd+tx<=0.4 && xb+tx>=-0.4 && xc+tx>=-0.4)
        {
            printf("Inside");
        }
        if(yc+ty>0.4 && yd+ty>0.4)
        {
            printf("Up");
        }
        if(ya+ty<-0.4 && yb+ty<-0.4)
        {
            printf("Down");
        }
        if(xb+tx>0.4 && xc+tx>0.4)
        {
            printf("Right");
        }
        if(xa+tx<-0.4 && xd+tx<-0.4)
        {
            printf("Left");
        }
        tx = tx - 0.01;
        printf("\n");
        //glTranslatef(-0.01, 0, 0);
        glutPostRedisplay();
        break;
    case 'd':
        if(ya+ty<=0.4 && yb+ty<=0.4 && yd+ty>=-0.4 && yc+ty>=-0.4 && xa+tx<=0.4 && xd+tx<=0.4 && xb+tx>=-0.4 && xc+tx>=-0.4)
        {
            printf("Inside");
        }
        if(yc+ty>0.4 && yd+ty>0.4)
        {
            printf("Up");
        }
        if(ya+ty<-0.4 && yb+ty<-0.4)
        {
            printf("Down");
        }
        if(xb+tx>0.4 && xc+tx>0.4)
        {
            printf("Right");
        }
        if(xa+tx<-0.4 && xd+tx<-0.4)
        {
            printf("Left");
        }
        printf("\n");
        tx = tx + 0.01;
        //glTranslatef(0.01, 0, 0);
        glutPostRedisplay();
        break;
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(700, 200);
    glutCreateWindow("Computer Graphics Lab");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
