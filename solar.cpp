#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <cmath>

//O sistema solar começa inicialmente parado, é necessário dá um clique para que os planetas iniciem a orbitar
static GLfloat spin = 0.0;

void Mercurio(){
	float x, y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	
	glColor3f(1.0, 1.0, 1.0);
	stage = (3.14 * 2.f)/70.f;
	radius = 200.f;
	
	glColor3f(0.5, 0.5, 1.0);
	glLineWidth(10.0);
	stage = (3.14 * 2.f)/1000.f;
	radius = 10.f;
	
	glBegin(GL_TRIANGLE_FAN);{
		glVertex2f(baseX, baseY);
		for (float tempAngle = 0.0; tempAngle <= 3.14 * 2.01f; tempAngle += stage) {
		x = baseX + radius * cos(tempAngle);
		y = baseY + radius * sin(tempAngle);
		glVertex2f(x,y);
		}
	}glEnd();
}
void Venus(){
	float x, y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	
	glColor3f(1.0, 1.0, 1.0);
	stage = (3.14 * 2.f)/70.f;
	radius = 200.f;
	
	glColor3f(1, 0.5, 1.0);
	glLineWidth(10.0);
	stage = (3.14 * 2.f)/1000.f;
	radius = 15.f;
	
	glBegin(GL_TRIANGLE_FAN);{
		glVertex2f(baseX, baseY);
		for (float tempAngle = 0.0; tempAngle <= 3.14 * 2.01f; tempAngle += stage) {
			x = baseX + radius * cos (tempAngle);
			y = baseY + radius * sin (tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
}

void Terra(){
	float x, y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	
	glColor3f(1.0, 1.0, 1.0);
	stage = (3.14 * 2.f)/70.f;
	radius = 200.f;
	
	glColor3f(0,1,1);
	glLineWidth(10.0);
	stage = (3.14*2.f)/1000.f;
	radius = 15.f;
	
	glBegin(GL_TRIANGLE_FAN);{
		glVertex2f(baseX, baseY);
		for (float tempAngle = 0.0; tempAngle <= 3.14*2.01f; tempAngle += stage) {
			x = baseX + radius * cos(tempAngle);
			y = baseY + radius * sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
}

void Marte(){
	float x, y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	
	glColor3f(1.0, 1.0, 1.0);
	stage = (3.14*2.f)/1000.f;
	radius = 15.f;
	
	glBegin(GL_TRIANGLE_FAN);{
		glVertex2f(baseX, baseY);
		for(float tempAngle = 0.0; tempAngle <= 3.14*2.01f; tempAngle += stage){
			x = baseX + radius * cos(tempAngle);
			y = baseY + radius * sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
}

void Jupiter(){
	float x, y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	
	glColor3f(1.0, 1.0, 1.0);
	stage = (3.14*2.f)/70.f;
	radius = 200.f;
	
	glColor3f(1,1,0);
	glLineWidth(10.0);
	stage = (3.14*2.f)/1000.f;
	radius = 15.f;
	
	glBegin(GL_TRIANGLE_FAN);{
		glVertex2f(baseX,baseY);
		for(float tempAngle = 0.0; tempAngle <= 3.14*2.01f; tempAngle += stage) {
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
}

void Saturno(){

	float x, y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	
	glColor3f(1.0, 1.0, 1.0);
	stage = (3.14*2.f)/70.f;
	radius = 200.f;
	
	glColor3f(1,1,1);
	glLineWidth(10.0);
	stage = (3.14*2.f)/1000.f;
	radius = 15.f;
	
	glBegin(GL_TRIANGLE_FAN); {
		glVertex2f(baseX, baseY);
		for(float tempAngle = 0.0; tempAngle<= 3.14*2.01f; tempAngle += stage) {
			x = baseX + radius * cos(tempAngle);
			y = baseY + radius * sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
}

void Urano(){
	float x,y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	stage = (3.14*2.f);
	radius = 200.f;
	
	glColor3f(0,1,0);
	glLineWidth(10.0);
	stage = (3.14 * 2.f)/1000.f;
	radius = 15.f;
	
	glBegin(GL_TRIANGLE_FAN);{
		glVertex2f(baseX,baseY);
		for(float tempAngle = 0.0; tempAngle<=3.14*2.01f; tempAngle += stage){
			x = baseX + radius * cos(tempAngle);
			y = baseY + radius * sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
}
void Netuno(){
	float x,y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	stage = (3.14*2.f)/70.f;
	radius = 200.f;
	
	glColor3f(1,0,1);
	glLineWidth(10.0);
	stage = (3.14*2.f)/1000.f;
	radius = 15.f;
	
	glBegin(GL_TRIANGLE_FAN); {
		glVertex2f(baseX, baseY);
		for(float tempAngle = 0.0; tempAngle <= 3.14*2.01f; tempAngle += stage){
			x = baseX + radius * cos(tempAngle);
			y = baseY + radius * sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
}

//Sera responsavel criar os desenhas das orbitas e o sol
void desenhaOrbitas(){
	float x,y;
	float baseX = 10/2.f;
	float baseY = 10/2.f;
	float radius;
	float stage;
	glLineWidth(4.0);
	
	glColor3f(1.0, 1.0, 1.0);
	stage = (3.14*2.f)/10.f;
	radius = 75.f;
	
	glBegin(GL_POINTS); {
		for(float tempAngle = 0.0; tempAngle<= 3.14*2.f; tempAngle += stage) {
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
	
	stage = (3.14*2.f)/70.f;
	radius = 140.f;
	
	glBegin(GL_POINTS); {
		for (float tempAngle = 0.0; tempAngle<=3.14*2.f; tempAngle += stage){
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
	
	stage = (3.14*2.f)/70.f;
	radius = 180.f;
	
	glBegin(GL_POINTS); {
		for (float tempAngle = 0.0; tempAngle<=3.14*2.f; tempAngle += stage){
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
	
	stage = (3.14*2.f)/70.f;
	radius = 250.f;
	
	glBegin(GL_POINTS); {
		for (float tempAngle = 0.0; tempAngle<=3.14*2.f; tempAngle += stage){
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
	
	stage = (3.14*2.f)/70.f;
	radius = 373.f;
	
	glBegin(GL_POINTS); {
		for (float tempAngle = 0.0; tempAngle<=3.14*2.f; tempAngle += stage){
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
	
	stage = (3.14*2.f)/70.f;
	radius = 453.f;
	
	glBegin(GL_POINTS); {
		for (float tempAngle = 0.0; tempAngle<=3.14*2.f; tempAngle += stage){
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
	
	stage = (3.14*2.f)/70.f;
	radius = 630.f;
	
	glBegin(GL_POINTS); {
		for (float tempAngle = 0.0; tempAngle<=3.14*2.f; tempAngle += stage){
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
	
	stage = (3.14*2.f)/70.f;
	radius = 730.f;
	
	glBegin(GL_POINTS); {
		for (float tempAngle = 0.0; tempAngle<=3.14*2.f; tempAngle += stage){
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
	
	glColor3f(1.0, 0.7, 0.0);
	glLineWidth(10.0);
	stage = (3.14*2.f)/30.f;
	radius = 40.f;
	
	glBegin(GL_TRIANGLE_FAN);{
		glVertex2f(baseX, baseY);
		for(float tempAngle = 0.0; tempAngle<=3.14*2.01f;tempAngle += stage){
			x = baseX + radius*cos(tempAngle);
			y = baseY + radius*sin(tempAngle);
			glVertex2f(x,y);
		}
	}glEnd();
}

//Sera responsavel por configurar os planetas na tela
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	desenhaOrbitas();
	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(50.0, 50.0, 0.0);
	Mercurio();
	glTranslatef(-80.0, -190.0, 0.0);
	Venus();
	glTranslatef(-150.0, 180.0, 0.0);
	Terra();
	glTranslatef(290.0, 180.0, 0.0);
	Marte();
	glTranslatef(100.0, 100.0, 0.0);
	Jupiter();
	glTranslatef(-400.0, 100.0, 0.0);
	Saturno();
	glTranslatef(-350.0, -90.0, 0.0);
	Urano();
	glTranslatef(600.0, 400.0, 0.0);
	Netuno();
	glPopMatrix();
	glutSwapBuffers();
}

//Essa função sera responsavel pela animação de translação dos planetas
void spinDisplay(void)
{
	spin = spin + 1.0;
	if(spin>360.0)
		spin = spin - 360.0;
	glutPostRedisplay();
}

//A função mouse ira pegar o click para dar inicio ao movimentos de translação dos planetas
void mouse(int button, int state, int x, int y)
{
	switch(button) {
	case GLUT_LEFT_BUTTON: if (state == GLUT_DOWN)
		glutIdleFunc(spinDisplay); break;
	case GLUT_MIDDLE_BUTTON:
	case GLUT_RIGHT_BUTTON: if(state == GLUT_DOWN)
		glutIdleFunc(NULL); break; 
	default: break;
	}
}

//A pressionar a tecla "Space / espaço", a janela é fechada 
void keyboard(unsigned char key, int c, int y)
{
	if(key = 27) 
		exit(0);
}

//Função main, onde será inicializada a aplicação, bem como as configurações iniciais
int main (int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(700,500);
	glutInitWindowPosition(400,300);
	glutCreateWindow("Sistema solar");
	glutDisplayFunc(display);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-800.0, 800.0, -800.0, 800.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
	
