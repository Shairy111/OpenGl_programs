
#include <GL/glut.h>

void display()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);

    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(300, 300);
    glutCreateWindow("simple program");
    glutDisplayFunc(display);
    glutMainLoop();
}
