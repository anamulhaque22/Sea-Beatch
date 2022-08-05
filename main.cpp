#include <cstdio>
//#include <windows.h>
#include <math.h>
#include <vector>
#include <cstdlib>
#define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
//#include<MMSystem.h>
void PointLight(const float x, const float y, const float z, const float amb, const float diff, const float spec);
void PointLight(const float x, const float y, const float z, const float amb, const float diff, const float spec)
{
	glEnable(GL_LIGHTING);
	GLfloat light_ambient[] = {amb, amb, amb, 1.0};
	GLfloat light_position[] = {-0.9, .9, 0, 0.0};
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glEnable(GL_LIGHT0); // enable the light after setting the properties
}
GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;
void birdd(int value)
{
	if (position22 > 1.0)
		position22 = -1.0f;
	position22 += speed22;
	glutPostRedisplay();
	glutTimerFunc(100, birdd, 0);
}
GLfloat position4 = 0.0f;
GLfloat speed4 = -0.01f;
void sunn(int value)
{
	if (position4 > 1.0)
		position4 = 0.0f;

	position4 += speed4;

	glutPostRedisplay();

	glutTimerFunc(100, sunn, 0);
}
GLfloat position3 = 0.0f;
GLfloat speed3 = -0.5f;
void rain(int value)
{
	if (position3 < -1.0)
		position3 = 1.0f;
	position3 += speed3;
	glutPostRedisplay();
	glutTimerFunc(100, rain, 0);
}
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;
void cloud(int value)
{
	if (position2 > 1.0)
		position2 = -1.0f;
	position2 += speed2;
	glutPostRedisplay();
	glutTimerFunc(100, cloud, 0);
}
GLfloat position1 = 1.0f;
GLfloat speed1 = -0.005f;
void boat(int value)
{
	if (position1 < -1.0)
		position1 = 1.0f;

	position1 += speed1;

	glutPostRedisplay();

	glutTimerFunc(100, boat, 0);
}
void cloud1()
{
	int i;

	GLfloat x = .5f;
	GLfloat y = .86f;
	GLfloat radius = .05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(x, y); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twicePi / triangleAmount)),
			y + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat a = .55f;
	GLfloat b = .83f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(a, b); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			a + (radius * cos(i * twicePi / triangleAmount)),
			b + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat c = .45f;
	GLfloat d = .83f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(c, d); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			c + (radius * cos(i * twicePi / triangleAmount)),
			d + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat e = .52f;
	GLfloat f = .8f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(e, f); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			e + (radius * cos(i * twicePi / triangleAmount)),
			f + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat g = .6f;
	GLfloat h = .82f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(g, h); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			g + (radius * cos(i * twicePi / triangleAmount)),
			h + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();
}

void cloud2()
{
	// glLoadIdentity();
	int i;

	GLfloat x = -.5f;
	GLfloat y = .86f;
	GLfloat radius = .05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(x, y); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twicePi / triangleAmount)),
			y + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat a = -.55f;
	GLfloat b = .83f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(a, b); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			a + (radius * cos(i * twicePi / triangleAmount)),
			b + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat c = -.45f;
	GLfloat d = .83f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(c, d); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			c + (radius * cos(i * twicePi / triangleAmount)),
			d + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat e = -.52f;
	GLfloat f = .8f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(e, f); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			e + (radius * cos(i * twicePi / triangleAmount)),
			f + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat g = -.6f;
	GLfloat h = .82f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(g, h); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			g + (radius * cos(i * twicePi / triangleAmount)),
			h + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();
}
void cloud3()
{
	// glLoadIdentity();
	int i;

	GLfloat x = 0.0f;
	GLfloat y = .86f;
	GLfloat radius = .05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(x, y); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twicePi / triangleAmount)),
			y + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat a = .05f;
	GLfloat b = .83f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(a, b); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			a + (radius * cos(i * twicePi / triangleAmount)),
			b + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat c = -0.05f;
	GLfloat d = .83f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(c, d); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			c + (radius * cos(i * twicePi / triangleAmount)),
			d + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat e = .02f;
	GLfloat f = .8f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(e, f); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			e + (radius * cos(i * twicePi / triangleAmount)),
			f + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat g = .1f;
	GLfloat h = .82f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
	glVertex2f(g, h); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			g + (radius * cos(i * twicePi / triangleAmount)),
			h + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();
}
void sky()
{
	glBegin(GL_QUADS);
	glColor3ub(51, 204, 255);
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(1.0f, 0.45f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}
void sky2()
{
	glBegin(GL_QUADS);
	glColor3ub(0, 51, 204);
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(1.0f, 0.45f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}

void sun()
{
	int i;

	GLfloat x = .0f;
	GLfloat y = .9f;
	GLfloat radius = .06f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 0);
	glVertex2f(x, y); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twicePi / triangleAmount)),
			y + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();
}

