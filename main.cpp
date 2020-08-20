#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	// Draw a Red 1x1 Square centered at origin


   //----screen body ground------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(102, 51, 0);
	glVertex2f(-1.0f, 0.3);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.3f);

	glEnd();

//----screen body sky7------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 204, 255);
	glVertex2f(-1.0f, 1.0);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 1.0f);

	glEnd();





    //-------- pyramid-----------------------
    //triangle 1
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 102, 0);
	glVertex2f(-0.8f, 0.0f);    // x, y
	glVertex2f(-0.2f, 0.0f);    // x, y
	glVertex2f(-0.5f, 0.5f);
     glEnd();

    //triangle 2
    glBegin(GL_TRIANGLES);
	glColor3ub(255, 153, 0);
	glVertex2f(-0.2f, 0.0f);    // x, y
	glVertex2f(-0.1f, 0.1f);    // x, y
	glVertex2f(-0.5f, 0.5f);
     glEnd();
   //-----end------------------------



       //-------- Translated and scaled pyramid -----------------------
    //triangle 1
    glTranslated(0.4,-0.1,0);
    glScaled(1.3f,1.3f,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 102, 0);
	glVertex2f(-0.3f, 0.0f);    // x, y
	glVertex2f(0.3f, 0.0f);    // x, y
	glVertex2f(0.0f, 0.5f);
     glEnd();

    //triangle 2
    glBegin(GL_TRIANGLES);
	glColor3ub(255, 153, 0);
	glVertex2f(0.3f, 0.0f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.0f, 0.5f);

	glLoadIdentity();
     glEnd();



   //-----end------------------------




          //-------- Translated and scaled pyramid 2-----------------------
    //triangle 1
    glTranslated(-0.3,0.2,0);
    glScaled(0.3f,0.3f,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 102, 0);
	glVertex2f(-0.3f, 0.0f);    // x, y
	glVertex2f(0.3f, 0.0f);    // x, y
	glVertex2f(0.0f, 0.5f);
     glEnd();

    //triangle 2
    glBegin(GL_TRIANGLES);
	glColor3ub(255, 153, 0);
	glVertex2f(0.3f, 0.0f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.0f, 0.5f);

	glLoadIdentity();
     glEnd();



   //-----end------------------------



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
