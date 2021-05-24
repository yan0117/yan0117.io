#include<GL/glut.h>//使用GLUT外掛

#include<stdio.h>//今日02

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//清空

    glutSolidTeapot(0.3);//實心茶壺

    glutSwapBuffers();//交換兩倍的buffers

}

void mouse(int button,int state,int x,int y)//今日03

{

    printf("button:%d,state:%d,x:%d,y:%d\n",button,state,x,y);

}

int main(int argc,char**argv)//以前是int main()

{

    glutInit(&argc,argv);//GLUT初始值

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//顯示模式

    glutCreateWindow("week04");//開窗

    glutDisplayFunc(display);//等一下要顯示的函式

    glutMouseFunc(mouse);//今日01

    glutMainLoop();//主要迴圈

}