void moon()
{
	int i;

	GLfloat xx = -.5f;
	GLfloat yx = .93f;
	GLfloat radiusx = .06f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 51, 204);
	glVertex2f(xx, yx); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			xx + (radiusx * cos(i * twicePi / triangleAmount)),
			yx + (radiusx * sin(i * twicePi / triangleAmount)));
	}
	glEnd();

	GLfloat x = -.5f;
	GLfloat y = .9f;
	GLfloat radius = .06f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
	glVertex2f(x, y); // center of circle
	for (i = 0; i <= triangleAmount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twicePi / triangleAmount)),
			y + (radius * sin(i * twicePi / triangleAmount)));
	}
	glEnd();
}

/*
void ground()
{
	glBegin(GL_POLYGON);
	glColor3ub(102, 255, 51);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-1.0f,0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, -0.03);
	glVertex2f(0.2f, -0.07);
	glVertex2f(0.3f, -0.1);//6
	glVertex2f(0.2f, -0.13);
	glVertex2f(0.1f, -0.17);
	glVertex2f(0.2f, -0.2);
	glVertex2f(0.35f, -0.23);
	glVertex2f(0.25f, -0.25);
	glVertex2f(0.18f, -0.28);//12
	glVertex2f(0.3f, -0.32);
	glVertex2f(0.2f, -0.35);
	glVertex2f(0.4f, -0.4);
	glVertex2f(0.4f, -0.6);
	glVertex2f(0.2f, -0.65);
	glVertex2f(0.3f, -0.7);
	glVertex2f(0.2f, -0.75);
	glVertex2f(0.4f, -0.8);
	glVertex2f(0.2f, -0.85);
	glVertex2f(0.35f, -0.9);
	glVertex2f(0.25f, -0.95);
	glVertex2f(0.4f, -1.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.17f, -0.19);
	glVertex2f(0.19f, -0.2f);
	glVertex2f(0.3f, -0.12f);
	glVertex2f(0.3f, -0.1);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	 glVertex2f(0.23f, -0.295);
	 glVertex2f(0.25f, -0.305f);
	 glVertex2f(0.35f, -0.25f);
	glVertex2f(0.35f, -0.23);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.3f, -0.32);
	glVertex2f(0.3f, -0.34);
	glVertex2f(0.25f, -0.365f);
	glVertex2f(0.2f, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.205f, -0.655);
	glVertex2f(0.4f, -0.6);
	glVertex2f(0.4f, -0.625);
	glVertex2f(0.25f, -0.675);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.3f, -0.7);
	glVertex2f(0.3f, -0.72);
	glVertex2f(0.24f, -0.7595);
	glVertex2f(0.2f, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.4f, -0.8);
	glVertex2f(0.4f, -0.825);
	glVertex2f(0.24f, -0.865);
	glVertex2f(0.2f, -0.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.35f, -0.9);
	glVertex2f(0.35f, -0.925);
	glVertex2f(0.27f, -0.958);
	glVertex2f(0.25f, -0.948);
	glEnd();
}

*/
void river()
{
	glBegin(GL_QUADS);
	glColor3ub(38, 154, 214);
	// glColor3ub(0,122,204);
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(1.0f, 0.45f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();
}

void boat()
{
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.2f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 0);
	glVertex2f(-0.13f, 0.4f);
	glVertex2f(-0.11f, 0.48f);
	glVertex2f(-0.088f, 0.52f);
	glVertex2f(0.13f, 0.52f);
	glVertex2f(0.14f, 0.49f);
	glVertex2f(0.15f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 25, 25);
	glVertex2f(-0.038f, 0.57f);
	glVertex2f(-0.038f, 0.73f);
	glVertex2f(-0.035f, 0.75f);
	glVertex2f(0.064f, 0.73f);
	glVertex2f(0.065f, 0.71f);
	glVertex2f(0.065f, 0.55f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(136, 204, 0);
	glVertex2f(0.0f, 0.52f);
	glVertex2f(0.0f, 0.79f);
	glVertex2f(0.01f, 0.79f);
	glVertex2f(0.01f, 0.52f);
	glEnd();
}
void boat2()
{

	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.6f);
	glVertex2f(0.78f, -0.6f);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.88f, -0.5f); ////
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.88f, -0.5f); ////
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
	glEnd();

	glLineWidth(9);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.535f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.535f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.535f);
	glVertex2f(0.81f, -0.48f);
	glVertex2f(0.81f, -0.535f);
	glEnd();

	glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(204, 153, 0);
	glVertex2f(0.38f, -0.38f);
	glVertex2f(0.4f, -0.53f);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(153, 153, 102);
	glVertex2f(0.38f, -0.42f);
	glVertex2f(0.43f, -0.5f);
	glEnd();
}
void boat3()
{
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.88f, -0.5f); ////
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
	glEnd();

	glLineWidth(9);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.535f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.535f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.535f);
	glVertex2f(0.81f, -0.48f);
	glVertex2f(0.81f, -0.535f);
	glEnd();

	glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(204, 153, 0);
	glVertex2f(0.38f, -0.38f);
	glVertex2f(0.4f, -0.53f);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(153, 153, 102);
	glVertex2f(0.38f, -0.42f);
	glVertex2f(0.43f, -0.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.6f);
	glVertex2f(0.78f, -0.6f);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.88f, -0.5f); ////
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
	glEnd();
}

