#include<gl/glut.h>

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Demo 1");
	glutMainLoop();

	return 0;
}