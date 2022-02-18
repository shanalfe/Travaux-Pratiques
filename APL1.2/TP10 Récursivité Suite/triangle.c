#include<stdio.h>
#include<stdlib.h>
#include<graph.h>

#define X 0
#define Y 1000
#define XX 1000
#define YY 1000
#define XXX 500
#define YYY 0

typedef struct 
{
	int x;
	int y;
}point;

typedef struct 
{
	point a;
	point b;
	point c;
}Triangle;

point Midline(point a, point b)
{
	point p;
	p.x = (a.x + b.x)/2;
	p.y = (a.y + b.y)/2;
	return p;
}

Triangle left(Triangle tri)
{
	Triangle triangle;
	triangle.a = tri.a;
	triangle.b = Midline(tri.a,tri.b);
	triangle.c = Midline(tri.a,tri.c);
	return triangle;
}

Triangle right(Triangle tri)
{
	Triangle triangle;
	triangle.a = Midline(tri.a,tri.b);
	triangle.b = tri.b;
	triangle.c = Midline(tri.b,tri.c);
	return triangle;
}

Triangle top(Triangle tri)
{
	Triangle triangle;
	triangle.a = Midline(tri.a,tri.c);
	triangle.b = Midline(tri.c,tri.b);
	triangle.c = tri.c;
	return triangle;
}

void draw(int repeat,Triangle tri) {
	if (repeat == 0)
	{
		couleur c;
		c=CouleurParNom("black");
		ChoisirCouleurDessin(c);
	    RemplirTriangle(tri.a.x,tri.a.y,tri.b.x,tri.b.y,tri.c.x,tri.c.y);
	}
	else
	{
		draw(repeat-1,left(tri));
		draw(repeat-1,right(tri));
		draw(repeat-1,top(tri));
	}
}

int main(int argc, char * argv[]){
	int repeat;
	Triangle tri;
	tri.a.x=X;
	tri.a.y=Y;
	tri.b.x=XX;
	tri.b.y=YY;
	tri.c.x=XXX;
	tri.c.y=YYY;

    if (argc != 2)
    {
    	fprintf(stderr, "format: %s <nombre de repetition> \n",argv[0]);
    	return EXIT_FAILURE;
    }

   	repeat = atoi(argv[1]);

   	printf("%d\n",repeat );

	InitialiserGraphique();
    CreerFenetre(0,0,1000,1000);

    draw(repeat,tri);

	Touche();	
    FermerGraphique();

	return EXIT_SUCCESS;
}