void boat4()
{
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(0.3f, -0.25f);
	glVertex2f(0.35f, -0.3f);
	glVertex2f(0.65f, -0.3f);
	glVertex2f(0.7f, -0.25f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 0);
	glVertex2f(0.37f, -0.25f);
	glVertex2f(0.39f, -0.17f);
	glVertex2f(0.412f, -0.13f);
	glVertex2f(0.63f, -0.13f);
	glVertex2f(0.64f, -0.16f);
	glVertex2f(0.65f, -0.25f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 25, 25);
	glVertex2f(0.462f, -0.08f);
	glVertex2f(0.462f, 0.08f);
	glVertex2f(0.465f, 0.1f);
	glVertex2f(0.564f, 0.08f);
	glVertex2f(0.565f, 0.06f);
	glVertex2f(0.565f, -0.1f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(136, 204, 0);
	glVertex2f(0.5f, -0.13f);
	glVertex2f(0.5f, 0.14f);
	glVertex2f(0.51f, 0.14f);
	glVertex2f(0.51f, -0.13f);
	glEnd();
}

void StartingText()
{
	char text[120];
	sprintf(text, "BEAUTY OF NATURE  BEAUTIFUL VILLAGE SCENARIO", 5.00, 8.00);
	glColor3f(0, 0, 0);
	glRasterPos2f(-20, 12);
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == ' ' && text[i + 1] == ' ')
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
			glRasterPos2f(-32, 02);
		}
		else
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
	}
	sprintf(text, "  PRESS D FOR DAY VIEW,PRESS N FOR NIGHT VIEW,PRESS R FOR RAIN VIEW", 5.00, 8.00);
	glColor3f(0, 0, 0);
	glRasterPos2f(-100, 0);
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == ' ' && text[i + 1] == ' ')
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
			glRasterPos2f(-30.5, -10);
		}
		else
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
	}
	sprintf(text, "  CREATED BY-", 5.00, 8.00);
	glColor3f(0, 0, 0);
	glRasterPos2f(-100, 0);
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == ' ' && text[i + 1] == ' ')
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
			glRasterPos2f(18, -25);
		}
		else
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
	}
	sprintf(text, "  ISLAM,MD,MAHIDUL", 5.00, 8.00);
	glColor3f(0, 0, 0);
	glRasterPos2f(-100, 0);
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == ' ' && text[i + 1] == ' ')
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
			glRasterPos2f(18, -30);
		}
		else
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
	}
}

void display2()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	PointLight(0, 0, 1, 0, 1, 1);

	glLoadIdentity();
	glutSwapBuffers();
}

struct Point
{
	float x, y;
	unsigned char r, g, b, a;
};
std::vector<Point> points;

