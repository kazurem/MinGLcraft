#include <GL/glut.h> // GLUT, includes OpenGL headers

void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
    glBegin(GL_TRIANGLES);        // Start drawing a triangle
        glColor3f(1.0, 0.0, 0.0); glVertex2f(-0.5, -0.5); // Red vertex
        glColor3f(0.0, 1.0, 0.0); glVertex2f( 0.5, -0.5); // Green vertex
        glColor3f(0.0, 0.0, 1.0); glVertex2f( 0.0,  0.5); // Blue vertex
    glEnd();
    glFlush(); // Render the triangle
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                    // Initialize GLUT
    glutCreateWindow("OpenGL Triangle");     // Create a window with the given title
    glutInitWindowSize(1000, 1000);            // Set the window's initial width & height
    glutDisplayFunc(display);                // Register display callback handler for window re-paint
    glutMainLoop();                          // Enter the infinite event-processing loop
    return 0;
}
