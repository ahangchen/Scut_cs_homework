#include<stdlib.h>
#include <GL/glut.h>
#include<cmath>
#include<iostream>
#include<fstream>
using namespace std;
double pi = 3.1415926535898;
int count;
double height=500,width=500;
char*s;
int length=0;
 char* regularStr(int&length)
{
	length=2;
	char*s=new char[length];
	s[0]='B';
	s[1]='\0';
	for (int index=0;index<count;index++)
	{
		int lengthTmp=length;
		for (int i=0;i<lengthTmp;i++)
		{
			if (s[i]=='A')
			{
				length++;
			}
			else if (s[i]=='B')
			{
				length+=8;
			}
		}
		char*stmp=new char[length];
		for (int i=0,j=0;i<lengthTmp;i++,j++)
		{
			if (s[i]=='A')
			{
				stmp[j]='A';
				stmp[j+1]='A';
				j++;
				continue;
			}
			if (s[i]=='B')
			{
				stmp[j]='A';
				stmp[j+1]='[';
				stmp[j+2]='B';
				stmp[j+3]=']';
				stmp[j+4]='A';
				stmp[j+5]='A';
				stmp[j+6]='(';
				stmp[j+7]='B';
				stmp[j+8]=')';
				j+=8;
				continue;
			}
			else
				stmp[j]=s[i];
		}
		//stmp[length-1]='\0';
		s=new char[length];
		for (int i=0;i<length;i++)
		{
			s[i]=stmp[i];
		}
	}

	return s;
}
void drawTree(const char*s,int&i,double angle,double startX,double startY,int length)
{
	if (i>=length)
	{
		return;
	}
	if (s[i]=='A'||s[i]=='B')
	{
		glBegin(GL_LINES);
		glVertex3f(startX,startY,0);
		/*fstream f=fstream("e:/0.txt",ios::app);
		f<<startX<<" "<<startY<<"\n";*/
		startX+=cos(angle*pi/180);
		startY+=sin(angle*pi/180);
		/*f<<startX<<" "<<startY<<"\n";*/
		glVertex3f(startX,startY,0);
		glEnd();
		/*f.close();*/
		i++;
	}
	else if (s[i]=='[')
	{
		angle+=45;
		i++;
		drawTree(s,i,angle,startX,startY,length);
		angle-=45;
	} 
	else if(s[i]==']')
	{
		i++;
		return;
	}
	else if (s[i]=='(')
	{
		angle-=45;
		i++;
		drawTree(s,i,angle,startX,startY,length);
		angle+=45;
	}
	else if (s[i]==')')
	{
		i++;
		return;
	}
	else{i++;}
	drawTree(s,i,angle,startX,startY,length);
}
void reshape()
{
	//glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, width,0.0,height);
	glMatrixMode(GL_MODELVIEW);
}
void getStrForTree()
{
	delete[]s;
	s=regularStr(length);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,0.0);
	int index=0;
	drawTree(s,index,90,width/2,0,length);
	glFlush();
}
void myinit()
{
	cout<<"请输入树的生长次数：";
	cin>>count;
	getStrForTree();
	// attributes
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(0.0,1.0,0.0);
	glPointSize(2.0);
	// set up viewing
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, width,0.0,height);
	glMatrixMode(GL_MODELVIEW);
}
void mouse(int button, int state, int x, int y) 
{ 
	if(button == GLUT_LEFT_BUTTON) 
	{
		width*=0.8;
		height*=0.8;
		reshape();
		glutPostRedisplay();	
	}
	else
	if (button== GLUT_RIGHT_BUTTON)
	{
		width*=1.2;
		height*=1.2;
		reshape();
		glutPostRedisplay();
	}
	
} 
void keyboard(GLubyte downKey,int x,int y)
{
	switch(downKey)
	{
	case 'q':
		count++;
		break;
	case 'w':
		count--;
		break;
	default:
		break;
	}
	getStrForTree();
	glutPostRedisplay();
}
void  main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Simple OpenGL Example");
	myinit();
	glutDisplayFunc(display);
	glutMouseFunc(mouse);       
	glutKeyboardFunc(keyboard);
	glutMainLoop();
}
