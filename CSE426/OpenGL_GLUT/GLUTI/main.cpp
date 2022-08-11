/* CS331 February 1, 2001 -- prog2a.cpp           */
/* A typical sparse Program in OpenGL using GLUT  */
/* A working program.  'Draws 8 dots on a window. */
/* showing a pattern like the Big Dipper of stars.*/

#include <windows.h>
#include <gl/GL.h>
#include <gl/glut.h>
#include <math.h>

void myInit(void);
void drawDot(GLint x, GLint y);
void myDisplay(void);

//<<<<<<<<<<<<<<<<<<<<<<<<<< myInit >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0); // set white background color
	glColor3f(0.0f, 0.0f, 0.0f);           // set the drawing color
	glPointSize(4.0);                     // a DOT is 4 by 4 pixels
	glMatrixMode(GL_PROJECTION);  // Set up mode for initial matrix
	glLoadIdentity(); // Load the identity matrix as initial matrix
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
	// set viewport coordinates for (H) 0.0--640.0   (V) 0.0--480.0
}

/*  Alternate way to draw a point */
void drawDot(GLint x, GLint y)
{
	// draw dot at integer point (x, y)
	glBegin(GL_POINTS);
	  glVertex2i(x,y);
	glEnd();
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<< myDisplay >>>>>>>>>>>>>>>>>>>>>>>>>
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS); // 8 Stars of the Big Dipper
		glVertex2i(289,190);
		glVertex2i(320,128);
		glVertex2i(239,67);
		glVertex2i(194,101);
		glVertex2i(129,83);
		glVertex2i(75,73);
		glVertex2i(74,74);
		glVertex2i(20,10);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	// *************************************************
	// *         Initialize GLUT and create window     *
    // *************************************************

	glutInit(&argc, argv);                    // Initialize the toolkit
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );   // set display mode
	glutInitWindowSize(640, 480);                  // set window *size*
	glutInitWindowPosition(100, 150);  // set window position on screen
	glutCreateWindow("My first attempt");     // open the screen window

	// *************************************************
	// * "Register" functions re. window properties    *
	// *************************************************

	glutDisplayFunc(myDisplay);         // register the redraw function
	//glutReshapeFunc(myReshape);        // register the reshape function

	// *************************************************
	// *         Perhaps initialize other Functions    *
	// *************************************************

	//glutMouseFunc(myMouse);           // register mouse action function
	//glutKeyboardFunc(myKeyboard);   //register keyboard action function
	myInit();


	// *************************************************
	// *         Call the unending main loop           *
	// *************************************************

	glutMainLoop();                     // enter the unending main loop
	return 0;
}
/* The callback functions are actually DEFINED outside of main() */
