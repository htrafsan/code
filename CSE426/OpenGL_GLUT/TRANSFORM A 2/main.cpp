#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float ty = 0.1, tx = 0.1;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa, ya);
    glColor3f(0,1,0);
    glVertex2f(xb, yb);
    glColor3f(0,0,1);
    glVertex2f(xc, yc);
    glColor3f(0.5,0.5,0.7);
    glVertex2f(xd, yd);
    glEnd();
    glFlush();
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'w':
            ya = ya + ty;
            yb = yb + ty;
            yc = yc + ty;
            yd = yd + ty;
            //glTranslatef(0, 0.1, 0);
            if (xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
            {
                printf("Inside ");
            }
            if (ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
            {
                printf("Up ");
            }
            if (ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
            {
                printf("Down ");
            }
            if (xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
            {
                printf("Right ");
            }
            if (xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
            {
                printf("Left ");
            }
            printf("\n");

            glutPostRedisplay();
            break;
        case 'a':
            xa = xa - tx;
            xb = xb - tx;
            xc = xc - tx;
            xd = xd - tx;
            if (xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
            {
                printf("Inside ");
            }
            if (ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
            {
                printf("Up ");
            }
            if (ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
            {
                printf("Down ");
            }
            if (xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
            {
                printf("Right ");
            }
            if (xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
            {
                printf("Left ");
            }
            printf("\n");
            //glTranslatef(-0.1, 0, 0);
            glutPostRedisplay();
            break;
        case 'd':
            xa = xa + tx;
            xb = xb + tx;
            xc = xc + tx;
            xd = xd + tx;
            if (xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
            {
                printf("Inside ");
            }
            if (ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
            {
                printf("Up ");
            }
            if (ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
            {
                printf("Down ");
            }
            if (xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
            {
                printf("Right ");
            }
            if (xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
            {
                printf("Left ");
            }
            printf("\n");
            //glTranslatef(0.1, 0, 0);
            glutPostRedisplay();
            break;
        case 's':
            ya = ya - ty;
            yb = yb - ty;
            yc = yc - ty;
            yd = yd - ty;
            if (xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
            {
                printf("Inside ");
            }
            if (ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
            {
                printf("Up ");
            }
            if (ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
            {
                printf("Down ");
            }
            if (xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
            {
                printf("Right ");
            }
            if (xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
            {
                printf("Left ");
            }
            printf("\n");
            //glTranslatef(0, -0.1, 0);
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
    glutCreateWindow("UAP CSE 4-2 A2");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