void display1(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(2);
	sky();
	cloud1();
	cloud2();
	cloud3();

	river();

	boat2();

	glOrtho(-50, 50, -50, 50, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	// draw
	glPushMatrix();
	glTranslatef(0.0f, position3, 0.0f);
	glColor3ub(255, 255, 255);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glVertexPointer(2, GL_FLOAT, sizeof(Point), &points[0].x);
	glColorPointer(4, GL_UNSIGNED_BYTE, sizeof(Point), &points[0].r);
	glPointSize(2.5);
	glDrawArrays(GL_POINTS, 0, points.size());
	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_COLOR_ARRAY);
	glPopMatrix();
	glFlush();
	glutSwapBuffers();
}

void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(2);
	sky();
	sun();
	glPushMatrix();
	glTranslatef(position2, 0.0f, 0.0f);

	cloud1();
	cloud2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(position22, 0.0f, 0.0f);

	glPopMatrix();

	river();
	glPushMatrix();
	glTranslatef(position1, 0.0f, 0.0f);
	boat();
	glPopMatrix();

	boat2();

	glFlush();
	glutSwapBuffers();
}
void reshape(int w, int h)
{
	//    std::cout<<"Reshape is called"<<std::endl;
	float aspectRatio = (float)w / (float)h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(145, aspectRatio, 1.0, 100.0);
	glMatrixMode(GL_MODELVIEW);
}

void Display(void)
{
	// std::cout<<"Display 1 called"<<std::endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, -20);
	StartingText();
	glFlush();
	glutSwapBuffers();
}

void init(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClearDepth(1.0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	glEnable(GL_LIGHT0);
	// std::cout<<"Init is called"<<std::endl;
}
void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'd':
		glutDestroyWindow(1);
		glutInitWindowSize(1240, 750);
		glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
		glutCreateWindow("village scenario");
		glutKeyboardFunc(handleKeypress);
		glutDisplayFunc(display);
		//PlaySound(TEXT("bird-2.wav"), NULL, SND_ASYNC);
		break;
		break;
	case 'r':
		glutDestroyWindow(1);
		glutInitWindowSize(1240, 750);
		glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
		glutCreateWindow("village scenario");
		glutKeyboardFunc(handleKeypress);
		glutDisplayFunc(display1);
		//PlaySound(TEXT("rain-07.wav"), NULL, SND_ASYNC);
		break;
	case 'n':
		glutDestroyWindow(1);
		glutInitWindowSize(1240, 750);
		glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
		glutCreateWindow("village scenario");
		glutKeyboardFunc(handleKeypress);
		glutDisplayFunc(display2);
		//PlaySound(TEXT("cricket-2.wav"), NULL, SND_ASYNC);
		glutPostRedisplay();
		break;
	case 'D':
		glutDestroyWindow(1);
		glutInitWindowSize(1240, 750);
		glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
		glutCreateWindow("village scenario");
		glutKeyboardFunc(handleKeypress);
		glutDisplayFunc(display);
		//PlaySound(TEXT("bird-2.wav"), NULL, SND_ASYNC);
		break;
		break;
	case 'R':
		glutDestroyWindow(1);
		glutInitWindowSize(1240, 750);
		glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
		glutCreateWindow("village scenario");
		glutKeyboardFunc(handleKeypress);
		glutDisplayFunc(display1);
		//PlaySound(TEXT("rain-07.wav"), NULL, SND_ASYNC);
		break;
	case 'N':
		glutDestroyWindow(1);
		glutInitWindowSize(1240, 750);
		glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
		glutCreateWindow("village scenario");
		glutKeyboardFunc(handleKeypress);
		glutDisplayFunc(display2);
		//PlaySound(TEXT("cricket-2.wav"), NULL, SND_ASYNC);
		glutPostRedisplay();
	}
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1240, 750);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
	glutCreateWindow("village scenario");
	init();
	glutReshapeFunc(reshape);
	glutDisplayFunc(Display);
	for (size_t i = 0; i < 1000; ++i)
	{
		Point pt;
		pt.x = -50 + (rand() % 100);
		pt.y = -50 + (rand() % 100);
		pt.r = 255;
		pt.g = 255;
		pt.b = 255;
		pt.a = 255;
		points.push_back(pt);
	}
	glutTimerFunc(100, cloud, 0);
	glutTimerFunc(100, sunn, 0);
	glutTimerFunc(100, boat, 0);
	glutTimerFunc(100, rain, 0);
	glutTimerFunc(100, birdd, 0);
	glutKeyboardFunc(handleKeypress);
	init();
	glutMainLoop();
	return 0;
}
