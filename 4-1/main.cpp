#include<GL/glut.h>//�ϥ�GLUT�~��

#include<stdio.h>//����02

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//�M��

    glutSolidTeapot(0.3);//��߯���

    glutSwapBuffers();//�洫�⭿��buffers

}

void mouse(int button,int state,int x,int y)//����03

{

    printf("button:%d,state:%d,x:%d,y:%d\n",button,state,x,y);

}

int main(int argc,char**argv)//�H�e�Oint main()

{

    glutInit(&argc,argv);//GLUT��l��

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//��ܼҦ�

    glutCreateWindow("week04");//�}��

    glutDisplayFunc(display);//���@�U�n��ܪ��禡

    glutMouseFunc(mouse);//����01

    glutMainLoop();//�D�n�j��

}
