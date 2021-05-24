#include "glm.h"//使用glm.cpp的外掛

GLMmodel*pmodel=NULL;//pmodel指標

void drawmodel(void)//使用範例的程式

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

    drawmodel();//使用範例的程式

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
