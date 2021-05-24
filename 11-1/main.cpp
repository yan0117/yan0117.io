#include "glm.h"//�ϥ�glm.cpp���~��

GLMmodel*pmodel=NULL;//pmodel����

void drawmodel(void)//�ϥνd�Ҫ��{��

{

    if (!pmodel) {

	pmodel = glmReadOBJ("data/porsche.obj");

	if (!pmodel) exit(0);

	glmUnitize(pmodel);

	glmFacetNormals(pmodel);

	glmVertexNormals(pmodel, 90.0);

    }



    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);

}

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    drawmodel();//�ϥνd�Ҫ��{��

    glutSwapBuffers();

}

int main(int argc,char ** argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week11");

    glutDisplayFunc(display);

    glutMainLoop();

}
