# OpenGL_Graphics

# Interactive Computer Graphics - Autumn Greetings -

## scene 구조체
Vertices, colors, indicies, x[200], y[200], dist[200], ang[200] 배열 선언

## Vertices 모델링
단풍잎, 은행잎, 도토리
vertices 좌표 찍고 indices로 연결

## startup() 메소드 
X[], y[] 좌표 dist[], ang[] 값 계산

## idle() 메소드
Translate : x[], y[] X축 방향 60개씩 좌우 양쪽
Scale : dist[] 120개 Rotate : ang[] 360개 (360도 회전)

## render()메소드
sc.model을 Translate, Scale, Rotate
해주는 render()
 
## main() 메소드
Window size 설정 startup() glutDisplayFunc() glutIdleFunc()
 
