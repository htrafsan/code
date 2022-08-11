#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include<math.h>
float xa=0.2,ya=0.2,xb=0.2,yb=-0.2,xc=-0.2,yc=-0.2,xd=-0.2,yd=0.2;
float xr = 0, yr = 0, tempx = 0, tempy = 0;
int i=1;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(xa + xr,ya + yr);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(xb + xr,yb + yr);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(xc + xr,yc + yr);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(xd + xr,yd + yr);
    glEnd();
    glutSwapBuffers();
    i++;
}

void keyboard(unsigned char key,int x, int y)
{
    switch(key)
    {
    case 'x':
/*
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1,0,0.75);
        glBegin( GL_QUADS);
        glVertex2f(xa,ya);
        glVertex2f(xb,yb);
        glVertex2f(xc,yc);
        glVertex2f(xd,yd);

        glEnd();
        glFlush();
*/
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
       // glTranslatef(0.25,0.25,0);
        glRotatef(45*i,0,0,1);
        //glScalef(0.5,0.5,1);
        glutPostRedisplay();


        break;



    case 'c':
        /*glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1,0,0.75);
        glBegin( GL_QUADS);
        glVertex2f(xa,ya);
        glVertex2f(xb,yb);
        glVertex2f(xc,yc);
        glVertex2f(xd,yd);

        glEnd();
        glFlush();
        */
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
       // glTranslatef(0.25,0.25,0);
        glRotatef(-45*i,0,0,1);
       // glScalef(0.5,0.5,1);
        glutPostRedisplay();

        break;


   case 'w':
        yr=yr+0.01;
        glutPostRedisplay();
        break;
    case 's':
        yr=yr-0.01;
        glutPostRedisplay();
        break;
    case 'd':
        xr=xr+0.01;
        glutPostRedisplay();
        break;
    case 'a':
        xr=xr-0.01;
        glutPostRedisplay();
        break;

    case 'm':
        {
            tempx = xa;
        tempy = ya;
        xa = tempx*cos(45)-tempy*sin(45);
        ya = tempx*sin(45)+tempy*cos(45);
        tempx = xb;
        tempy = yb;
        xb = tempx*cos(45)-tempy*sin(45);
        yb = tempx*sin(45)+tempy*cos(45);
        tempx = xc;
        tempy = yc;
        xc = tempx*cos(45)-tempy*sin(45);
        yc = tempx*sin(45)+tempy*cos(45);
        tempx = xd;
        tempy = yd;
        xd = tempx*cos(45)-tempy*sin(45);
        yd = tempx*sin(45)+tempy*cos(45);
        glutPostRedisplay();
        break;
        }

    case 'n':
        tempx = xa;
        tempy = ya;
        xa = tempx*cos(-45)-tempy*sin(-45);
        ya = tempx*sin(-45)+tempy*cos(-45);
        tempx = xb;
        tempy = yb;
        xb = tempx*cos(-45)-tempy*sin(-45);
        yb = tempx*sin(-45)+tempy*cos(-45);
        tempx = xc;
        tempy = yc;
        xc = tempx*cos(-45)-tempy*sin(-45);
        yc = tempx*sin(-45)+tempy*cos(-45);
        tempx = xd;
        tempy = yd;
        xd = tempx*cos(-45)-tempy*sin(-45);
        yd = tempx*sin(-45)+tempy*cos(-45);
        glutPostRedisplay();
        break;

    }
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(600,500);
    glutCreateWindow("Day1");
    glClearColor(0,0,0,0);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
