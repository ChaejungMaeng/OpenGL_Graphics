//#include "cg.h"
//#include "time.h"
//#include <stdlib.h>
//#include <stdio.h>
//
//#define M_PI 3.141592
//
//void startup();
//void render();
//void shutdown();
//
//struct scene {
//	
//	GLuint rendering_program;
//	GLuint vertex_array_object;
//
//	vec4 vertices[100];
//	vec4 colors[100];
//	unsigned int indices[100];
//	int num, numIndex;
//
//	mat4 model;
//	GLint mv_location;
//	GLint color;
//
//	//사용할 배열 선언
//	float x[200];
//	float y[200];
//	float dist[200];
//	float ang[200];
//};
//scene sc;
//
//void make_model()
//{   
//	///////////////////은행잎///////////////////////
//	sc.num = 0;
//
//	sc.vertices[sc.num] = vec4(0.6, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//0
//	sc.vertices[sc.num] = vec4(0.55, 0.2, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//1
//	sc.vertices[sc.num] = vec4(0.45, 0.35, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//2
//	sc.vertices[sc.num] = vec4(0.3, 0.45, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//3
//	sc.vertices[sc.num] = vec4(0.1, 0.5, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//4
//
//	sc.vertices[sc.num] = vec4(0.0, 0.4, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++; //5
//
//	sc.vertices[sc.num] = vec4(-0.1, 0.5, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;  //6
//	sc.vertices[sc.num] = vec4(-0.3, 0.45, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++; //7
//	sc.vertices[sc.num] = vec4(-0.45, 0.35, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++; //8
//	sc.vertices[sc.num] = vec4(-0.55, 0.2, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//9
//	sc.vertices[sc.num] = vec4(-0.6, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//10
//
//	sc.vertices[sc.num] = vec4(-0.02, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//11
//	sc.vertices[sc.num] = vec4(-0.02, -0.5, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//12
//	sc.vertices[sc.num] = vec4(0.02, -0.5, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//13
//	sc.vertices[sc.num] = vec4(0.02, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//14
//
//	sc.vertices[sc.num] = vec4(0.0, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 1.0, 1.0);  sc.num++;//15
//
//	sc.indices[0] = 15; sc.indices[1] = 0; sc.indices[2] = 1;
//	sc.indices[3] = 15; sc.indices[4] = 1; sc.indices[5] = 2;
//	sc.indices[6] = 15; sc.indices[7] = 2; sc.indices[8] = 3;
//	sc.indices[9] = 15; sc.indices[10] = 3; sc.indices[11] = 4;
//	sc.indices[12] = 15; sc.indices[13] = 4; sc.indices[14] = 5;
//
//	sc.indices[15] = 15; sc.indices[16] = 5; sc.indices[17] = 6;
//	sc.indices[18] = 15; sc.indices[19] = 6; sc.indices[20] = 7;
//	sc.indices[21] = 15; sc.indices[22] = 7; sc.indices[23] = 8;
//	sc.indices[24] = 15; sc.indices[25] = 8; sc.indices[26] = 9;
//
//	sc.indices[27] = 15; sc.indices[28] = 9; sc.indices[29] = 10;
//	sc.indices[30] = 14; sc.indices[31] = 11; sc.indices[32] = 12;
//	sc.indices[33] = 14; sc.indices[34] = 12; sc.indices[35] = 13;
//
//
//	///////////////////////단풍잎/////////////////////////
//
//	float maple = 1.5;
//
//	sc.vertices[sc.num] = vec4(0.6 + maple, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//0
//	sc.vertices[sc.num] = vec4(0.4 + maple, 0.3, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//1
//	sc.vertices[sc.num] = vec4(0.6 + maple, 0.6, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//2
//	sc.vertices[sc.num] = vec4(0.2 + maple, 0.6, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//3
//
//	sc.vertices[sc.num] = vec4(0.0 + maple, 0.9, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//4
//
//	sc.vertices[sc.num] = vec4(-0.2 + maple, 0.6, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//5
//	sc.vertices[sc.num] = vec4(-0.6 + maple, 0.6, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//6
//	sc.vertices[sc.num] = vec4(-0.4 + maple, 0.3, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//7
//	sc.vertices[sc.num] = vec4(-0.6 + maple, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//8
//
//	sc.vertices[sc.num] = vec4(-0.02 + maple, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//9
//	sc.vertices[sc.num] = vec4(-0.02 + maple, -0.5, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//10
//	sc.vertices[sc.num] = vec4(0.02 + maple, -0.5, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//11
//	sc.vertices[sc.num] = vec4(0.02 + maple, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 0.0, 0.0, 1.0);  sc.num++;//12
//
//	sc.vertices[sc.num] = vec4(0.0 + maple, 0.0, 0.0, 1.0); sc.colors[sc.num] = vec4(1.0, 1.0, 0.0, 1.0);  sc.num++;//13
//
//
//	sc.indices[0 + 36] = 13 + 16; sc.indices[1 + 36] = 0 + 16; sc.indices[2 + 36] = 1 + 16;
//	sc.indices[3 + 36] = 13 + 16; sc.indices[4 + 36] = 1 + 16; sc.indices[5 + 36] = 2 + 16;
//	sc.indices[6 + 36] = 13 + 16; sc.indices[7 + 36] = 2 + 16; sc.indices[8 + 36] = 3 + 16;
//	sc.indices[9 + 36] = 13 + 16; sc.indices[10 + 36] = 3 + 16; sc.indices[11 + 36] = 4 + 16;
//	sc.indices[12 + 36] = 13 + 16; sc.indices[13 + 36] = 4 + 16; sc.indices[14 + 36] = 5 + 16;
//
//	sc.indices[15 + 36] = 13 + 16; sc.indices[16 + 36] = 5 + 16; sc.indices[17 + 36] = 6 + 16;
//	sc.indices[18 + 36] = 13 + 16; sc.indices[19 + 36] = 6 + 16; sc.indices[20 + 36] = 7 + 16;
//	sc.indices[21 + 36] = 13 + 16; sc.indices[22 + 36] = 7 + 16; sc.indices[23 + 36] = 8 + 16;
//	sc.indices[24 + 36] = 12 + 16; sc.indices[25 + 36] = 9 + 16; sc.indices[26 + 36] = 10 + 16;
//	sc.indices[27 + 36] = 12 + 16; sc.indices[28 + 36] = 10 + 16; sc.indices[29 + 36] = 11 + 16;
//
//	///////////////////////////도토리//////////////////////////  
//
//	float aple = 0.75;
//	float ple = -1.5;
//
//	sc.vertices[sc.num] = vec4(0.3 + aple, 0.15 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.5, 0.25, 0.0, 1.0);  sc.num++;//0
//	sc.vertices[sc.num] = vec4(0.4 + aple, 0.4 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.55, 0.30, 0.0, 1.0);  sc.num++;//1
//	sc.vertices[sc.num] = vec4(0.04 + aple, 0.5 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.6, 0.35, 0.0, 1.0);  sc.num++;//2
//	sc.vertices[sc.num] = vec4(0.04 + aple, 0.7 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.65, 0.40, 0.0, 1.0);  sc.num++;//3
//
//
//	sc.vertices[sc.num] = vec4(-0.04 + aple, 0.7 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.50, 0.30, 0.0, 1.0);  sc.num++;//4
//	sc.vertices[sc.num] = vec4(-0.04 + aple, 0.5 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.5, 0.25, 0.0, 1.0);  sc.num++;//5
//	sc.vertices[sc.num] = vec4(-0.4 + aple, 0.4 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.5, 0.25, 0.0, 1.0);  sc.num++;//6
//
//	sc.vertices[sc.num] = vec4(-0.3 + aple, 0.15 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.5, 0.25, 0.0, 1.0);  sc.num++;//7
//	sc.vertices[sc.num] = vec4(-0.3 + aple, -0.25 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.7, 0.45, 0.0, 1.0);  sc.num++;//8
//	sc.vertices[sc.num] = vec4(0.0 + aple, -0.35 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.7, 0.45, 0.0, 1.0);  sc.num++;//9
//	sc.vertices[sc.num] = vec4(0.3 + aple, -0.25 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.7, 0.45, 0.0, 1.0);  sc.num++;//10
//
//	sc.vertices[sc.num] = vec4(0.0 + aple, 0.0 + ple, 0.0, 1.0); sc.colors[sc.num] = vec4(0.5, 0.25, 0.0, 1.0);  sc.num++;//11
//
//
//	sc.indices[0 + 36 + 30] = 11 + 30; sc.indices[1 + 36 + 30] = 0 + 30; sc.indices[2 + 36 + 30] = 1 + 30;
//	sc.indices[3 + 36 + 30] = 11 + 30; sc.indices[4 + 36 + 30] = 1 + 30; sc.indices[5 + 36 + 30] = 2 + 30;
//	sc.indices[6 + 36 + 30] = 11 + 30; sc.indices[7 + 36 + 30] = 2 + 30; sc.indices[8 + 36 + 30] = 3 + 30;
//	sc.indices[9 + 36 + 30] = 11 + 30; sc.indices[10 + 36 + 30] = 3 + 30; sc.indices[11 + 36 + 30] = 4 + 30;
//	sc.indices[12 + 36 + 30] = 11 + 30; sc.indices[13 + 36 + 30] = 4 + 30; sc.indices[14 + 36 + 30] = 5 + 30;
//
//	sc.indices[15 + 36 + 30] = 11 + 30; sc.indices[16 + 36 + 30] = 5 + 30; sc.indices[17 + 36 + 30] = 6 + 30;
//	sc.indices[18 + 36 + 30] = 11 + 30; sc.indices[19 + 36 + 30] = 6 + 30; sc.indices[20 + 36 + 30] = 7 + 30;
//	sc.indices[21 + 36 + 30] = 11 + 30; sc.indices[22 + 36 + 30] = 7 + 30; sc.indices[23 + 36 + 30] = 8 + 30;
//	sc.indices[24 + 36 + 30] = 11 + 30; sc.indices[25 + 36 + 30] = 8 + 30; sc.indices[26 + 36 + 30] = 9 + 30;
//	sc.indices[27 + 36 + 30] = 11 + 30; sc.indices[28 + 36 + 30] = 9 + 30; sc.indices[29 + 36 + 30] = 10 + 30;
//	sc.indices[30 + 36 + 30] = 11 + 30; sc.indices[31 + 36 + 30] = 10 + 30; sc.indices[32 + 36 + 30] = 0 + 30;
//
//	sc.numIndex = 99;
//
//}
//
//void startup()
//{
//	//shader
//	sc.rendering_program = compile_shaders("vproject.glsl", "fproject.glsl");
//
//	glGenVertexArrays(1, &sc.vertex_array_object);
//	glBindVertexArray(sc.vertex_array_object);
//
//	GLuint buffer[2]; //buffer 2개
//
//	make_model();
//
//	glGenBuffers(2, buffer); //generate buffer 2개 생성
//
//	//sc.vertices의 positon값 버퍼
//	glBindBuffer(GL_ARRAY_BUFFER, buffer[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(sc.vertices), sc.vertices, GL_STATIC_DRAW);
//	GLuint vPosition = glGetAttribLocation(sc.rendering_program, "vPosition");
//	glVertexAttribPointer(vPosition, 4, GL_FLOAT, GL_FALSE, 0, NULL);
//	glEnableVertexAttribArray(vPosition);
//
//	//sc.colors의 색상값 버퍼
//	glBindBuffer(GL_ARRAY_BUFFER, buffer[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(sc.colors), sc.colors, GL_STATIC_DRAW);
//	GLuint vColor = glGetAttribLocation(sc.rendering_program, "vColor");
//	glVertexAttribPointer(vColor, 4, GL_FLOAT, GL_FALSE, 0, NULL);
//	glEnableVertexAttribArray(vColor);
//
//
//	
//	float randomNumX; //x축 좌표의 random 값
//	float randomNumY; //y축 좌표의 random 값
//	float randomNumA; //dist[], ang[] random 값
//
//	//translate의 x, y 
//	//x[i] 좌표 계산 0~60
//	for (int i = 0; i < 60; i++) {
//		randomNumX = (rand() % 1000 + 1)* (-0.002);
//		sc.x[i] = randomNumX;
//	}
//	//y[i] 좌표 계산
//	for (int i = 0; i < 60; i++) {
//		randomNumY = (rand() % 5000 + 1)* (0.001);
//		sc.y[i] = randomNumY;
//		cout << randomNumY << endl;
//	}
//	//x[i] 좌표 계산 60~120
//	for (int i = 0; i < 60; i++) {
//		randomNumX = (rand() % 1000 + 1)* (0.002);
//		sc.x[i + 60] = randomNumX;
//	}
//	//y[i] 좌표 계산 60~120
//	for (int i = 0; i < 60; i++) {
//		randomNumY = (rand() % 5000 + 1)* (0.001);
//		sc.y[i + 60] = randomNumY;
//		cout << randomNumY << endl;
//	}
//	//scale의 dist[] random하게 값 지정
//	for (int i = 0; i < 120; i++) {
//		randomNumA = (rand() % 10 + 1)* (0.001);
//		sc.dist[i] = randomNumA;
//	}
//	//rotate의 ang[] random하게 값 지정
//	for (int i = 0; i < 360; i++) {
//		randomNumA = (rand() % 10000 + 1)* (0.001);
//		sc.ang[i] = randomNumA;
//	}
//}
//
//void idle()
//{
//	////////translate/////////
//	//y축방향으로 0.00006씩 증가 120개
//	for (int i = 0; i < 120; i++) {
//		sc.y[i] -= 0.00006;
//	}
//	//x축방향으로 0.00004씩 증가 60개 0~59
//	for (int i = 0; i < 60; i++) {
//		sc.x[i] += 0.00004;
//	}
//	//x축방향으로 0.00004씩 증가 나머지 60개 60~119
//	for (int i = 60; i < 120; i++) {
//		sc.x[i] -= 0.00004;
//	}
//
//	//scale의 dist[]값 범위에 따라 증감
//	static float sca = 0.0001;
//
//	for (int i = 0; i < 120; i++) { 
//		sc.dist[i] += sca;
//
//		if (sc.dist[i] > 0.2) { // dist[]값이 0.2보다 크면 0.00001씩 줄어들게
//			sca -= 0.00001;
//		}
//		if (sc.dist[i] < 0.05) { // // dist[]값이 0.05보다 작으면 0.00001씩 커지게
//			sca += 0.00001;
//		}
//	}
//	//rotate의 ang[]값 범위에 따라 증감
//	static float anK = 0.0001;
//
//	for (int i = 0; i < 360; i++) {
//		sc.ang[i] += anK;
//		if (sc.ang[i] > 359) {
//			anK = -0.0005;
//		}
//		if (sc.ang[i] < 0) {
//			anK += 0.0005;
//		}
//	}
//
//	glutPostRedisplay();
//
//}
//
//void render()
//{
//	const GLfloat color[] = { 0.2f, 0.5f, 1.0f, 0.8f };
//	glClearBufferfv(GL_COLOR, 0, color);
//
//	//translate, rotate, scale로 sc.model 변환
//	for (int i = 0; i < 120; i++) {
//		sc.model = translate(mat4(1.0), vec3(sc.x[i], sc.y[i], 0.0));
//		sc.model = rotate(sc.model, sc.ang[i], vec3(0.0, 0.0, 1.0));
//		sc.model = scale(sc.model, vec3(sc.dist[i], sc.dist[i], 0.0));
//
//		glUniformMatrix4fv(sc.mv_location, 1, GL_FALSE, value_ptr(sc.model));
//		glDrawElements(GL_TRIANGLES, sc.numIndex, GL_UNSIGNED_INT, sc.indices);
//	}
//
//	glUseProgram(sc.rendering_program);
//	glutSwapBuffers();
//}
//
//
//void shutdown()
//{
//	glDeleteVertexArrays(1, &sc.vertex_array_object);
//	glDeleteProgram(sc.rendering_program);
//}
//
//int main(int argc, char **argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
//
//	cout << "yy";
//	glutInitWindowSize(1200, 700); cout << "tt";
//	glutCreateWindow("My Window");
//
//	glewInit();
//	version();
//
//	startup();
//	glutDisplayFunc(render);
//	glutIdleFunc(idle);
//
//	glutMainLoop();
//	shutdown();
//	return 0;
//}
